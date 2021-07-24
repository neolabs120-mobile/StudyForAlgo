#include<stdio.h>
int number[1000001];
int i,j,k,m,n,s,count,result;
int main(void)
{
    FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d", &n);
	for(i=1;i<=n;i++){
		fscanf(in,"%d", &number[i]);
	}
	for(i=1;i<=n-1;i++){
		if(number[i] > number[i+1]){
            if(count > result)
				result=count;
			count=0;
		}
		else{
			count++;
		}
	}
	if(count > result) result=count;
	count=0;
    for(i=1;i<=n-1;i++){
		if(number[i] < number[i+1]){
            if(count > result)
				result=count;
			count=0;
		}
		else{
			count++;
		}
	}
	if(count > result) result=count;
    fprintf(out,"%d", result+1);
	fcloseall();
	return 0;
}