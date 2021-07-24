#include<stdio.h>
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	char alpa;
	fscanf(in,"%c", &alpa);
	if(alpa >=97) fprintf(out,"소문자");
	else fprintf(out,"대문자");
	return 0;
}	