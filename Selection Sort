#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //selection sort
    int n;
    cout<<"enter no. of elements"<<endl;
    cin>>n;
    int ar[n];
cout<<"enter  elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    cout<<"unsorted array"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n-1;i++)
    {
       for(int j=i+1;j<n;j++)
       {

         if(ar[j]<ar[i])
         {
            int temp=ar[j];
            ar[j]=ar[i];
            ar[i]=temp;
         }
       }
    }

    cout<<"sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;

    return 0;
}
