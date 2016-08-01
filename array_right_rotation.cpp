#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,k;
	cout<<"enter size of array=\t";
	cin>>n;
	cout<<"no of indices u wane rotate the array to right=\t";
cin>>k;
int a[n];
cout<<"entre elements of array=\t";
    for(int i=0;i<n;i++)
        cin>>a[i];
    int temp=0;
    for(int i=0;i<k;i++){
        temp=a[n-1];
        for(int j=n-1;j>=0;j--){
            if(j==0){
            	a[j]=temp;
            }
                else{
                a[j]=a[j-1];}
				
				}
    
    }
   
   for(int i=0;i<n;i++){
   	cout<<a[i]<<" ";
   }
}

