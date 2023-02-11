#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//in array we have pass by reference i.e we pass the address not the value
//size also has to be explicitly specified
void printArray(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
void incr(int a[],int n)
{
  a[0]=a[0]+10;;
  printArray(a,n);
  }
int linearSearch(int arr[],int n,int key){
  for(int i=0;i<n;i++){
    if(arr[i]==key){
      return i;//returning the index of the element searched
    }
  }
  return -1;//if element is not found
}
int linearSearch1(int arr[],int n,int key){
  for(int i=0;i<n;i++){
    if(arr[i]==key){
      return i;
    }
  }
  return -1; 
}
int main() {
 // int arr[]={2,3,4,5,6};
  // for(int i=0;i<5;i++){
  //   arr[i]=1;
  //   cout<<arr[i]<<" " ;
  // }
  // memset(arr,-1,sizeof(arr));
  // for(int i=0;i<5;i++){
  //   cout<<arr[i]<<" ";
  //   }
  // memset(arr,1,sizeof(arr));
  // for(int i=0;i<5;i++){
  //   cout<<arr[i]<<" ";
  //   }
  cout<<endl;
  // char str[] = "hello world";
  //   memset(str, 't', sizeof(str));
  //   cout << str;
  int arr1[]={23,43,43};
  
  int n1=sizeof(arr1)/sizeof(int);
  incr(arr1,n1);
  cout<<endl;
  printArray(arr1,3);
  cout<<endl;
   int arr[6]={12,42,45,65,76,88};
 int n=sizeof(arr)/sizeof(arr[0]); 
  int ans=linearSearch1(arr1, n1,23);
  cout<<"The key is present at index "<<ans<<endl;
  int ans1=linearSearch(arr, n, 42);
  cout<<"The key is present at index "<<ans1<<endl;
  int ans2=linearSearch(arr, n, 76);
  cout<<"The key is present at index "<<ans2<<endl;
  
}