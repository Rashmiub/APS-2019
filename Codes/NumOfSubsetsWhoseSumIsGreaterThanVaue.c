/*Return the number of subsets whose sum is greater than or equal to the given value*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int subSum(int *,int ,int );

int main()
{
    int set_size=3;
    int set[]={5,3,2};
    int num=subSum(set,set_size,2);
    printf("%d",num);
    return 0;
}

int subSum(int *set,int set_size,int value)
{
    int count=0;
    int x,k;
    for(x=0;x<pow(2,set_size);x++) //generate all numbers 000,001,010,011,100,101,110,111
    {
        int sum=0;
        for(k=0;k<set_size;k++)
        {
            if(x&(1<<k))         //check if bit is set
            {
                sum=sum+set[k]; //if kth element is set pick kth element and add it to sum
            }
        }
        if(sum>=value)   //check if sum is greater than or equal to value, if yes increment the count
            count++;
    }
    return count;
}
