#include<stdio.h>
FILE *in=fopen("input.txt","r");
FILE *out=fopen("output.txt","w");
int array[10000001];
int i,n,m,plus;
int cnt,cnt3,count;
void function(int cnt, int cnt3)
{
	if(cnt==0)
	{
		if(cnt3!=n) return;
		count++;
		return;
	}
	array[cnt]=0;
	function(cnt-1, cnt3);
	array[cnt]=1;
	function(cnt-1, cnt3+1);
}
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	function(n*2-1,0); 
	fprintf(out,"%d", count);
	return 0;
}


