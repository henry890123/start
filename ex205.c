#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float purchase(float x){
	if (x>500){
		if(x>1000){
			return 0.8*x;
		}
		else{
			return 0.9*x;
		}
	}
	else{
		return x;
	}
}
int main(int argc, char *argv[]) {
	float purchase(float x);
	float x;
	scanf("%f",&x);
	printf("%.2f\n",purchase(x));
	
	return 0;
}

