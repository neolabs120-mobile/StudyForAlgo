#include<stdio.h>
int input[35000], sort[35000];
int i,j,k,m,n,s,key;
int backup;
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
		fprintf(out,"%d ", sort[i]);
	}
	fprintf(out,"\n");
    for(i=2;i<=n;i++)
	{
		j=i; 

		key=sort[i];
		while(key<sort[j-1] && j>1)
		{
			sort[j]=sort[j-1];
			j--;
		}
		sort[j]=key;
		for(k=1;k<=n;k++) fprintf(out,"%d ", sort[k]);
		fprintf(out,"\n");
	}

	fcloseall();
	return 0;
}

