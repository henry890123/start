#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int min(int a,int b){
	return (a<b?a:b);
}
int max(int c,int d){
	return(c>d?c:d);
}


int main(int argc, char *argv[]) {
	int min(int a,int b);
	int max(int c,int d);
	int a,b,c,d;
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	printf("%d\n",min(a,b)+max(c,d));

}

