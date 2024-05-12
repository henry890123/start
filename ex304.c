#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=0,y;
	scanf("%d",&a);
	if(a>=3&&a<=10){
		y=pow(a,4)+pow((a+3),4)+pow((a+6),4)+pow((a+9),4)+pow((a+12),4)+pow((a+15),4);
		printf("%d\n",y);
	}
	else{
		printf("error");
	}
	return 0;
}

