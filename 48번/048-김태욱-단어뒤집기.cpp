#include<stdio.h>
#include<string.h>
char munja[280];
int i,j,k,m,n,s;
char arrayresult[280];
char arraybackup2[280];
int backup, ibackup;
int munjalen;
int tistory;
int plus, neo, neobackup;
int main(void)
{
	    FILE *in=fopen("input.txt","r");   
	    FILE *out=fopen("output.txt","w");
  	    fgets(munja,280,in);
        munjalen=strlen(munja);
     	for(i=munjalen-1;i>=0;i--)
		{
     		arrayresult[tistory]=munja[i];
     		tistory++;
		}  
		for(i=munjalen;i>=1;i--)
		{
			arrayresult[i]=arrayresult[i-1];
			if(i==1) arrayresult[i-1]=' ';
		}
    	neo=munjalen;
	    neobackup=neo;
    	for(i=280;i>=0;i--)
		{
   		  if(arrayresult[neobackup]==' ')     
		  {
			backup=munjalen-(munjalen-neobackup);
			for(j=munjalen-(munjalen-neobackup)+1;j<=backup+plus;j++)
			{
				fprintf(out, "%c", arrayresult[j]);
			}
			plus=0; fprintf(out, " "); neo=neo-plus; neobackup--;
		  }
	      else
		  { 
			  plus++;
			  neobackup--;
			  
		  }
		  if(neo==0) break;
		}
	
	fcloseall();
	return 0;
}













