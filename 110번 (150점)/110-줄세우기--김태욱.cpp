#include<stdio.h>
int insert[101];
int result[101];
int i,j,n,backup,count;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++)
	{
		fscanf(in,"%d", &insert[i]);
	}
	for(i=1;i<=n;i++)
	{
        count=0;
		for(j=i;j>=0;j--)
		{
			if(count==insert[i]) break;
			result[j]=result[j-1];
			count++;
		}
		result[j]=i;
	}
	for(i=1;i<=n;i++)
	{
		fprintf(out,"%d ", result[i]);
	}
	fcloseall();
	return 0;
}



