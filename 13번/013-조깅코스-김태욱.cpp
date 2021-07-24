#include<stdio.h>
#include<stdio.h>
int course[30010];
int i,j,k,l,n;
int over,same,down;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++) fscanf(in,"%d", &course[i]);
	for(i=1;i<=n-1;i++)
	{
		if(course[i] < course[i+1])over++;
		else if(course[i]==course[i+1])same++;
		else if(course[i]>course[i+1])down++;
	}
	fprintf(out,"%d %d %d", same,over,down);
	fcloseall();
	return 0;
}

