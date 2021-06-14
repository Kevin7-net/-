#include<iostream>
using namespace std;
int main()
{
	 int x=0;
	 int arr3[1000];
	    int m;
	 cin>>m;
	 int arr1[m];
	 for(int i=0;i<m;i++)
	 {
	  cin>>arr1[i];
	 }
	 int n;
	 cin>>n;
	 int arr2[n];
	 for(int j=0;j<n;j++)
	 {
	  cin>>arr2[j];
	 }
	 for(int k=0;k<m;k++)
	 {
	   for(int l=0;l<n;l++)
	   {
	    if(arr1[k]==arr2[l])
	    {
	     arr3[x++]=arr1[k];
	  }
	   }   
	 }
	 int y=0;
	 for(int i=0;i<x-1;i++)
	 {
	  for(int j=i+1;j<x;j++)
	  {
	   if(arr3[i]==arr3[j])
	   {
	    y++;
	    j=x;
	   }
	  }
	 }
	 for(int i=0;i<x-1;i++)
	 {
	  for(int j=i+1;j<x;j++)
	  {
	   if(arr3[i]==arr3[j])
	   {
	    for(int k=j;k<x-1;k++){
	     arr3[k]=arr3[k+1];
	    }
	   }
	  }
	 }
	 for(int i=0;i<x-y;i++)
	 {
	  cout<<arr3[i]<<" ";
	 }
	 return 0;
}
