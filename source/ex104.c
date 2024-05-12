#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a,b,c,d,e;
	int m,n,o,p,q;
	scanf("%c%c%c%c%c",&a,&b,&c,&d,&e);
    m=a+4;
    n=b+4;
    o=c+4;
    p=d+4;
    q=e+4;
    if(m<97||m>122){
	m-=26;
}
else{
	m=m;
}
if(n<97||n>122){
	n-=26;
}
else{
	n=n;
}
if(o<97||o>122){
	o-=26;
}
else{
	o=o;}
	if(p<97||p>122){
	p-=26;
}
else{
	p=p;}
	if(m<97||m>122){
	q-=26;
}
else{
	q=q;}
	
	
	printf("%c%c%c%c%c\n",m,n,o,p,q);
	return 0;
}



