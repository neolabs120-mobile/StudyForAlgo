#include<stdio.h>
int number[500];
int strike[500];
int ball[500];
int i,j,m,n,s;
int firstnumber,secondnumber,thirdnumber;
int strike1,ball1;
int neocount,totalcount;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++)
	{
		fscanf(in,"%d %d %d", &number[i],&strike[i],&ball[i]);
	}
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			for(m=1;m<=9;m++)
			{
				for(s=1;s<=n;s++)
				{
					firstnumber=number[s]/10/10%10;
					secondnumber=number[s]/10%10;
					thirdnumber=number[s]%10;
					if(i==j || i==m || j==m || i==0 || j==0 || m==0) continue;
					if(i==firstnumber) strike1++;
					if(j==secondnumber) strike1++;
					if(m==thirdnumber) strike1++;
					if(i==secondnumber || i==thirdnumber) ball1++;
					if(j==firstnumber || j==thirdnumber) ball1++;
					if(m==firstnumber || m==secondnumber) ball1++;
					if(strike1==strike[s] && ball1==ball[s])
					{
						neocount++;
					}
					ball1=0;
					strike1=0;
					

				}
				if(neocount==n) totalcount++;
				neocount=0;
				strike1=0;
				ball1=0;
			}
		}
	}
	fprintf(out,"%d", totalcount);
	fcloseall();
	return 0;
}


