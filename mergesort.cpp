#include<iostream>
/* this program performs efficient sorting technique*/
using namespace std;
void mergesort(int arr[],int l,int r);
void merge1(int arr[],int l,int m1, int m2,int r);

int main()
{
    int arr[]={45,23,65,12,41,52,63,14};
    for(int i=0;i<8;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    mergesort(arr,0,7);
    for(int i=0;i<8;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void mergesort(int arr[],int l,int r)
{
    if(l<r){
        int m=(l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge1(arr,l,m,m+1,r);
    }
}

void merge1(int arr[],int l,int m1, int m2,int r)
{
   int t[r-l+1];
   int i=l,j=m2;
   int k=0;
   while(i<=m1&&j<=r)
   {
       if(arr[i]<=arr[j])
       {
           t[k]=arr[i];
           i++;
           k++;
       }
       else
       {
           t[k]=arr[j];
           j++;
           k++;
       }
   }
    while(i<=m1)
       {
           t[k]=arr[i];
           i++;
           k++;
       }
    while(j<=m2)
       {
           t[k]=arr[j];
           j++;
           k++;
       }
    for(int i=l,j=0;i<=r;j++,i++)
    {
        arr[i]=t[j];
    }
}
