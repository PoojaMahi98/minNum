#include<stdio.h>
int main()
{
	int n,min=0,max=0;
	scanf("%d",&n);
	int a[n],in[n],i,v=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<3;j++)
	{
	for(i=n-1;i>=0;i--)
	{
		in[i]=a[i]%10;
		/*if(i==0)
		min=in;*/
		if(min>in[i])
		min=in[i];
	}
	
}
	printf("%d",min);
	return 0;
}
