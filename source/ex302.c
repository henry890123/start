#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int wanshu(int x){
	int i,u=0;
	for(i=1;i<x;i++){
		if(x%i==0){
			u=u+i;
		}
		
	}
	if(x==u){
	     return x;
	}
	else{
		return 1;
	}
}
void output (int m,int n){
	int y,i,x,u=-1;
	int wanshu(int x);
	for(i=m;i<=n;i++){
		y=wanshu(i);
		if(y!=1){
			u++;
		if(u==0){
		printf("%d",y);
	}
	else{
		printf(",%d",y);
	}
	}
	
	
}}

int main(int argc, char *argv[]) {
	int m,n,temp,i;
	scanf("%d,%d",&m,&n);
	if(m>0&&m<10000&&n>0&&n<10000){
	   if(m>n){
	   	temp=m;
	   	m=n;
	   	n=temp;
	   	
	   }	
	}
	
	else{
		printf("error\n");
	}
	output(m,n);
	return 0;
}
