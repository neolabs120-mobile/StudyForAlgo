#include<stdio.h>
char nori1[10];
char nori2[10];
char nori3[10];
int i,j,k,m,n,s;
int count,count1;
int main(void)
{
   FILE *in=fopen("input.txt","r");
   FILE *out=fopen("output.txt","w");
   fgets(nori1,10,in);
   fgets(nori2,10,in);
   fgets(nori3,10,in);
   for(i=0;i<=6;i++)
   {
	   if(nori1[i]=='1') count++;
	   if(nori1[i]=='0') count1++;
   }
   if(count==1 && count1==3) fprintf(out,"C\n");
   else if(count==2 && count1==2) fprintf(out,"B\n");
   else if(count==3 && count1==1) fprintf(out,"A\n");
   else if(count1==4) fprintf(out,"D\n");
   else if(count==4) fprintf(out,"E\n");
   count=0;
   count1=0;
   for(i=0;i<=6;i++)
   {
	   if(nori2[i]=='1') count++;
	   if(nori2[i]=='0') count1++;
   }
   if(count==1 && count1==3) fprintf(out,"C\n");
   else if(count==2 && count1==2) fprintf(out,"B\n");
   else if(count==3 && count1==1) fprintf(out,"A\n");
   else if(count1==4) fprintf(out,"D\n");
   else if(count==4) fprintf(out,"E\n");
   count=0;
   count1=0;
   for(i=0;i<=6;i++)
   {
	   if(nori3[i]=='1') count++;
	   if(nori3[i]=='0') count1++;
   }
   if(count==1 && count1==3) fprintf(out,"C\n");
   else if(count==2 && count1==2) fprintf(out,"B\n");
   else if(count==3 && count1==1) fprintf(out,"A\n");
   else if(count1==4) fprintf(out,"D\n");
   else if(count==4) fprintf(out,"E\n");
   count=0;
   count1=0;
   fcloseall();
   return 0;
}


