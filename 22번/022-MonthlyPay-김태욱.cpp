#include<stdio.h>
int m10000,m5000,m1000,m500,m100,m50,m10,m5,m1;
int money[1000];
int i,j,k,l,m,s;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
    fscanf(in,"%d", &m);
	for(i=1;i<=m;i++)
	{
		fscanf(in,"%d", &money[i]);
	}
	for(i=1;i<=m;i++)
	{
	    m10000=m10000+money[i]/10000;
		m5000=m5000+money[i]%10000/5000;
		m1000=m1000+money[i]%10000%5000/1000;
		m500=m500+money[i]%10000%5000%1000/500;
		m100=m100+money[i]%10000%5000%1000%500/100;
		m50=m50+money[i]%10000%5000%1000%500%100/50;
		m10=m10+money[i]%10000%5000%1000%500%100%50/10;
		m5=m5+money[i]%10000%5000%1000%500%100%50%10/5;
		m1=m1+money[i]%10000%5000%1000%500%100%50%10%5/1;
	}
	fprintf(out,"10000 %d\n", m10000);
	fprintf(out,"5000 %d\n", m5000);
	fprintf(out,"1000 %d\n", m1000);
	fprintf(out,"500 %d\n", m500);
	fprintf(out,"100 %d\n", m100);
	fprintf(out,"50 %d\n", m50);
	fprintf(out,"10 %d\n", m10);
	fprintf(out,"5 %d\n", m5);
	fprintf(out,"1 %d\n", m1);
	fcloseall();
	return 0;
}