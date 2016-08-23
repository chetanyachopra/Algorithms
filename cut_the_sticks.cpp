#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int s=a[0];
	for(int i=0;i<n;i++){
		if(s>a[i]){
			s=a[i];
		}
	}      //yha smallest a gaya he.....
while(n>0){
	int zero=0,nzero=0;
	for(int i=0;i<n;i++){
		a[i]=a[i]-s;
		if(a[i]==0){
			zero+=1;
			for(int q=i;q<n;q++){  // 0 ko overrite karegi//
				a[i]=a[i+1];
			} 
		}
		else{
			nzero+=1;
		} 
	}
	//yha tak non-zero value pta lag gai
	cout<<"non zero="<<nzero<<endl;
/*	for(int i=0;i<n;i++){
		cout<<a[i];
	} */
n=n-nzero;
}
	return 0;
}
	

