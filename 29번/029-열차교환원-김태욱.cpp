#include<stdio.h>
int train[2000];
int i,j,k,m,n,s,count,backup;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++)
	{
		fscanf(in,"%d", &train[i]);
	}
    for(i=1;i<=n;i++)
	{
      for(j=1;j<=n-1;j++)
	  {
		 if(train[j]>train[j+1])
		 {
			 count++;
             backup=train[j];
			 train[j]=train[j+1];
			 train[j+1]=backup;
		 }
	  }
	}
	fprintf(out,"%d", count);
	fcloseall();
	return 0;
}

