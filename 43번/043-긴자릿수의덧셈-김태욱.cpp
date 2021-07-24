#include<stdio.h>
#include<string.h>
char front[250], behind[250], result[250];
int frontlen, behindlen, chk;
int i,j,k,m,n,s;
int backup;
char arraybackup[250];
char finalarraybackup[250];
int imsi,count,neocount,orimcount;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%s %s", &front, &behind);
	frontlen=strlen(front);
	behindlen=strlen(behind);
	if(frontlen<behindlen)
	{
		
		for(i=0;i<=frontlen-1;i++)
		{
			arraybackup[i]=front[i];
		}
		for(i=0;i<=frontlen-1;i++)
		{
			front[i]='0';
		}
		for(i=0;i<=behindlen-1;i++)
		{
			front[i]=behind[i];
		}
		for(i=0;i<=behindlen-1;i++)
			behind[i]=0;
		for(i=0;i<=behindlen-1;i++)
		{
			behind[i]=arraybackup[i];
		}
		backup=frontlen;
		frontlen=behindlen;
		behindlen=backup;
	}
	neocount=behindlen-1;
	for(i=0;i<=behindlen-1;i++)
	{
		arraybackup[i]='0';
		arraybackup[i]=behind[i];
		behind[i]='0';
	}
    for(i=frontlen-1;i>=0;i--)
	{
        behind[i]=arraybackup[neocount];
		neocount--;
		if(neocount==-1) break;
	}
	for(i=0;i<=250;i++)
	{
        arraybackup[i]=front[i];
		finalarraybackup[i]=behind[i];
		front[i]=behind[i]='0';
	}
	for(i=frontlen+1;i>=1;i--)
	{
        front[i]=arraybackup[i-1];
		behind[i]=finalarraybackup[i-1];
	}
	for(i=frontlen;i>=0;i--)
	{
		imsi=front[i]-48+behind[i]-48+chk;
	//	if(chk==0 && imsi<=0) break;
		if(imsi>=10)
		{
			chk=imsi/10;
			result[i]=imsi%10;
			orimcount=1;
		}
		else{chk=0; result[i]=imsi; orimcount=0;}
	}
	if(result[0]>=1)
	{
		for(i=0;i<=frontlen;i++)
		{
			fprintf(out,"%d", result[i]);
		}
	}
	else
	{
        for(i=1;i<=frontlen;i++)
		{
			fprintf(out,"%d", result[i]);
		}
	}
    
	fcloseall();
	return 0;
}

         

