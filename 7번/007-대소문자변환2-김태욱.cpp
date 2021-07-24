#include<stdio.h>
#include<string.h>
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	
	char alpa[501];
	int i,len;
	
	fgets(alpa,510,in);
	len=strlen(alpa);
	
	for(i=0;i<len;i++)
	{
      if(alpa[i]==' ') continue;
	  else if(alpa[i] >=97) alpa[i]-=32;
	  else alpa[i]+=32;
	}
	
	for(i=0;i<len;i++)
	{
		fprintf(out,"%c", alpa[i]);
	}

	fcloseall();
	return 0;
}


