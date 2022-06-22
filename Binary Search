#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarysearch(int s, int l ,int key,int ar[])
{
     int mid=(s+l)/2;
    if(mid==key)
    {
        cout<<"found at "<<mid<<endl;
    }
    else if(mid>key)
    {
        l=mid-1;
        binarysearch(s,l,key,ar);
    }

    else
    {
        s=mid+1;
        binarysearch(s,l,key,ar);

    }

}
int main()
{
    //Binary search
    int n,key,s=0,l,mid;
    cin>>n>>key;
    l=n;
    int ar[n];

    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    binarysearch(s,l,key,ar);




    return 0;
}
