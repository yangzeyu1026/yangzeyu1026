#include <stdio.h>
#include <string.h>
int main()
{
	char s[105];
	scanf("%s",s);
	int slen=strlen(s);
	for (int i = 0; i < slen; i++)
	{
		if(s[i]>='a'&&s[i]<='z')
			putchar(s[i]-'a'+'A');
		else putchar(s[i]);
	}
	return 0;
}