#include<stdio.h>
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	char alpa;
	fscanf(in,"%c", &alpa);
	if(alpa >=97) fprintf(out,"�ҹ���");
	else fprintf(out,"�빮��");
	return 0;
}	