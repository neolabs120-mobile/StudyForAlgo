#include<stdio.h>
#include<string.h>
int total,i,j,k,len,backup;
char munja[256];
int smallalpa[30]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
int main(void)
{
    FILE *in=fopen("input.txt","r");
    FILE *out=fopen("output.txt","w");
    fgets(munja,256,in);
    len=strlen(munja);
    for(i=0;i<len;i++)
    {
      if(munja[i]==' ')
      {
         total++;
		 continue;
      }
      else if(munja[i]>=97)
	  {
		  total+=smallalpa[munja[i]-'a'];
	  }
	  else
	  {
		  total+=smallalpa[munja[i]-'A'];
	  }
     
	}
      fprintf(out,"%d", total);
                  
      return 0;
}
              
                       
                   
          
       
          