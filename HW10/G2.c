#include <stdio.h>

int main(void)
{
    int num;
    FILE* f;
    f = fopen("input.txt", "r");
    if(f==NULL) return 1;
    fscanf(f, "%d", &num);
    fclose(f);

    f = fopen("output.txt", "w");
    int ASKII = 65;
    int digit[4] = {2, 4, 6, 8};
    int counter = 0;
    for(int i = 1; i<=num ; ++i)
    {
        counter = counter>3?0:counter;
        if(i%2==0)
        {
            fprintf(f, "%d", digit[counter]);
            counter++;
        } else {
            fprintf(f, "%c", ASKII++);
        }
        
    }
    fclose(f);
    return 0;
}