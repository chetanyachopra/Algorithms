#include<iostream>
using namespace std;
int main(){
	int num,var=0,r;
	cin>>num;
	int temp=num;
	while(num>0){
		r=num%10;
		var=var*10+r;
		num=num/10;
	}
	if(var==temp){
		cout<<"he";
	}
	else{
		cout<<"nhi";
	}
}
