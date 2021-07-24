#include<stdio.h>
int big,result;
int array[4];
int i,j,n;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=3;j++)
		{
			fscanf(in,"%d", &array[j]);
		}
		if(array[1]!=array[2] && array[2]!=array[3] && array[1]!=array[3])
		{for(j=1;j<=3;j++){
			if(big < array[j]){
				big=array[j];
				}
			}
			if(result < big*100){
				result=big*100;
			}
		}
		else if(array[1]==array[2] && array[1]==array[3] && array[2]==array[3])
		{
			if(result < 10000+array[1]*1000)
			{
				result=10000+array[1]*1000;
			}
		}
		else
		{
			if(array[1]==array[2])
			{
				if(result < 1000+array[1]*100)
				{
					result=1000+array[1]*100;
				}
			}
			else if(array[1]==array[3])
			{
				if(result < 1000+array[1]*100)
				{
					result=1000+array[1]*100;
				}
			}
			else if(array[2]==array[3])
			{
				if(result < 1000+array[2]*100)
				{
					result=1000+array[2]*100;
				}
			}
		}
	}
	fprintf(out,"%d", result);
	fcloseall();
	return 0;
}


				



