#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[100],b[100],c[100];
int n,i,j,t,max;
scanf("%d\n",&n);
for(i=0;i<n;i++){
	scanf("%d",&a[i]);}
	if(n==1){
		printf("%d 1",a[0]);
	}
for(i=1;i<=n;i++){
for(j=0;j<n-1;j++){
	if(a[j]>a[j+1]){
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
		
	}}
	j=0;
	t=-1;
}
	for(i=0;i<n-1;i++){
	if(a[i]!=a[i+1]){
		b[j]=i-t;
		c[j]=i;
		t=i;
		j++;
	}
	b[j]=n-1-t;
	c[j]=n-1;
	max=b[0];} 
	for(i=1;i<=j;i++){
		if(max<b[i]){
			max=b[i];
		}
	}
	for(i=0;i<=j;i++){
		if(b[i]==max){
			t=c[i];
			printf("%d %d\n",a[t],b[i]);
		}
	}

	return 0;
}

