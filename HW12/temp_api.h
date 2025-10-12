#include <stdint.h>
#ifndef DET_STRUCT
#define DET_STRUCT
typedef struct 
{
    uint32_t ddd;
    uint16_t mmm;
    uint16_t dd;
    uint16_t hh;
    uint16_t mm;
    int8_t temperature; 
} TEMDET;
#endif

int mean_temp(int, TEMDET info[]); 
int min_temp(int, TEMDET info[]); 
int max_temp(int, TEMDET info[]); 
void stat_temp(int, TEMDET info[]);
static void changeIJ(TEMDET info[], int, int);
void AddRecord(uint32_t year, uint16_t month, uint16_t day, uint16_t hour, uint16_t min, int8_t temp, TEMDET info[], int num);
void DellRecord(int idx, TEMDET info[], int size);
void SortByTemp(int size, TEMDET info[]);
unsigned int DateToInt(TEMDET sensor);
void SortByDate(int size, TEMDET info[]);