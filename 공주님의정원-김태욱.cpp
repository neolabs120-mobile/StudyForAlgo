#include<stdio.h>
int year[1000];
int chk[1000];
int month[1000001];
int day[1000001];
int month2[1000001];
int day2[1000001];
int monthday[20]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int i,j,k;
int n;
int tday;
int tday2;
int flag;
int count;
int big;
int result,rocate;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++)
	{
		fscanf(in,"%d %d %d %d", &month[i], &day[i], &month2[i], &day2[i]);
	}
	while(1)
	{
     for(i=1;i<=n;i++)
	 {
		for(j=1;j<=month[i];j++)
		{
			tday=tday+(monthday[j-1]);
		}
		tday=tday+day[i];
		for(j=1;j<=month2[i];j++)
		{
			tday2=tday2+(monthday[j-1]);
		}
		tday2=tday2+day2[i]-1;
		for(j=tday;j<=tday2;j++)
		{
			chk[j]=1;
		}
		for(j=60;j<=333;j++)
		{
			if(chk[j]==1) count++;
		}
		for(j=1;j<=366;j++)
		{
			chk[j]=year[j];
		}
		if(count>big)
		{
			big=count;
			rocate=i;
		}
		tday=tday2=count=0;
	 }
	 tday=tday2=count=0;
     for(j=1;j<=month[rocate];j++)
	 {
		 tday=tday+(monthday[j-1]);
	 }
	 tday=tday+day[rocate];
	 for(j=1;j<=month2[rocate];j++)
	 {
		 tday2=tday2+(monthday[j-1]);
	 }
	 tday2=tday2+day2[rocate];
	 for(j=tday;j<=tday2;j++)
	 {
		 year[j]=1;
	 }
	 for(j=1;j<=365;j++)
	 {
		 chk[j]=year[j];
	 }
	 for(j=60;j<=333;j++)
	 {
		 if(year[j]==0) flag=1;
	 }
	 month[rocate]=0; day[rocate]=0; month2[rocate]=0; day2[rocate]=0;
	 result++;
	 tday=tday2=count=rocate=big=0;
	 if(flag==0) break;
	 else if(flag==1) flag=0;
	}
	fprintf(out,"%d", result);
	fcloseall();
	return 0;
}

			
		
	
             
		
		   



