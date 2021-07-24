#include<stdio.h>
int junsu[10000], aipsu[10000], result[10000], chk[10000],backupchk[10000];
int i,j,m,n,s,k;
int frontresult, behindresult, gopbackup, superbackup, dapbackup, endchk=1;
int backup,gop=1,dap=1,neocount,count,yeahcount;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
    m=n;
	for(i=1;i<=50;i++)
	{
		if(m==0) break;
		gop*=10;
        m=m/10;
		neocount++;
	}
	gop=gop/10;
	result[1]=n;
	backup=n;
	gopbackup=gop;
	for(i=2;i<=1000;i++)
	{
		
		for(j=neocount;j>=1;j--)
		{
           chk[j]=backup%10;
		   backupchk[j]=backup%10;
		   backup=backup/10;
		}
		yeahcount=0;
		for(j=1;j<=50;j++)
		{
			if(yeahcount==neocount) break;
            backupchk[j]=chk[j];
			yeahcount++;
		}
		for(j=1;j<=neocount;j++)
		{
		  for(k=j+1;k<=neocount;k++)
		  {
			  if(chk[j]>chk[k])
			  {
                  superbackup=chk[j];
				  chk[j]=chk[k];
				  chk[k]=superbackup;
			  }
		  }
		}
		superbackup=0;
		for(j=1;j<=neocount;j++)
		{
			for(k=j+1;k<=neocount;k++)
			{
				if(backupchk[j]<backupchk[k])
				{
					superbackup=backupchk[j];
					backupchk[j]=backupchk[k];
					backupchk[k]=superbackup;
				}
			}
		}
		for(j=1;j<=30;j++)
		{
			if(gopbackup==0) break;
			frontresult+=chk[j]*gopbackup;
			behindresult+=backupchk[j]*gopbackup;
			gopbackup=gopbackup/10;
		}
		gopbackup=gop;
		result[i]=behindresult-frontresult;
		
		backup=result[i];
		
		for(j=1;j<=20;j++)
		{
			chk[j]=0;
			backupchk[j]=0;
		}
		
		frontresult=behindresult=0;
		count++;
		if(result[i]==result[i-1])
		{
			result[i]=0;
			break;
		}
		dapbackup=result[i];
		result[i]=0;
		;
		for(j=1;j<=50;j++)
		{
			if(result[j]==dapbackup)
			{
				endchk=0;
				break;
				
			}
		}
		if(endchk==0) break;
		result[i]=dapbackup;
		dapbackup=0;
		
	}

	if(count==1)
	{
		fprintf(out,"%d\n", count+1);
		dap=0;
	}
	else
	{
		fprintf(out,"%d\n", count);
	}
	
	
	for(i=1;i<=10000000000;i++)
	{
		if(result[i]==0) break;
		fprintf(out,"%d\n", result[i]);
	}
	if(dap==0)
	{
		fprintf(out,"0");
	}
	fcloseall();
	return 0;
}


