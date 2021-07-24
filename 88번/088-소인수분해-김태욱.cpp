#include<stdio.h>
int n,count=1;
void function(int x, int cnt)
{
	if(x==1) return;
	if(x%cnt==0)
	{
       printf("%d ", cnt);
       function(x/cnt, cnt);
	}
	else
	{
	   function(x, cnt+1);
	}
}
int main(void)
{
	scanf("%d", &n);
	function(n, 2);
	return 0;
}


