#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
  //bubble sort
  int n;
  cin>>n;
  int ar[n];
  for(int i=0; i<n;i++)
  {
      cin>>ar[i];
  }
  int counter=1;
  while(counter<n)
  {
      for(int i=0;i<n-counter;i++)
      {
          if(ar[i]>ar[i+1])
          {
              int temp=ar[i+1];
              ar[i+1]=ar[i];
              ar[i]=temp;
      }
          }
             counter++;
  }
  
   for(int i=0; i<n;i++)
  {
      cout<<ar[i];
  }


    return 0;
}
