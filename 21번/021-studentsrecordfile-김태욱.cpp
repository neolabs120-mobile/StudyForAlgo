#include<stdio.h>
int lank[150];
int score[150];
int n,i,j,k,l,m,count=0;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++)
	{
		fscanf(in,"%d", &score[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(score[i]<=score[j])
			{
				if(score[i]==score[j])continue;
				count++;
			}
		}
		lank[i]=count+1;
		count=0;
	}
	for(i=1;i<=n;i++)
	{
      fprintf(out,"%d %d\n", score[i],lank[i]);
	}
    fcloseall();
	return 0;
}