#include<stdio.h>
int array[10000001];
int su=1;
int sum;
int othersum;
int nbackup;
int i,j,k,m,n,s;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	nbackup=n;
	for(i=1;i<=n;i++)
	{
		sum+=su;
		su*=2;
	}
	array[sum/2+1]=n;
	othersum=sum/2+1;
	for(i=n;i>=2;i--)
	{
		for(j=1;j<=sum;j++)
		{
		     if(array[j]==nbackup)
			 {
			      array[j-(othersum/2)]=nbackup-1;
			      array[j+(othersum/2)]=nbackup-1;
			 }
		}
		nbackup--;
		othersum=othersum/2;
	}
	for(i=1;i<=sum;i++)
	{
		fprintf(out,"%d ", array[i]);
	}

	fcloseall();
	return 0;
}


