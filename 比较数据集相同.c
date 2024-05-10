#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int num1[20], num2[20], num3[20], num4[20];
    int n1,n2,i,j,k1=0,k2=0,tmp,flag=0,l,p;
    scanf("%d", &n1);
    for (i = 0; i < n1; i++) 
	{
        scanf("%d",&num1[i]);
    }
    scanf("%d", &n2);
    for (i = 0; i < n2; i++) 
	{
        scanf("%d", &num2[i]);
    }
    for (i = 0; i < n1; i++) 
	{
        for (j = i + 1; j < n1; j++) 
		{
            if (num1[i] == num1[j])
			 {
                flag = 1;
            }

        }
        if (!flag) 
		{
            num3[k1] = num1[i];
            k1++;
        }
        flag = 0;
    }
    for (i = 0; i < n2; i++) 
	{
        for (j = i + 1; j < n2; j++) 
		{
            if (num2[i] == num2[j]) 
			{
                flag = 1;
            }

        }
        if (!flag) 
		{
            num4[k2] = num2[i];
            k2++;
        }    
        flag = 0;
    }
    if (k1 != k2) 
	{
        printf("0\n");
    }
    else {
        for (i = 0; i < k1; i++) 
		{
            for (j = 0; j < k2; j++) 
			{
                if (num3[i] == num4[j]) 
				{
                    flag++;
                }
            }
        }
        if(flag==k1&&n1==n2){
            printf ("1\n");
        }else{
            printf ("0\n");
        }
    }
    for (i = 0; i < (k1-1); i++) 
	{
        for (j = i+1;j < k1; j++) 
		{
            if (num3[i] > num3[j]) 
			{
                tmp = num3[i];
                num3[i] = num3[j];
                num3[j] = tmp;
            }
        }
    }
    for(i=0;i<k1;i++){
        p=0;
    	for(l=0;l<n1;l++){
    		if(num3[i]==num1[l]){
				p=p+1;
			}	
		}
		printf("%d %d\n", num3[i],p);
	}
    
	return 0;
}



