#include<iostream>
using namespace std;
int main(){
	cout<<"input length of array="<<endl;
	int n,k;
	cin>>n;
	cout<<"enter number of indices u want to rotate the array=";
	cin>>k;
	int a[n];
	cout<<"Enter elements of array=";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int temp=0;
	for(int q=0;q<k;q++){
		temp=a[0];
		for(int i=0;i<n;i++){
			if(i==(n-1)){
				a[n-1]=temp;
			}
			else{
				a[i]=a[i+1];
			}
		}
		
	}
	cout<<"Array after rotation =";
	for(int i=0;i<n;i++){cout<<a[i]<<" ";
	}
}
