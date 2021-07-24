#include<stdio.h>
FILE *in=fopen("input.txt","r");
FILE *out=fopen("output.txt","w");
int n,f;
void fibo(int x,int y,int cnt)
{
	if(cnt==n)
	{
		fprintf(out,"%d", x+y); 
		return;
	}
	fibo(y,x+y,cnt+1);
}
int main(void)
{
	fscanf(in,"%d", &n);
	fibo(1,0,1);
	return 0;
}
