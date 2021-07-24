#include<stdio.h>
int vote[1001][4];
int i,j,k,m,n,s;
int sum1, sum2, sum3;
int count1, count2, count3;
int count12, count22, count32;
int count13, count23, count33;
int big, locate;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=3;j++)
		{
			fscanf(in,"%d", &vote[i][j]);
		}
	}
	for(i=1;i<=n;i++)
	{for(j=1;j<=1;j++){sum1+=vote[i][j];
		}for(j=2;j<=2;j++)
		{sum2+=vote[i][j];
		}for(j=3;j<=3;j++)
		{sum3+=vote[i][j];
		}
	}
    for(i=1;i<=n;i++)
		{for(j=1;j<=1;j++){
			  if(vote[i][j]==1) count1++;
			  else if(vote[i][j]==2) count2++;
			  else if(vote[i][j]==3) count3++;
			}for(j=2;j<=2;j++){
			  if(vote[i][j]==1) count12++;
			  else if(vote[i][j]==2) count22++;
			  else if(vote[i][j]==3) count32++;
			}for(j=3;j<=3;j++){
			  if(vote[i][j]==1) count13++;
			  else if(vote[i][j]==2) count23++;
			  else if(vote[i][j]==3) count33++;
			}
		}
	if(sum1>sum2 && sum1>sum3) fprintf(out,"1 %d", sum1);
	else if(sum2>sum1 && sum2>sum3) fprintf(out,"2 %d", sum2);
	else if(sum3>sum1 && sum3>sum2) fprintf(out,"3 %d", sum3);
	else if(sum1==sum2 || sum1==sum3 || sum2==sum3)
	{
		if(count3>count32 && count3>count33) fprintf(out,"1 %d", sum1);
		else if(count32>count3 && count32>count33) fprintf(out,"2 %d", sum2);
		else if(count33>count3 && count33>count32) fprintf(out,"3 %d", sum3);
		else if(count3==count32 || count3==count33 || count32==count33)
		{
			if(count2>count22 && count2>count23) fprintf(out,"1 %d", sum1);
			else if(count22>count2 && count22>count23) fprintf(out,"2 %d", sum2);
			else if(count23>count2 && count23>count22) fprintf(out,"3 %d", sum3);
			else if(count2==count22 || count2==count23 || count22==count23)
			{
				if(sum1==sum2 && sum1==sum3 && sum2==sum3) fprintf(out,"0 %d", sum1);
				else if(sum1==sum2 && sum1!=sum3 && sum2!=sum3) fprintf(out,"0 %d", sum1);
				else if(sum1!=sum2 && sum1==sum3 && sum2!=sum3) fprintf(out,"0 %d", sum1);
				else if(sum1!=sum2 && sum1!=sum3 && sum2==sum3) fprintf(out,"0 %d", sum2);
			}
		}
	}

	fcloseall();
	return 0;
}

