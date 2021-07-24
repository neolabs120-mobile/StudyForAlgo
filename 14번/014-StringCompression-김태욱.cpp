#include<stdio.h>
#include<string.h>
char alpa[10001];
int bindosu[28];
int bindosualpa[28];
int i,j,k,l,m,n,len,count;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%s", &alpa);
	len=strlen(alpa);
	for(i=0;i<=len;i++)
	{
	    if(alpa[i]!=alpa[i+1])
		{
			if(count==0)
			{
				fprintf(out,"%c", alpa[i]);
				count=0;
				continue;
			}
			fprintf(out,"%d%c", count+1,alpa[i]);
			count=0;
		}
		else if(alpa[i]==alpa[i+1]) count++;
	}
    
	fcloseall();
	return 0;
}
	  