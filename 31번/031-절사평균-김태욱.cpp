#include<stdio.h>
double number[1000000];
int number1[1000000];
int sort[200];
double result[1000000];
int i,j,m,n,s,k;
double sum;
int chase;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d %d", &n,&k);
	for(i=1;i<=n;i++)
	{
       fscanf(in,"%lf", &number[i]);
	   number[i]=number[i]*10;
	}
	for(i=1;i<=n;i++)
	{
		number1[i]=number[i];
		sort[number1[i]]++;
	}
	chase=1;
	for(i=0;i<=100;i++)
	{
       if(sort[i]==0) continue;
       for(j=1;j<=sort[i];j++)
	   {
           result[chase]=i;
		   result[chase]=result[chase]/10;
		   chase++;
	   }
	  
	}
	i=1;
	for(i=i+k;i<=n-k;i++)
	{
		sum+=result[i];
	}
	m=n;
	m=m-k*2;
	sum=sum/m;
	fprintf(out,"%.2lf", sum);
	fcloseall();
	return 0;
}
  


