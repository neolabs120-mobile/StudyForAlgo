#include<stdio.h>
FILE *in=fopen("input.txt","r");
FILE *out=fopen("output.txt","w");
int i,j,n;
int array[10000001];
void apple(int cnt)
{
	if(cnt==0) 
	{ 
		for(i=n;i>=1;i--)
		{
			fprintf(out,"%d", array[i]);
		}
		fprintf(out,"\n");
		return;
	}
	array[cnt]=0;
	apple(cnt-1);
	array[cnt]=1;
	apple(cnt-1);
}
int main(void)
{
	fscanf(in,"%d", &n);
	apple(n);
	return 0;
}

   

