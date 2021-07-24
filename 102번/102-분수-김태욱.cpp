#include<stdio.h>
FILE *in=fopen("input.txt","r");
FILE *out=fopen("output.txt","w");
int bunsu[1001];
int bunsu1[101];
int i,j,k,m,n,s;
int nbackup;
int sum,su=1;
int g,h;
void function(int start, int end, int cnt)
{
	if(cnt==0) return;
	printf("%d %d %d\n", start,end,cnt);
	bunsu[(start+end)/2]=bunsu[start]+bunsu[end];
	bunsu1[(start+end)/2]=bunsu1[start]+bunsu1[end];
    function(1,(start+end)/2, cnt-1);
	start=1; end=9; 

	function((start+end)/2, sum, cnt-1);
}
int main(void)
{
    fscanf(in,"%d", &n);
	for(i=1;i<=n;i++)
	{
		sum+=su;
		su*=2;
	}
	sum=sum+2;
	nbackup=n;
	bunsu[1]=0; bunsu[sum]=1;
	bunsu1[1]=1; bunsu1[sum]=0;
	function(1,sum,n);
	for(i=1;i<=sum;i++)
	{
		fprintf(out,"%d ", bunsu[i]);
	}
	fprintf(out,"\n");
	for(i=1;i<=sum;i++)
	{
		fprintf(out,"%d ", bunsu1[i]);
	}
	fcloseall();
	return 0;
}

