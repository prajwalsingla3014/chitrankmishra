#include<iostream>
/* radix sort code for efficient sorting. Coded in very lucid manner easy to understand.*/
using namespace std;
int count(int arr[], int n, int e);
void radixsort(int arr[],int n);

int main()
{
    int arr[]={14,45,75,84,59,56,35,25,154,5};
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    radixsort(arr,10);
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

}

void radixsort(int arr[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
        if(arr[i]>max)
        max=arr[i];
for(int i=1;(max/i)>0;i*=10)
    count(arr,i,n);
}

int count(int arr[], int e, int n)
{
    int count[10];
    for(int i=0;i<10;i++)
        count[i]=0;
    for(int i=0;i<n;i++)
        count[(arr[i]/e)%10]++;

    for(int i=1;i<10;i++)
        count[i]=count[i]+count[i-1];

    int output[n];
    for(int i= n-1;i>=0;i--)
    {
        output[count[(arr[i]/e)%10]-1]=arr[i];
        count[(arr[i]/e)%10]--;
    }

    for(int i=0;i<n;i++)
        arr[i]=output[i];
}
