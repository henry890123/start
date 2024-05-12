#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[8],i,b=0;
	for(i=1;i<=8;i++){
		scanf("%d",&a[i]);}
	for(i=1;i<=8;i++){
		if(a[i]%2==0){
			b=b+a[i];
		}
	}
	printf("%d\n",b);
	return 0;
}

