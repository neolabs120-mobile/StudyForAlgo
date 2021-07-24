#include<stdio.h>
int frontsu, behindsu;
int firstsu, secondsu, thirdsu;
int firstsuresult, secondsuresult, thirdsuresult;
int i,j,k,m,n,s;
int sum;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d %d", &frontsu, &behindsu);
	firstsu=behindsu/100;
	secondsu=behindsu/10%10;
	thirdsu=behindsu%10;
	firstsuresult=firstsu*frontsu;
	secondsuresult=secondsu*frontsu;
	thirdsuresult=thirdsu*frontsu;
	sum=firstsuresult+secondsuresult+thirdsuresult;
	fprintf(out,"%d \n%d\n%d\n%d", thirdsuresult,secondsuresult,firstsuresult, frontsu*behindsu);
	fcloseall();
	return 0;
}



