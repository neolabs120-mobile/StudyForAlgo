#include<stdio.h>
FILE *in=fopen("input.txt","r");
FILE *out=fopen("output.txt","w");
int i,j,n,m=1,input=1,flag=1,count1,count0;
int array[10000001];
void function(int cnt, int open, int close)
{
	if(close>open) return;
	if(cnt==0)
	{
		    if(open!=close) return;
	    	for(i=n*2;i>=1;i--)
			{
			   if(array[i]==0) fprintf(out,"(");
			   else if(array[i]==1) fprintf(out,")");
			}
		    fprintf(out,"\n");
		    return;
	}
    array[cnt]=0;
	function(cnt-1,open+1,close);
    array[cnt]=1;
	function(cnt-1,open,close+1);
}
int main(void)
{
	fscanf(in,"%d", &n);
	function(n*2,0,0);
	return 0;
}

