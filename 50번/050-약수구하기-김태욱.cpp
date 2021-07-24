#include<stdio.h>
int yacsu[20000];
int i,j;
int number, bunho, count=1;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
    fscanf(in,"%d %d", &number, &bunho);
	for(i=1;i<=number;i++)
	{
		if(number%i==0){ yacsu[count]=i; count++;}
	}
	fprintf(out,"%d", yacsu[bunho]);
	fcloseall();
	return 0;
}
