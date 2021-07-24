#include<stdio.h>
int a,b;
int f,s,t;
int i,j;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d %d", &a,&b);
	f=b/10/10%10;
	s=b/10%10;
	t=b%10;
	fprintf(out,"%d\n%d\n%d\n%d", a*t, a*s, a*f, a*b);
	fcloseall();
	return 0;
}

