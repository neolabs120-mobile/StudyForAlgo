#include<stdio.h>
FILE *in=fopen("input.txt","r");
FILE *out=fopen("output.txt","w");
int result[400];
int startday[100001];
int endday[100001];
int monthsum[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int i,j,n;
int a,b,c,d;
int big;
int day2,day,locate,flag,chk,count;
int main(void)
{
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++)
	{
		fscanf(in,"%d %d %d %d", &a, &b, &c, &d);
		for(j=1;j<=a-1;j++)
		{
			day=day+monthsum[j];
		}
		day=day+b;
        for(j=1;j<=c-1;j++)
		{
			day2=day2+monthsum[j];
		}
		day2=day2+d-1;
		startday[i]=day;
		endday[i]=day2;
		day=day2=0;
	}
	day=60;
	day2=0;
	while(1)
	{
	for(i=1;i<=n;i++)
	{
        if(startday[i] <= day)
		{
			if(day2 < endday[i])
			{
				day2=endday[i];
				locate=i;
			}
		}
	}
	day=day2;
	   for(i=startday[locate];i<=endday[locate];i++)
	   {
		  result[i]=1;
	   }
	   for(i=60;i<=334;i++)
	   {
		  if(result[i]==0) flag=1;
	   }
	   if(flag==0)
	   {
		   count++;
		   break;
	   }
	   flag=0;
	   if(chk>n) 
	   {
		   fprintf(out,"0");
		   return 0;
	   }
	   chk++;
	   if(locate!=0) 
	   {
		   count++;
	   }
	   locate=0;
	   flag=0;
	   }
	fprintf(out,"%d", count);
	fcloseall();
	return 0;
}


       




	         











