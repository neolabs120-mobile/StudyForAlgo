#include<stdio.h>
FILE *in=fopen("input.txt","r");
FILE *out=fopen("output.txt","w");
int array[1000001];
int i,j,k,m,n,s;
int nbackup;
int sum, othersum, su=1;
void function(int start, int end, int nbackup)
{
	if(nbackup==0) return;
    array[(start+end)/2]=nbackup;
	function(1,(start+end)/2-1, nbackup-1);
	function((start+end)/2+1, sum, nbackup-1);
	
}
int main(void)
{
	fscanf(in,"%d", &n);
	nbackup=n;
	for(i=1;i<=n;i++)
	{
		sum+=su;
		su*=2;
	}
	array[sum/2+1]=n;
	function(1,sum,n);
	for(i=1;i<=sum;i++)
	{
		fprintf(out,"%d ", array[i]);
	}
	fcloseall();
	return 0;
}

