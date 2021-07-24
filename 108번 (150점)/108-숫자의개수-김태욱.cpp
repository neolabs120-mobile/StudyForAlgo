#include<stdio.h>
int number[10001];
int i,j,k,m,n,s;
int a,b,c,result,count,resultbackup;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d %d %d", &a, &b, &c);
	result=a*b*c;
	resultbackup=result;
	for(i=1;;i++)
	{
		if(resultbackup==0)
		{
			break;
		}
		count++;
		resultbackup=resultbackup/10;
	}
	resultbackup=result;
	for(i=1;i<=count;i++)
	{
        number[resultbackup%10]++;
		resultbackup=resultbackup/10;
	}
	for(i=0;i<=9;i++)
	{
		fprintf(out,"%d\n", number[i]);
	}
	fcloseall();
	return 0;
}
		


