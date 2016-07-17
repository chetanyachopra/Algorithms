#include<iostream>
using namespace std;
int main(){
	int n,temp,r,t;
	cin>>n;
	temp=n;
	while(n>0){
		r=n%10;
		n=n/10;
		t+=r*r*r;
	}
	if(t==temp){
		cout<<"yes number is a armstrong";
	}
	else{
		cout<<"no number is not armstrong";
	}
}
