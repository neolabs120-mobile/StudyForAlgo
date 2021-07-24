#include<stdio.h>
int su[20];
int i,j,l,m,k,save,numbersave;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	for(i=1;i<=9;i++)
	{
     fscanf(in,"%d", &su[i]);
	 if(su[i]>save)
	 {
		 save=su[i];
		 numbersave=i;
	 }
	}
	fprintf(out,"%d\n%d", save,numbersave);
    fcloseall();
	return 0;
}