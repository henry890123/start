#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x=0;
	int a,b,c;
	for(x=100;x<=999;x++){
		a=x/100;
		b=x/10-10*a;
		c=x%10;
		if(x==pow(a,3)+pow(b,3)+pow(c,3)){
			printf("%d\n",x);
		}
	}
	return 0;
}

