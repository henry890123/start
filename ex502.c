#include<stdio.h>
int main()
{
    int a[21]={0},b[21]={0};
    int i,j,s;
    int n;//输入数组元素个数
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
			if(a[i]==a[j])
            	b[i]++;//判断有没有相同的，如果有，输出的编号加一 
		}	
	}
    for(i=0;i<n;i++)
    {
        for(j=0,s=1;j<n;j++)
            if(b[j]==0 && a[i]<a[j])
                s++;
        printf(i==0?"%d":"% d",s);//在屏幕上输出结果，各个编号之间用一个空格分隔。
    }
    printf("\n");
    return 0;
}



