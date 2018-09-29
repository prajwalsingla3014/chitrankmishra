
#include<iostream>
#include<stdlib.h>

using namespace std;
void quicksort(int arr[],int s,int e,int k);
int partition1(int arr[], int s, int e);
int main()
{
    int arr[]={26,45,72,1,45,62,32,12,42,51};
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    quicksort(arr,0,9,3);
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
}

void quicksort(int arr[],int s,int e,int k)
{
    if(s<e)
    {
    int pivot= partition1(arr,s,e);
    if(pivot==k)
    {
        cout<<arr[pivot]<<endl;
        exit(0);
    }
    quicksort(arr,s,pivot-1,k);
    quicksort(arr,pivot+1,e,k);
    }
}

int partition1(int arr[], int s, int e)
{
    int temp;
    int pivot=e;
    for(int i=e-1;i>=s;i--)
    {
        if(arr[i]>arr[pivot])
        {
            temp=arr[i];
            arr[i]=arr[pivot-1];
            arr[pivot-1]=arr[pivot];
            arr[pivot]=temp;
            pivot--;
        }
    }
    return pivot;
}
