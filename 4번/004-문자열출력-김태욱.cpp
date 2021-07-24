#include<stdio.h>
#include<string.h>
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	char alpa[550];
	int i;
	fscanf(in,"%s", &alpa);
	for(i=0;i<=550;i++)
	{
       if(alpa[i]==0) break;
	   fprintf(out,"%c\n", alpa[i]);
	}
	fcloseall();
	return 0;
}
	