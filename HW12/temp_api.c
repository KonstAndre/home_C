#include "temp_api.h"
#include "stdio.h"

int mean_temp(int size, TEMDET info[])
{
    int sum;
    for(int i=0; i<size; ++i)
    {
        sum+=info[i].temperature;
    }
    return (float)sum/(float)size;
}
int min_temp(int size, TEMDET info[])
{
    int8_t min = info[0].temperature;
    for(int i = 1; i<size; ++i)
    {
        min = info[i].temperature<min?info[i].temperature:min;
    }
    return min;
}
int max_temp(int size, TEMDET info[])
{
    int8_t max = info[0].temperature;
    for(int i = 1; i<size; ++i)
    {
        max = info[i].temperature>max?info[i].temperature:max;
    }
    return max;
} 
void stat_temp(int size, TEMDET info[])
{
    printf("Среднегодовая температура: %dC\nМинимальная температура: %dC\nМаксимальная емпература: %dC", mean_temp(size, info), min_temp(size, info), max_temp(size, info));
}

static void changeIJ(TEMDET info[], int i, int j)
{
    TEMDET temp;
    temp=info[i];
    info[i]=info[j];
    info[j]=temp;   
}

void AddRecord(uint32_t year, uint16_t month, uint16_t day, uint16_t hour, uint16_t min, int8_t temp, TEMDET info[], int num)
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