#include<stdio.h>
#include<conio.h>
int main(){
	int from,upto;
	printf("enter range in which you want to check availability of squares=\t");
	scanf("%d%d",&from,&upto);
	for(int i=from;i<=upto;i++){
		for(int j=1;j<i;j++){
			if(i==(j*j)){
				printf("%d ",i);
			}
			else{continue;
			}
		}
	}
}