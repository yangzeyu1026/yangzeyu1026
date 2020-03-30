#include <stdio.h>
int main()
{
	int i;
	scanf("%d",&i);
	for (int j = 0; j < i; j++)
	{
		int a;
		if(scanf("%d",&a))
		{
			
		}
		else
		{
			int b;
			scanf("%d",&b);
			printf("%d\n",a+b );
		}
	}
	return 0;
}