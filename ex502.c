#include<stdio.h>
int main()
{
    int a[21]={0},b[21]={0};
    int i,j,s;
    int n;//��������Ԫ�ظ���
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
			if(a[i]==a[j])
            	b[i]++;//�ж���û����ͬ�ģ�����У�����ı�ż�һ 
		}	
	}
    for(i=0;i<n;i++)
    {
        for(j=0,s=1;j<n;j++)
            if(b[j]==0 && a[i]<a[j])
                s++;
        printf(i==0?"%d":"% d",s);//����Ļ�����������������֮����һ���ո�ָ���
    }
    printf("\n");
    return 0;
}



