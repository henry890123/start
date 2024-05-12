#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0;
	FILE *fp;
	char ch1;
	fp=fopen("D:\\cxdownload\\init.txt","w");
	while((ch1=getchar())!='\n'){
		fputc(ch1,fp);
	}
	fclose(fp);
	fp=fopen("D:\\cxdownload\\init.txt","r");
	char ch2;
	int n[100],num[100]={},swi=0,count1=0,count2=0;
	while(!feof(fp)){
		ch2=fgetc(fp);
		if(ch2=='['){
			swi=1;
		}else if(ch2==']'){
			swi=0;
		}else if(ch2=='{'){
			swi=2;
		}else if(ch2=='}'){
			swi=0;
		}else if(ch2==','){
			swi=2;
		}
		switch(swi){
		    case 1:{
		    	n[count1]=ch2;
			    count1++;
			    break;
		    }
		    case 2:{
			    num[count2]=ch2;
			    count2++;
			    break;
		    }
    	}
	}
	fclose(fp);
	int lenth=0,zhishu=0;
	for(i=0;i<(count1-1);i++){
		if(n[count1-1-i]!=' '){
			lenth+=((n[count1-1-i]-'0')*pow(10,zhishu));
			zhishu++;
		}
	}
	int static count=0;
	int e=0,mem=0,temp[100]={};
	for(i=0;i<count2;i++){
		if(num[count2-1-i]==','){
			temp[count]=mem;
			mem=0;
			e=0;
			count++;
		}else if(num[count2-1-i]=='{'){
			if(mem){
				temp[count]=mem;
			}
		}else if(num[count2-1-i]=='-'){
			mem*=(-1);
		}else if(num[count2-1-i]>='0'&&num[count2-1-i]<='9'){
			mem+=((num[count2-1-i]-'0')*pow(10,e));
			e++;
		}
		
	}
	if(temp[0]){
		if(lenth>(count+1)){
			for(i=0;i<=count;i++){
				printf("%d ",temp[count-i]);
			}
			for(i=0;i<(lenth-count-1);i++){
				printf("0");
				if((lenth-count-1-i)!=1){
					printf(" ");
				}
			}
		}else{
		    for(i=0;i<=count;i++){
		    	printf("%d",temp[count-i]);
		    	if(i!=count){
		    		printf(" ");
				}
			}
	    }
	}else{
		for(i=0;i<lenth;i++){
		    printf("N");
		    if(lenth!=i){
		    	printf(" ");
		    }
	    }
    }
	return 0;
}