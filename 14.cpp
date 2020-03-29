#include <stdio.h>
#include <string.h>
//#include <math.h>
#define const 105
int a[const];
int main()
{
	
	char s[const];
	scanf("%s",s);
	int t=strlen(s);
	memset(a,0,sizeof(a));
	for (int i = 0; i < t; i++)
	{
		for (int j = 0; j < t; j++)
		{
			if(s[i] == s[j]) a[i]++;
		}
	}
	for (int i = t-1; i >= 1; i--)
	{
		for (int j = i-1; j >=0 ; j--)
		{
			if(a[i] < a[j]) 
			{
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	int x=a[t-1]-a[0];
	if(x==1||x==0) printf("No Answer\n%d\n",x);
	else
		{//float c=sqrt(x)+0.5;
			if(x==2) printf("Lucky Word\n2\n");
			else
			{
				for (int i = 2; i < x; i++)
				{
					if(x%i==0)
						{
							printf("No Answer\n%d\n",x);
							break;
						}
					else 
						{
							printf("Lucky Word\n%d\n",x);
							break;
						}
				}
			}
		}
	return 0;
}