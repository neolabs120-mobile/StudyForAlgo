#include<stdio.h>
#include<string.h>
int main(void)
{
	FILE *in=fopen("input.txt","r");
    FILE *out=fopen("output.txt","w");

	char alpa[256];
	int i,len,wordcount=0;

    fgets(alpa,256,in);
	len=strlen(alpa);

	for(i=0;i<len;i++)
	{
		if(alpa[i]==' ') wordcount++;
	}
	
	fprintf(out,"%d", wordcount+1);
	
	fcloseall();
	return 0;
}

