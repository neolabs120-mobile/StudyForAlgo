#include<stdio.h>
#include<string.h>
int lank[150];
char samteoyagu[150];
double samteoyagugaesu[150];
int samteoyagubindosuwin[150];
int samteoyagubindosulose[150];
int i,j,m,l,k,len,big,small;
int main(void)
{
  FILE *in=fopen("input.txt","r");
  FILE *out=fopen("output.txt","w");
  fscanf(in,"%d", &m);
  for(i=0;i<m;i++)
	  fscanf(in,"%c",&samteoyagu[i]);
  for(i=0;i<m;i++)
  {
   for(j=0;j<=i;j++)
   {
     if(samteoyagu[i]=='W')samteoyagubindosuwin[i]++;
   }
  }
  for(i=0;i<=m+1;i++)
  {
	  for(j=0;j<=i+1;j++)
	  {
		  samteoyagugaesu[i]=samteoyagubindosuwin[i]/(i+1)*100;
	  }
  }
   for(i=0;i<m;i++)
  {
    if(samteoyagugaesu[i]<=samteoyagugaesu[i+1])
	{
		big=i+1;
	}
  }
  for(i=0;i<m;i++)
  {
	  if(samteoyagugaesu[i]>=samteoyagugaesu[i+1])
	  {
		  small=i+1;
	  }
  }
  fprintf(out,"%d %d", big,small);
  fcloseall();
  return 0;
}