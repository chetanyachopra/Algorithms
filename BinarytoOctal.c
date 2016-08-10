#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("Enter binary number=\t");
	scanf("%d",&n);
	int i=0,decimal=0;
	while(n>0){
		decimal+=(n%10)*pow(2,i);
		++i;
		n/=10;
	}
	int j=1,octal=0;
	while(decimal>0){
		octal+=(decimal%8)*j;
		j*=10;
		decimal/=8;
	}
	printf("octal number =\t%d",octal);
}
