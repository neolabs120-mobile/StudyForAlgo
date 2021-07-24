#include<stdio.h>
int input[40000],sort[40000];
int i,j,k,m,n,s;
int backup,flag;
int main(void)
{
   FILE *in=fopen("input.txt","r");
   FILE *out=fopen("output.txt","w");
   fscanf(in,"%d", &n);
   for(i=1;i<=n;i++)
   {
	   fscanf(in,"%d", &input[i]);
   }
   for(i=1;i<=n;i++)
   {
	   sort[i]=input[i];
   }
   for(i=1;i<=n;i++)
   {
	   fprintf(out,"%d ", input[i]);
   }
   fprintf(out,"\n");
   for(i=1;i<=n-1;i++)
   {
	   flag=0;
	   for(j=1;j<=n;j++)
	   {
           if(sort[j-1]>sort[j])
		   { 
			  flag=1;
			   backup=sort[j-1];
			   sort[j-1]=sort[j];
			   sort[j]=backup;
		   }
	   
	   
	   }
	  if(flag==0){ for(m=1;m<=n;m++) fprintf(out,"%d ", sort[m]); return 0;}

	  for(k=1;k<=n;k++) fprintf(out,"%d ",sort[k]);
	   fprintf(out,"\n");
   }
  

   fcloseall();
   return 0;
}
