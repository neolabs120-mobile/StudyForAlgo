#include<stdio.h>
int rullet[20001];
int rulletcount[20001];
int rulletpoint[20001];
int i,j,m,n,s,k;
int max,count=1,backup,save,chk=1,launchcount,otherlaunchcount,flag,t;
int main(void)
{
   FILE *in=fopen("input.txt","r");
   FILE *out=fopen("output.txt","w");
   fscanf(in,"%d", &n);
   for(i=1;i<=n;i++)
   {
      fscanf(in,"%d", &rullet[i]);
	  rulletpoint[i]=rullet[i];
   }
   for(i=1;i<=n;i++)
   {
       flag=0;
	   t=rulletpoint[1];
	   for(j=1;j<=n-1;j++)
	   {
		   rulletpoint[j]=rulletpoint[j+1];
	   }
	   rulletpoint[n]=t;
	   for(j=1;j<=n;j++)
	   {
		   if(rullet[j]>rulletpoint[j]) break;
		   if(rullet[j]<rulletpoint[j]) 
		   {
			   flag=1;
			   break;
		   }
	   }
	   if(flag==1)
	   {
		   for(j=1;j<=n;j++)
		   {
			   rullet[j]=rulletpoint[j];
		   }
		   count=i+1;
	   }
   }
   fprintf(out,"%d", count);
   fcloseall();
   return 0;
}


