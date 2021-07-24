#include<stdio.h>
#include<string.h>
char number[10];
int i,j,k,m,n,s;
int tistory=1,backup,numberlen,chk;
char arraybackup[10];
char chkresult[10];
int frontsu,behindsu,finalchk=1;
int front,behind;
int main(void)
{
	FILE *in=fopen("input.txt","r");
    FILE *out=fopen("output.txt","w");
	fscanf(in,"%s", number);
	numberlen=strlen(number);
	for(i=numberlen+1;i>=1;i--)
	{
		number[i]=number[i-1];
		if(i==1)
		number[i-1]=0;
	}
	for(i=numberlen;i>=1;i--)
	{
		arraybackup[tistory]=number[i];
		tistory++;
	}
	for(i=numberlen;i>=1;i--)
	{
	    chkresult[i]+=(number[i]-48)+(arraybackup[i]-48);
	    if(chkresult[i]>=10)
	    chkresult[i-1]++;
		
	}
	if(chkresult[0]!=0)
	{
        front=0;
		behind=numberlen;
		for(i=0;i<=numberlen;i++)
		{
	           if(front==behind || front>behind) break; 
			   if(chkresult[front]!=chkresult[behind]) finalchk=0; 
	           front++; behind--;
		}
	}
	else
	{
		front=1;
		behind=numberlen;
		for(i=1;i<=numberlen;i++)
		{
               if(front==behind || front>behind) break; 
			   if(chkresult[front]!=chkresult[behind]) finalchk=0; 
		       front++; behind--;
		}
	}
	if(finalchk==1) fprintf(out,"YES");
	else fprintf(out,"NO");
		

	fcloseall();
	return 0;
}




	


