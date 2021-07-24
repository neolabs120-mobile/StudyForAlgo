#include<stdio.h>
int input[40000], sort[40000];
int i,j,k,l,m,s,n;
int sort1,backup,sort2;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++)
	{
		fscanf(in,"%d", &input[i]);
	}
	for(i=1;i<=n;i++)
	{
		sort[i]=input[i];
	}
	for(i=1;i<=n;i++)
	{
		fprintf(out,"%d ", input[i]);
	}
	fprintf(out,"\n");
    for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
		   if(sort[i]>sort[j])
		   {
			   backup=sort[i];
			   sort[i]=sort[j];
			   sort[j]=backup;
		   }
		}
		//if(i==1) continue;
		for(k=1;k<=n;k++) fprintf(out,"%d ", sort[k]);
		fprintf(out,"\n");
	}
	fcloseall();
	return 0;
}