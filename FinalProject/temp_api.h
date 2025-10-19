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

float mean_temp(int, TEMDET info[], int mod); 
int min_temp(int, TEMDET info[], int mod); 
int max_temp(int, TEMDET info[], int mod); 
void stat_temp(int, TEMDET info[], int mod);
static void changeIJ(TEMDET info[], int, int);
void AddRecord(uint32_t year, uint16_t month, uint16_t day, uint16_t hour, uint16_t min, int16_t temp, TEMDET info[], int num);
void DellRecord(int idx, TEMDET info[], int size);
void SortByTemp(int size, TEMDET info[]);
unsigned int DateToInt(TEMDET sensor);
void SortByDate(int size, TEMDET info[]);