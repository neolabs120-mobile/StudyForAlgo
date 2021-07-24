#include<stdio.h>
double a,b,c,d,e,f,g,h,i,j,k,l;
double save,tot;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l);
	tot=(a+b+c+d+e+f+g+h+i+j+k+l);
	tot=tot/12;
	fprintf(out,"%.2f", tot);
	fcloseall();
	return 0;
}
	
