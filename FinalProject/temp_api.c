#include "temp_api.h"
#include "stdio.h"



float mean_temp(int size, TEMDET info[], int mod)
{
    long int sum=0;
    char flag = 0;
    if(mod==0)
    {
        for(int i=0; i<size; ++i)
        {
            sum+=info[i].temperature;
        }
        return (float)sum/(float)size;
    } else
    {
        int month_count = 0;
        for(int i=0; i<size; ++i)
        {   
            while(info[i].mmm==mod)
            { 
                sum+=info[i].temperature;
                month_count++;
                i++;
                flag=1;
            }
            if(flag) break;
        }
        return (long double)sum/(long double)month_count;
    }
}
int min_temp(int size, TEMDET info[], int mod)
{
    int8_t min;
    char flag1 = 0;
    char flag2 = 0;
    if(mod==0)
    {
         min = info[0].temperature;
        for(int i = 1; i<size; ++i)
        {
            min = info[i].temperature<min?info[i].temperature:min;
        }
        return min;
    } else 
    {
        
        for(int i =0; i<size; ++i){
            while(info[i].mmm==mod)
            {
                if(flag1==0)
                {
                    min = info[i].temperature;
                    flag1=1;
                }
                min = info[i].temperature<min?info[i].temperature:min;
                i++;
                flag2=1;
            }
            if(flag2) break;
        }
        return min;
    }
    
}
int max_temp(int size, TEMDET info[], int mod)
{
    int8_t max;
    char flag1 = 0;
    char flag2 = 0;
    if(mod==0)
    {
        max = info[0].temperature;
        for(int i = 1; i<size; ++i)
        {
            max = info[i].temperature>max?info[i].temperature:max;
        }
        return max;
    } else 
    {
        for(int i = 0; i<size; ++i)
        {
        while(info[i].mmm==mod)
            { 
                if(flag1==0)
                {
                    max = info[i].temperature;
                    flag1=1;
                }
                max = info[i].temperature>max?info[i].temperature:max;
                i++;
                flag2=1;
            }
            if(flag2) break;
        }
        return max;
    }
    
} 
void stat_temp(int size, TEMDET info[], int mod)
{
    if(mod==0)
    {
        for(int i = 1; i<=12; i++)
        {
            printf("Month %d -- Average: %.2fC; min: %dC; max: %dC\n", i, mean_temp(size, info, i), min_temp(size, info, i), max_temp(size, info, i));
        }
        printf("==========================================\n");
        printf("2021 Year statistic -- Average: %.2fC; min: %dC; max: %dC", mean_temp(size, info, mod), min_temp(size, info, mod), max_temp(size, info, mod));
    } else
    {
        printf("Month %d -- Average: %.2fC; min: %dC; max: %dC\n", mod, mean_temp(size, info, mod), min_temp(size, info, mod), max_temp(size, info, mod));
    }
}

static void changeIJ(TEMDET info[], int i, int j)
{
    TEMDET temp;
    temp=info[i];
    info[i]=info[j];
    info[j]=temp;   
}

void AddRecord(uint32_t year, uint16_t month, uint16_t day, uint16_t hour, uint16_t min, int16_t temp, TEMDET info[], int num)
{
    info[num].ddd = year;
    info[num].mmm = month;
    info[num].dd = day;
    info[num].hh = hour;
    info[num].mm = min;
    info[num].temperature = temp;
}

void DellRecord(int idx, TEMDET info[], int size)
{
    for(int i=idx; i<size-1; ++i)
    {
        changeIJ(info, i, i+1);
    }
    info[size-1].ddd=0;
    info[size-1].mmm=0;
    info[size-1].dd=0;
    info[size-1].hh=0;
    info[size-1].mm=0;
    info[size-1].temperature=0;
}

void SortByTemp(int size, TEMDET info[])
{
    for(int i=0; i<size-1; ++i)
    {
        for(int j=i+1; j<size; ++j)
        {
            if(info[i].temperature>info[j].temperature)
            {
                changeIJ(info, i, j);
            }
        }
    }
}

unsigned int DateToInt(TEMDET sensor)
{
    return sensor.ddd<<16 | sensor.mmm<<8 | sensor.dd;
}

void SortByDate(int size, TEMDET info[])
{
    for(int i=0; i<size-1; ++i)
    {
        for(int j=i+1; j<size; ++j)
        {
            if(DateToInt(info[i])>DateToInt(info[j]))
            {
                changeIJ(info, i, j);
            }
        }
    }
}