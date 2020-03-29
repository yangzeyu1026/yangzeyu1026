#include <stdio.h>
#include <string.h>
/*#define maxn 105	
int a[maxn],b[maxn];*/
int main()
{
	int n,count=0;
	scanf("%d",&n);
	int *a=new int[n];
	int *b=new int[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);	
	}
	//memset(b,0,sizeof(b));
	for (int i = 0; i < n; i++)
	{
		b[i] = 0;
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j <= i-1; j++)
		{
			if(a[j] < a[i]) count++;
		}
		b[i] = count;
		count = 0;
	}
		for (int i = 0; i < n-1; i++)
	{
		printf("%d ",b[i] );
	}
	printf("%d\n",b[n-1] );
	return 0;
}