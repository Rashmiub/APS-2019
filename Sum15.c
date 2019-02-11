#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr[16],i=0;
    memset(arr,0,16*sizeof(int));
    arr[0]=1;
    for(i=0;i<16;i++)
    {
        if(arr[i]==1)
        {
            arr[i+3]=arr[i+3]+1;
        }
    }
    for(i=0;i<16;i++)
    {
        if(arr[i]==1)
        {
            arr[i+5]=arr[i+5]+1;
        }
    }
    for(i=0;i<16;i++)
    {
        if(arr[i]==1)
        {
            arr[i+10]=arr[i+10]+1;
        }
    }
    printf("%d",arr[15]);
    return 0;
}
