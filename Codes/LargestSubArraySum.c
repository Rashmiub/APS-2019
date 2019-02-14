#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=8,i;
    int arr[8]={-2,-3,4,-1,-2,1,5,-3};
    int max=0;
    int tmax=0;
    for(i=0;i<n;i++)
    {
        tmax=tmax+arr[i];
        if(tmax<0)
            tmax=0;
        if(max<tmax)
        {
            printf("%d\n",i);
            max=tmax;
        }
    }
    printf("%d",max);
    return 0;
}
