#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	scanf("%d",&x);
	if(x%2==0||x<0){
		printf("%d\n",x*x);
	} 
	else{
		printf("%d\n",x/2);
	}
	return 0;
}

