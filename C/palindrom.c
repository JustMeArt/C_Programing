#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char quack[] = "ququq";
    scanf("%s", quack);

    int quack_size = strlen(quack);
    
    
    for (int i = 0; i < quack_size/2; i++)
    {
        if (quack[i] != quack[quack_size-1 - i])
        {
            
            puts("Fail");
            return 1;
        }
    }
    puts("happy");
    
    return 0;
}