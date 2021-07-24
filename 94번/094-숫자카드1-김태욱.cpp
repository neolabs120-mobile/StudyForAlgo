#include<stdio.h>
FILE *in=fopen("input.txt","r");
FILE *out=fopen("output.txt","w");
int array[101];
int input[101];
int i,j,k,m,n,s;
void function(int cnt)
{
	if(cnt==0)
	{
		for(i=1;i>=1;i--)
		{
			if(array[i]==0) return;
		}
		for(i=n;i>=1;i--)
		{
			fprintf(out,"%d", array[i]);
		}
		fprintf(out,"\n");
		return;
	}
	for(int i=1;i<=n;i++)
	{    
		array[cnt]=input[i];
		function(cnt-1);
	}
}
int main(void)
{
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++)
	{
		fscanf(in,"%d", &input[i]);
	}
	function(n);
	fcloseall();
	return 0;
}
	
	