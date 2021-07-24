#include<stdio.h>
char samteoyagu[200];
float samteoyagugaesu[200];
int i,j,s,l,m,count;
float k;
float t=99999;
int largenumber,smallnumber;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &m);
    for(i=0;i<=m;i++)
	{
		fscanf(in,"%c", &samteoyagu[i]);
	}
	for(i=1;i<=m;i++)
	{
	  if(i<=2) continue;
	  for(j=1;j<=i;j++)
	  {
		 if(samteoyagu[j]=='W') count++;
	  }
	  samteoyagugaesu[i]=((float)count/(float)i)*100;
	  count=0;
	}
	for(i=1;i<=m;i++)
	{
		if(samteoyagugaesu[i]>=k)
		{
			if(largenumber<=i) largenumber=i;
			k=samteoyagugaesu[i];
			largenumber=i;
		}
	}
	for(i=1;i<=m;i++)
	{
		if(i<=2) continue;
		if(samteoyagugaesu[i]<=t) 
		{
			if(smallnumber<=i) smallnumber=i;
			t=samteoyagugaesu[i];
			smallnumber=i;
		}
	}
    fprintf(out,"%d %d", largenumber,smallnumber);
	fcloseall();
	return 0;

}





