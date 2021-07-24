#include<stdio.h>
#include<string.h>
char front[250], behind[250], result[250];
int frontlen, behindlen, flusminusfchk=1;
int i,j,k,m,n,s,neocount,frontcount;
int pointchk;
char arraybackup[250];
char finalarraybackup[250];
int backup;
int secondchk=10;
int thirdchk=9,zerochk=0;
int samechk=1;
int main(void)
{
      FILE *in=fopen("input.txt","r");
	  FILE *out=fopen("output.txt","w");
	  fscanf(in,"%s %s", &front, &behind);
	  frontlen=strlen(front);
	  behindlen=strlen(behind);
	  for(i=0;i<=frontlen;i++)
	  {
		  if(front[i]>behind[i]) samechk=0;
		  else if(front[i]<behind[i]) samechk=0;
	  }
	  if(samechk==1){ fprintf(out,"0"); return 0;}
			  
	  if(frontlen==behindlen)
	  {
		  for(i=0;i<=behindlen;i++)
		  {
			  if(front[i]>behind[i]) break;
			  if(front[i]<behind[i])
			  {
				  flusminusfchk=0;
				  //flusminusfchk=0;
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
		  }
        
	}
		  
      if(frontlen<behindlen) 
	  {	  
		flusminusfchk=0;
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
		if(behind[0]=='0' || behind[0]==0)
		{
			if(flusminusfchk==0)
				{
					fprintf(out,"-");
					for(i=0;i<=frontlen;i++)
					{
		               fprintf(out,"%c", front[i]);
					}
					return 0;
				}
				else
				{
					for(i=0;i<=frontlen;i++)
					{
						fprintf(out,"%c", front[i]);
					}
					return 0;
				}
		}

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
	for(i=frontlen+1;i>=0;i--)
	{
		result[i]='0';
	}
    for(i=frontlen;i>=0;i--)
	{
		if(front[i]>=behind[i] && front[i]!=0)
		{
			result[i]=front[i]-behind[i];
		}
		else 
		{
			if(front[i]!=0)
			{
				front[i-1]-=1;
				
				result[i]=secondchk-behind[i]+front[i];
			}
			else
			{
				frontcount=i+1;
				for(j=i;j>=0;j--)
				{
				   if(front[i]!='0') break;
				   frontcount--;
				}
				for(j=i;j>=frontcount;j--)
				{
					if(j==i){ front[i]='58'; continue; result[i]=front[i]-behind[i]; }
					front[i]='57';
					result[i]=front[i]-behind[i];
				}
			}
		}
	}
	if(result[1]==0)
	{
		if(flusminusfchk==0)
		{
	    fprintf(out,"-");
		for(i=2;i<=frontlen;i++)
		{
		 fprintf(out,"%d", result[i]);
		}
		}
		else
		{
         for(i=2;i<=frontlen;i++)
		{
		 fprintf(out,"%d", result[i]);
		}
		}
	}
	else
	{
		if(flusminusfchk==0)
		{
			fprintf(out,"-");
		for(i=1;i<=frontlen;i++)
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
	}
	fcloseall();
	return 0;
	}
				