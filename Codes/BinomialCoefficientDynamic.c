/*Binomial Coefficients*/
/*Pascal's triangle*/

#include <stdio.h>
#include <stdlib.h>

int min(int ,int);

int main()
{
    int n,k,i,j;
    printf("Enter the values of n And k for C(n,k):");
    scanf("%d%d",&n,&k);
    int arr[n][k];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=min(i,k);j++)
        {
            if(j==0 || i==j)
            {
                arr[i][j]=1;
            }
            else{
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=min(i,k);j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
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
