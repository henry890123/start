#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,a,b;
	scanf("%d",&x);
	a=x/10;
	b=x%10;
	if (x>=20){
	switch (a){
		case 0 :
		case 1 :break;
		case 2 :printf("twenty");break;
		case 3 :printf("thirty");break;
		case 4 :printf("fourty");break;
		case 5 :printf("fifty");break;
		case 6 :printf("sixty");break;
		case 7 :printf("seventy");break;
		case 8 :printf("eighty");break;
		default:printf("ninety");
	}
	switch (b){
		case 0 :break;
		case 1 :printf("-one");break;
		case 2 :printf("-two");break;
		case 3 :printf("-three");break;
		case 4 :printf("-four");break;
		case 5 :printf("-five");break;
		case 6 :printf("-six");break;
		case 7 :printf("-seven");break;
		case 8 :printf("-eight");break;
		default:printf("-nine");
	}}
	else{
		x=x-10;
		switch(x){
		case 0 :printf("ten");break;
		case 1 :printf("eleven");break;
		case 2 :printf("twelve");break;
		case 3 :printf("thirteen");break;
		case 4 :printf("fourteen");break;
		case 5 :printf("fifteen");break;
		case 6 :printf("sixteen");break;
		case 7 :printf("seventeen");break;
		case 8 :printf("eighteen");break;
		default:printf("nineteen");
		}
	}
	
	return 0;
}

