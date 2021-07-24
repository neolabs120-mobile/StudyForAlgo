#include<stdio.h>
int n,i,j,k;
char leftalpa[36],rightalpa[36];
int main(void)
{
   FILE *in=fopen("input.txt","r");
   FILE *out=fopen("output.txt","w");
   fscanf(in,"%d", &n);
   n=n%26;
   k=n;
   for(i=0;i<n;i++)
   {
	   rightalpa[i]=i+'A';
   }
   for(i;i<=26;i++)
   {
	   leftalpa[i]=i+'A';
   }
   for(k;k<26;k++)
   {
       fprintf(out,"%c", leftalpa[k]);
   }
   for(i=0;i<n;i++)
   {
	   fprintf(out,"%c", rightalpa[i]);
   }
   fcloseall();
   return 0;
}

