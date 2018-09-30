#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
/* You can find factorial of humongous number one os the best i made till date.*/
void extraLongFactorials(int n) {
    // Complete this function
    int *num=malloc(40000000000000);
    int temp=n;
    int j=0;
    int r=0;
    int remain=0;
    while(temp!=0)
    {
        r=temp%10;
        temp=temp/10;
        num[j]=r;
        j++;
    }
    for(int i=n-1;i>0;i--)
    {   temp=0;
        int k=0;
        while(k<j)
        {
            temp=i*num[k];
            temp=temp+remain;
            num[k]=temp%10;
            temp=temp/10;
            remain=temp;
            k++;
        }
        while(remain!=0)
        {
            r=remain%10;
            remain=remain/10;
            num[j]=r;
            j++;
        }
    }
   for(int i=j-1;i>=0;i--)
   {
       printf("%d",num[i]);
   }
   system("pause");
}

int main() {
    int n;
    scanf("%i", &n);
    extraLongFactorials(n);
    return 0;
}
