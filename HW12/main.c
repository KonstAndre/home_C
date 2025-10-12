#include "stdio.h"
#include "stdlib.h"
#include "temp_api.h"
#include <stdint.h>
#include <unistd.h>

#define SIZE 30

int AddInfo(TEMDET info[]);

int main(int argc, char *argv[])
{
    int counter=0;
    int rez=0;
    TEMDET info[SIZE];  
    counter = AddInfo(info);
    while((rez=getopt(argc, argv, "hf:m:"))!=-1)
    {
        switch(rez)
        {
            case 'h':
                printf("Program for working with temperaturre detectors\n");
                printf("List of avalable arguments:\n");
                printf("  f: download data from csv file;\n");
                printf("  m: print statistics for exact month.\n");
                break;
            case 'f':
                FILE *fp = fopen("data.csv", "r");
                if(fp==NULL)
                {
                    printf("File open error!\n");
                    return 1;
                }
                int counter=0;
                while(!feof(fp))
                {
                    fscanf(fp, "%u;%hu;%hu;%hu;%hu;%hhd\n", &info[counter].ddd, &info[counter].mmm, &info[counter].dd, &info[counter].hh, &info[counter].mm, &info[counter].temperature);
                    counter++;
                }
                fclose(fp);
                break;
            case 'm':
                printf("==========================================\n");
                printf("Data from sensors:\n");
                for(int i=0; i<counter; ++i)
                {
                    if(info[i].mmm == atoi(optarg)){
                        printf("Date:%u/%hu/%hu/%hu/%hu/ Temp:%hhdC\n", 
                            info[i].ddd, 
                            info[i].mmm, 
                            info[i].dd, 
                            info[i].hh, 
                            info[i].mm, 
                            info[i].temperature);
                    }
                }
                break;
            case '?': 
                printf("Error found!\n");
                break;
        }
    }
    return 0;
}

int AddInfo(TEMDET info[])
{
    int cnt = 0;
    AddRecord(2024, 3, 4, 6, 0, 22, info, cnt++);
    AddRecord(2024, 5, 7, 16, 0, -4, info, cnt++);
    AddRecord(2024, 1, 12, 22, 0, -20, info, cnt++);
    AddRecord(2024, 1, 7, 1, 0, 2, info, cnt++);
    AddRecord(2024, 3, 5, 6, 0, 1, info, cnt++);
    return cnt;
}
