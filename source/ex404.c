#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	scanf("%d",&x);
	if(x%100==0){
		if(x%400==0){
			printf("%d is a leap year",x);
		}
		else{
			printf("%d is not a leap year",x);
		}
	}
	else{
		if(x%4==0){
			printf("%d is a leap year",x);
		}
		else{
			printf("%d is not a leap year",x);
		}
	}
	return 0;
}



