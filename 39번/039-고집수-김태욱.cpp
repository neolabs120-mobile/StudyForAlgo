#include<stdio.h>
int i,j,k,m,n,s;
int chk[1001];
int chk1[1001];
int result[1001];
int start,end,gogip;
int gopsum=1,count,gop,neocount,endcount;
int sum=1;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
    fscanf(in,"%d %d %d", &start,&end,&n);
	for(i=start;i<=end;i++)
	{
		m=i;
		count=0;
        while(m>9)
		{
			while(m!=0)
			{
				sum*=m%10;
				m=m/10;
			}
			m=sum;
			sum=1;
			count++;
		}
		if(count==n)
		{
			result[i]=i;
			gop++;
		}
	}
	fprintf(out,"%d\n", gop);
	for(i=1;i<=1000;i++)
	{
		if(result[i]!=0)
		{
			fprintf(out,"%d\n", i);
		}
	}
	fcloseall();
	return 0;
}




