#include<stdio.h>
#include<conio.h>
int main(){
	int n;scanf("%d",&n);int sum=0;
	for(int i=1;i<=n;i++){
		sum+=(i*i);
	}
	printf("%d",sum);
}
