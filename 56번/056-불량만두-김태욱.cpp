#include<stdio.h>
int mandu[101];
int i,j,k,m,n,s;
int count, now;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	now=n;
	for(i=1;i<=n;i++)
	{
		if(now!=1)
		{
			if(now%3==0) {now=now/3;}
			else if(now%3==1) {now=now/3+1;}
			else if(now%3==2) {now=now/3+1;}
		}
		else break;
		count++;
	}
	fprintf(out,"%d", count);
	fcloseall();
	return 0;
}
