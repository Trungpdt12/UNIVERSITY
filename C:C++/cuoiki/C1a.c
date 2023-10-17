#include <stdio.h>

int caua(int n)
{
	int S=1;
	int i;
	for (i=1;i<=n;i++)
	{
		S=S*i;
	}
	return S;
}
int main()
{
		int n;
		scanf("%d",&n);
		printf("%d",caua(n));
		return 0;
}