#include <stdio.h>
#include <bits/stdc++.h>
#define maxn 55
int main()
{
	int n;
	scanf("%d",&n);
	char s[maxn];
	scanf("%s",s);
	int t=strlen(s);
	for (int i = 0; i < t; i++)
	{
		if(s[i]+n <= 'z')
		{
			putchar(s[i]+n);
		}
		else
		putchar(s[i]+n-26);
	}
	return 0;
}