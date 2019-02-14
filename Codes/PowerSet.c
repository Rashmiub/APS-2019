#include <stdio.h>
#include <stdlib.h>

int main()
{
    char data[]={'a','b','d'};
    int set_size=3;
    int i=0,j=0;
    unsigned int size=pow(2,set_size);
    for(i=0;i<size;i++)
    {
        for(j=0;j<set_size;j++)
        {
            if(i & (1<<j))
            {
                printf("%c",data[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
