#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void mergee(int ar[],int l,int mid,int r)
{
    int n1=mid-l+1;
    int n2=r-mid;
    int a[n1],b[n2];

    for(int i=0;i<n1;i++)
    {
        a[i]=ar[l+i];
    }

    for(int i=0 ;i<n2;i++)
    {
        b[i]= ar[mid+1+i];
    }

    int i=0,j=0,k=l;

    while (i<n1 && j<n2 )
    {
        if (a[i]<b[j])
        {
            ar[k]=a[i];
            k++; i++;
        }

        else {
            ar[k]=b[j];
            k++;j++;
        }
    }

    while(i<n1){
            ar[k]=a[i];
            k++; i++;
        }

while    (j<n2){
            ar[k]=b[j];
            k++;j++;
        }


}

int mergeSort(int ar[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergeSort(ar,l,mid);
        mergeSort(ar,mid+1,r);
        mergee(ar,l,mid,r);
    }
}


int main()
{
    int ar[]={1,2,4,5,7,8,3,9};
    mergeSort(ar,0,sizeof(ar)/sizeof(ar[0]));
    for(int i=0;i<sizeof(ar)/sizeof(ar[0]);i++)
    {
        cout<<ar[i]<<" ";
    }

 return 0;
}
