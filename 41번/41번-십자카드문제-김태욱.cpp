#include<stdio.h>
int sipja[5000];
int chk[5000];
int secondchk[5000];
int sipjasuall[5000];
int i,j,k,m,n,b,v,c,s;
int first,second,third,fourth;
int gop=1000, gopbackup=1000;
int min=99999,count=1;
int beforeresult=99999;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	for(i=1;i<=4;i++)
	{
		fscanf(in,"%d", &sipja[i]);
	}
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			for(m=1;m<=9;m++)
			{
				for(s=1;s<=9;s++)
				{
					if(i==0 || j==0 || m==0 || s==0) continue;

					chk[1]=i;
					chk[2]=j;
					chk[3]=m;
					chk[4]=s;
					chk[5]=i;
					chk[6]=j;
					chk[7]=m;
					chk[8]=s;
					for(k=1;k<=4;k++)
					{
						for(v=k;v<=k+4-1;v++)
						{
                            secondchk[k]+=chk[v]*gop;
							gop=gop/10;
						}
						gop=gopbackup;
					    if(secondchk[k]<min) min=secondchk[k];
					}
					if(min==i*1000+j*100+m*10+s*1) sipjasuall[count]=min;
					else
					{	
						min=99999;
					    for(b=1;b<=100;b++) secondchk[b]=0;
						continue;
						
					}
					count++;
					min=99999;
					for(b=1;b<=100;b++) secondchk[b]=0;
				}
			}
		}
	}
	for(i=1;i<=5000;i++) secondchk[i]=0;
	min=99999;
	sipja[5]=sipja[1];
	sipja[6]=sipja[2];
	sipja[7]=sipja[3];
	sipja[8]=sipja[4];
	for(k=1;k<=4;k++)
	{
	   for(v=k;v<=k+4-1;v++)
	   {
            secondchk[k]+=sipja[v]*gop;
		    gop=gop/10;
	   }
	   gop=gopbackup;
	   if(secondchk[k]<beforeresult) beforeresult=secondchk[k];
	}
	for(i=1;i<=5000;i++)
	{
		if(sipjasuall[i]==beforeresult)
		{
			fprintf(out,"%d", i); 
			break;
		}
	}
	fcloseall();
	return 0;
}

	
				    
