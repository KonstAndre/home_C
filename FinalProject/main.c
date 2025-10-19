#include "stdio.h"
#include "stdlib.h"
#include "temp_api.h"
#include <stdint.h>
#include <unistd.h>

#define SIZE 30000000

int main(int argc, char *argv[])
{
    unsigned int counter=0;
    int rez=0;  
    TEMDET *info = malloc(SIZE*sizeof(TEMDET));
    if(info==NULL) 
        return -1;
    if(argc==1)
    {
        printf("Enter -h for help\n");
        return -1;
    }
    while((rez=getopt(argc, argv, ":hf:s:m:"))!=-1)
    {
        switch(rez)
        {
            case 'h':
                printf("Program for working with temperaturre detectors\n");
                printf("List of avalable arguments:\n");
                printf("  f: download data from csv file;\n");
                printf("  s: sorting demanding. 1 - by date; 2 - by temp;\n");
                printf("  m: print statistics for exact month.\n");
                return 0;
                break;
            case 'f':
                FILE *fp = fopen(optarg, "r");
                if(fp==NULL)
                {
                    printf("File open error!\n");
                    return 1;
                }
                int val;
                int correct_data_num = 6;
                while((val=fscanf(fp, "%u;%hu;%hu;%hu;%hu;%hhd\n", &info[counter].ddd, &info[counter].mmm, &info[counter].dd, &info[counter].hh, &info[counter].mm, &info[counter].temperature))>=0)
                {
                    if(val<correct_data_num)
                    {
                        
                        char s[20];
                        val = fscanf(fp, "%[^\n]", s);
                        printf("Error in data at row: %d\n", counter+1);
                        printf("*-------------------------------*\n");
                    } else 
                    {
                        counter++;
                    }
                }
                fclose(fp);
                break;
            case 's':
                if(atoi(optarg)==1) SortByDate(counter, info);
                if(atoi(optarg)==2) SortByTemp(counter, info);
                break;
            case 'm':
                printf("==========================================\n");
                printf("Data from sensors: %d month\n", atoi(optarg));
                stat_temp(counter, info, atoi(optarg));
                return 0;
                break;
            case '?'||':': 
                printf("Enter -h for help\n");
                return -1;
                break;
        }
    }
    stat_temp(counter, info, 0);
    free(info);
    return 0;
}

