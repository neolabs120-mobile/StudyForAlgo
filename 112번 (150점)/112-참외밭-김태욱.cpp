#include<stdio.h>
int length[10];
int location[7];
int result[5];
int final[5];
int number1[3];
int number2[3];
int i,j,k,m,n,s;
int locate,locate1, locate2, locate3, locate4;
int count1,count2,count3,count4;
int count;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=6;i++)
	{
		fscanf(in,"%d %d", &length[i], &location[i]);
	}
	length[0]=length[6];
	length[7]=length[1];
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=6;j++)
		{
			if(length[j]==i) count++;
		}
		if(count==1)
		{
			for(j=1;j<=6;j++)
			{
			    if(length[j]==i) locate=j;
			}
		}
		else
		{
			for(j=1;j<=6;j++)
			{
				if(length[j]==i)
				{
					if(length[j-1]%2==length[j+1]%2) locate=j;
				}
			}
		}
		if(i==1) locate1=locate;
		if(i==2) locate2=locate;
		if(i==3) locate3=locate;
		if(i==4) locate4=locate;
		if(count==1) 
		{
			count1++;
			number1[count1]=i;
		}
		else if(count==2)
		{
			count2++;
			number2[count2]=i;
		}
        count=0;
		locate=0;
	}
	result[1]=locate1; result[2]=locate2; result[3]=locate3; result[4]=locate4;
    if((location[result[number1[1]]]*location[result[number1[2]]])>(location[result[number2[1]]]*location[result[number2[2]]]))
	{
		fprintf(out,"%d", ((location[result[number1[1]]]*location[result[number1[2]]])-(location[result[number2[1]]]*location[result[number2[2]]]))*n);
	}
	else if((location[result[number1[1]]]*location[result[number1[2]]])<(location[result[number2[1]]]*location[result[number2[2]]]))
	{
		fprintf(out,"%d", ((location[result[number2[1]]]*location[result[number2[2]]])-(location[result[number1[1]]]*location[result[number1[2]]]))*n);
	}
    fcloseall();
	return 0;
}
