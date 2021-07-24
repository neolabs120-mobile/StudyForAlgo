#include<stdio.h>
int sort[200000],bindosu[200];
int i,j,k,m,n,s;
int flag,backup;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++)
	{
		fscanf(in,"%d", &sort[i]);
        bindosu[sort[i]]++;
	}
    for(i=0;i<=100;i++)

	{
		if(bindosu[i]!=0)
		{
            for(j=1;j<=bindosu[i];j++)
			{
				fprintf(out,"%d \n", i);
                
			}
		}
	}
	fcloseall();
	return 0;
}