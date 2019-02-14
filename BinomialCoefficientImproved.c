#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min(int,int);

int main()
{
    int n,k,i,j;
    printf("Enter n and k\n");
    scanf("%d%d",&n,&k);
    int arr[k+1];
    memset(arr,0,sizeof(arr));
    arr[0]=1;
    for(i=0;i<=n;i++)
    {
        for(j=min(i,k);j>0;j--)
        {
            arr[j]=arr[j]+arr[j-1];
        }
    }
    for(i=0;i<=n;i++)
        printf("%d\t",arr[i]);
    return 0;
}

int min(int i,int k)
{
    int mini;
    if(i<k)
        mini=i;
    else
        mini=k;
    return mini;
}
