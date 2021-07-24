#include<stdio.h>
int main(void)
{
	FILE *in=fopen("input.txt", "r");
	FILE *out=fopen("output.txt", "w");
	char i;
	fscanf(in,"%c", &i);
	fprintf(out,"%d", i-'A'+1);
	fcloseall();
	return 0;
}
