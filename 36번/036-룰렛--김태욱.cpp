#include<stdio.h>
int rullet[50];
int rulletnumber[50];
int gop=1;
int i,j,k,m,n,s;
int result,max,backup;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++)
	{
		fscanf(in,"%d", &rullet[i]);
	}
	j=1;
	for(j=j+n;j<=n*2;j++)
	{
            rullet[j]=rullet[j-n];
	}
	for(i=1;i<=n-1;i++)
	{
		gop*=10;
		backup=gop;
	}
	for(i=1;i<=n;i++)
	{
       for(j=i;j<=i+n-1;j++)
	   {
		   rulletnumber[i]+=rullet[j]*gop;
		   gop=gop/10;
	   }
	   gop=backup;
	}
	for(i=1;i<=n;i++)
	{
		if(max<rulletnumber[i]){ result=i; max=rulletnumber[i];}
	}
	fprintf(out,"%d", result);
	fcloseall();
	return 0;
}

 

	
