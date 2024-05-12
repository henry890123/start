#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=1,i;
	for(i=1;i<=9;i++){
		a=2*(a+1);
	}
	printf("%d\n",a);
	 
	return 0;
}

