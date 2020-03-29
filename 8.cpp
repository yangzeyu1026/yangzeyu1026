#include <stdio.h>
#define maxn 10000005
int a[maxn];
int main()
{
	int n,k,count = 0;scanf("%d%d",&n,&k);for (int i = 0; i < n; i++)
	{
		a[i] = i+1;
	}
	if(k == 0) {
	while(a[n-1])
	{
		
		for (int i = 0; i < n; i++)
		{
			if(a[i])
			{if(a[i]%10 == k)
				count ++;}
			
		}
		for (int i = 0; i < n; i++)
		{
			a[i] = a[i]/10;
		}

	}
	printf("%d\n",count );
	}
	else{	
	//int t = n;
	
	while(a[n-1])
	{
		for (int i = 0; i < n; i++)
		{
			if(a[i]%10 == k)
				count ++;
		}
		for (int i = 0; i < n; i++)
		{
			a[i] = a[i]/10;
		}
	}
	printf("%d\n",count );}

	return 0;
}