#include <stdio.h>

#define MAXIMUM sizeof(list) / sizeof(list[0]) 

int main(int argc, char *argv[])
{

    int list[5] = {12,14,11,25,2};
    int swap = 0;
    int sorted;
    while (!sorted)
    {
        sorted = 1;
        for (int i = 0; i < MAXIMUM-1; i++)
        {
            if (list[i] > list[i+1])
            {
                int swap = list[i];
                list[i] = list[i+1];
                list[i+1] = swap;
                sorted = 0;
            }
                
        }
    }
    
    

    for (int i = 0; i < MAXIMUM; i++)
    {
        printf("%d\n", list[i]);
    }
    

    return 0;
}