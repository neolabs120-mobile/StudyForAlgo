#include<stdio.h>
int start=1,end,middle;
int file[1000];
int n;
int i,j,k,l,m,count=1,chk=1;                                   
int main(void)
{
   FILE *in=fopen("input.txt","r");
   FILE *out=fopen("output.txt","w");
   fscanf(in,"%d %d", &n,&m);
   end=n;
   for(i=1;i<=n;i++)
   {
 	   fscanf(in,"%d", &file[i]);
   }
   for(i=1;i<=n;i++)
   {
       middle=(start+end)/2;
	   if(file[middle]>m)
	   {
		   end=middle-1;
		   count++;
	   }
	   if(file[middle]<m)
	   {
		   start=middle+1;
		   count++;
	   }
	   if(start>end) 
	   {
		   chk=0;
	   }
	   if(file[middle]==m)
	   {
		   chk=1;                                    
	   }
	  

   }
   if(chk==0) fprintf(out,"impossible");
   else fprintf(out,"%d", count);
   fcloseall();
   return 0;
}
	   