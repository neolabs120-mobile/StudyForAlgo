#include<stdio.h>
FILE *in=fopen("input.txt","r");
FILE *out=fopen("output.txt","w");
int array[101];
int input[101];
int i,j,k,m,n,s,count;
void function(int cnt)
{ 
	if(cnt==0)
	{
		for(i=n;i>=1;i--)
		{
			if(array[i]==1) count++;
		}
		if(count==m) 
		{
			for(i=1;i<=n;i++)
			{
                   fprintf(out,"%d", array[i]);
			}
		}  
		fprintf(out,"\n");

		return;
	}
	array[cnt]=0;
	function(cnt-1);
	array[cnt]=1;
	function(cnt-1);
}
int main(void)
{
	fscanf(in,"%d %d", &n,&m);
	for(i=1;i<=n;i++)
	{
		fscanf(in,"%d", &input[i]);
		array[i]=1;
	}
	function(n);
	fcloseall();
	return 0;
}
	