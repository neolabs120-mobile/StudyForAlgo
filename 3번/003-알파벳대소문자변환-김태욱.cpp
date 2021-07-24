#include<stdio.h>
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	char alpa;
	fscanf(in,"%c", &alpa);
	if(alpa>=97) fprintf(out,"%c", alpa-32);
	else fprintf(out,"%c", alpa+32);
	return 0;
}