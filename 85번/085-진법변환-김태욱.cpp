#include<stdio.h>
FILE *in=fopen("input.txt","r");
FILE *out=fopen("output.txt","w");
int jinsu, number;
void convert(int jin,int n)
{
	char na;
	if(n==0) return;
    na=n%jin;
	convert(jin, n/jin);
	if(na<10) fprintf(out,"%d", na);
	else if(na>=10) fprintf(out,"%c", na+55);
}
int main(void)
{
	fscanf(in,"%d %d", &jinsu, &number);
	convert(jinsu, number);
	return 0;
}
