#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int count_set_bits(int);
int min(int,int);

int main()
{
    int arr[3][3]={{8,2,5},{3,2,7},{4,1,2}};  //input matrix
    int i,j,mask,index,val,set_bits;
    int set[8];
    set[0]=0; //set first index to zero
    for(i=1;i<8;i++)
    {
        set[i]=INT_MAX; //initialize it to infinity(INT_MAX)
    }

    for(i=0;i<8;i++) //generate all combinations 000,001,.....111
    {
        mask=i;//take mask
        set_bits=count_set_bits(mask);//count the number of bits which are set
        for(j=0;j<3;j++) //
        {
            if((mask & (1<<j))==0)    //check if jth bit is set
            {
                index=mask|(1<<j);    //OR operation of mask and j
                val=min(set[index],set[mask]+arr[set_bits][j]);  //get the minimum of set value and input
                set[index]=val;       //set index value
            }
        }
    }
    for(i=0;i<8;i++)
    {
        printf("%d\t",set[i]);
    }
    return 0;
}


int count_set_bits(int mask)
{
    int count=0;
    while(mask)
    {
        count=count+1;
        mask=mask&(mask-1);
    }
    return count;
}

int min(int s,int a)
{
    if(s<a)
        return s;
    else
        return a;
}
