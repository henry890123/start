#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,a[5],temp,k;
	for(i=0;i<=3;i++){
		scanf("%d ",&a[i]);
	}
	scanf("%d",&a[4]);
	for(k=0;k<5;k++){
	for(i=0;i<=3;i++){
		if(a[i]>a[i+1]){
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			
		}
	}}
	for(i=0;i<=3;i++){
		printf("%d ",a[i]);
	}
	printf("%d",a[4]);

	return 0;
}

