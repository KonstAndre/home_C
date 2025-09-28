#include "stdio.h"
#include "stdlib.h"
#include "temp_api.h"
#include <stdint.h>

struct temp_det
{
    uint32_t ddd;
    uint16_t mmm;
    uint16_t dd;
    uint16_t hh;
    uint16_t mm;
    int8_t temperature; 
};

int main()
{
    struct temp_det info[100];   
    printf("%s", "abce");
    return 0;
}
