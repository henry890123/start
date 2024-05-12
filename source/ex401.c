#include <stdio.h>
#include <stdlib.h>
#include<math.h>
long wei(long x){
	return log10(x)+1;
}//算位数 
long revert(long x){
	long wei(long x);
	int k;
	k=wei(x);
	int y=0,revertnum=0;
	int j;
	for(j=1;j<=k;j++){
		y=x%10;
		revertnum=revertnum*10+y;
		x=x/10;
	}
    return revertnum;//反向输出数 
}
int main(int argc, char *argv[]) {
long wei(long x);
	long x,m,n,w;
	long p,q;
	int e=0;
	scanf("%d",&w);
	printf("0,");
	e++;
	for(x=0;x<=w;x++){
	n=wei(x);
    if(n%2==1){
	m=(n-1)/2+1;
    	q=x/pow(10,m);//前面的数 
    	p=x-q*(pow(10,m));//后面的数 
    long revert(long x);
    long pf;
	pf=revert(p)/10;	
    if(pf==q||q==pow(10,n/2-1)*p){
    	printf("%d,",x);
    	e++;
    	if(e%10==0){
		printf("\n");}
	}}
	 else{
    	m=n/2;
    	q=x/pow(10,m);//前面的数 
    	p=x-q*pow(10,m);//后面的数 
    long revert(long x);
    long pf;
	pf=revert(p);	
    if(pf==q||q==10*p){
    	printf("%d,",x);
    	e++;
    	if(e%10==0){
		printf("\n");}
	}}

}}

	

