#include<stdio.h>
#include<string.h>
char alpa[501];
int count[27];
int i,len;
int main(void)
{
   FILE *in=fopen("input.txt","r");
   FILE *out=fopen("output.txt","w");

   
   
   fgets(alpa,501,in);
   len=strlen(alpa);
   
   for(i=0;i<len;i++)
   {
      if(alpa[i]>=65 && alpa[i]<=90) count[alpa[i]-'A']++;
	  else if(alpa[i]>=97 && alpa[i]<=123) count[alpa[i]-'a']++;
   }
   
   for(i=0;i<26;i++)
   {
	   fprintf(out,"%c %d\n", 'A'+i,count[i]);
   }

   fcloseall();
   return 0;
}
