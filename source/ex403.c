#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float fib(int n){
	if(n==1){
		return 1 ;
	} 
	if(n==2){
		return 2 ;
	}
	else{
		return fib(n-1)+fib(n-2);
	}
}
float sum(int n){
	float fib(int n);
	float k;
	int i;
	if(n==1){
		return 2;
	}
	else{
	return (sum(n-1)+fib(n+1)/fib(n));
	}}



int main(int argc, char *argv[]) {
	float sum(int n);
	int n;
	float j;
	scanf("%d",&n);
	j=sum(n);
	printf("%.2f\n",j);
	}


