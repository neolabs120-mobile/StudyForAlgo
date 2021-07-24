#include<stdio.h>
#include<string.h>
char front[402], behind[402];
char arraybackup[402], result[402];
int i,j,k,m,n,s;
int tistory=0;
int frontlen, behindlen,backup;
int chk=1,neochk;
int finalcount=0;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%s", front);
	fscanf(in,"%s", behind);
	frontlen=strlen(front);
	behindlen=strlen(behind);
	if(behindlen>frontlen)
	{
		
		for(i=0;i<=frontlen-1;i++)
	    	arraybackup[i]=front[i];
		for(i=0;i<=behindlen-1;i++)
			front[i]=behind[i];
		for(i=0;i<=behindlen-1;i++)
		    behind[i]=0;
		for(i=0;i<=frontlen;i++)
		    behind[i]=arraybackup[i];
		backup=frontlen;
		frontlen=behindlen;
		behindlen=backup;
		tistory=behindlen-1;
		for(i=0;i<=400;i++) arraybackup[i]=behind[i];
		for(i=0;i<=400;i++) behind[i]=0;
	
	    for(i=frontlen-1;i>=frontlen-behindlen-1;i--)
		{
		    behind[i]=arraybackup[tistory];
			tistory--;
		}
		chk=0;
		
		
		
	}
	
	else if(frontlen>behindlen)
	{   
			tistory=behindlen-1;
		for(i=0;i<=400;i++) arraybackup[i]=behind[i];
		for(i=0;i<=400;i++) behind[i]=0;
	
	    for(i=frontlen-1;i>=0;i--)
		{
		    behind[i]=arraybackup[tistory];
			tistory--;
		}
		
	}
	for(i=frontlen-1;i>=0;i--)
	{
		for(j=frontlen-1;j>=0;j--)
		{
			if(behind[i]==0) break;
			result[i+j+1]+=(front[j]-48)*(behind[i]-48)+neochk;
			if(result[i+j+1]>=10)
			{
				result[i+j]+=result[i+j+1]/10;
				result[i+j+1]=result[i+j+1]%10;
			}
		}
	}
/*	for(i=frontlen+behindlen+1;i>=0;i--)
	{
		if(result[i]>=10)
		{
			result[i-1]+=result[i]/10;
			result[i]=result[i]%10;
			
		}
	}*/
	if(chk==1)
	{
	   for(i=0;i<=frontlen+frontlen-1;i++)
	   {
		   if(result[i]==0){ finalcount++; continue; }
		   else break;
		  // finalcount++;
	   }
       for(i=finalcount;i<=frontlen+frontlen-1;i++)
	   {
			fprintf(out,"%d", result[i]);
	   }
	}
	else
	{
		for(i=0;i<=frontlen+frontlen-1;i++)
		{
			if(result[i]==0){ finalcount++; continue; }
			else break;
		//	finalcount++;
		}
		for(i=finalcount;i<=frontlen+frontlen-1;i++)
		{
			fprintf(out,"%d", result[i]);
		}
	}
	fcloseall();
	return 0;
}
		    
		
		

					 



































	
    
			    





