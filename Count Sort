#include<bits/stdc++.h>
using namespace std;

void countSort(int a[],int n){
    int k=a[0];
    for(int i=1;i<n;i++) k=max(k,a[i]);
    int count[10]={0};
    for(int i=0;i<n;i++) count[a[i]]++;
    int j=0;
    for(int i=0;i<=k;i++){
        while(count[i]--){
            a[j]=i;
            j++;
        }}
}


int main()
{
    int arr[]= {0,5,4,7,4,9};
    countSort (arr,5);
    for (int i=0;i<=5;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
