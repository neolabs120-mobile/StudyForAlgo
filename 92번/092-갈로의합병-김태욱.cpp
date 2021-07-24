#include<stdio.h>
FILE *in=fopen("input.txt","r");
FILE *out=fopen("output.txt","w");
int i,j,n,m=1,input=1,flag=1,count1=0,count0,count,flag2=1,big,big2,othercount,chk=1;
int array[10000001];
void function(int cnt, int open, int close)
{
	if(close>open) return;
	if(cnt==0)
	{
		    if(open!=close) return;
			for(i=n*2;i>=1;i--)
			{
				if(array[i]==1)
				{
					if(big<count0)
					{
						big=count0;
					}
				//	printf("%d ", big);
					count0=0;
				}
				else
				{
			        count0++;
				}
			}
			if(big>m)
			{
				big=0;
				return;
			}
			for(i=n*2;i>=0;i--)
			{
				if(array[i]==0)
				{
					if(big2<count1)
					{
						big2=count1;
					}
				//	printf("%d ", big2);
					count1=0;
				}
				else if(array[i]==1)
				{
			        count1++;
				}
			}  
	//	    big2=0;
			if(big2>m)
			{
				big2=0;
				return;
			}
	/*		for(i=n*2;i>=1;i--)
			{
				printf("%d", array[i]);
			}  
			printf("\n");   */
			count++;
		    return;
	}
    array[cnt]=0;
	function(cnt-1,open+1,close);
    array[cnt]=1;
	function(cnt-1,open,close+1);
}
int main(void)
{
	fscanf(in,"%d %d", &n, &m);
	function(n*2,0,0);
	fprintf(out,"%d", count);
	return 0;
}

