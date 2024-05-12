#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,d;
	float b;
	int c,i;
	scanf("%f,%f,%d",&a,&b,&c);
	b=b/12;
	for(i=1;i<=c;i++){
		d=(1+b)*(d+a);
	}
	printf("%.2f",d);
	return 0;
}



