#include<stdio.h>
int map[10000001][10000001];
int chk[10000001][10000001];
int max[10000001];
int maxx[10000001];
int miny[10000001];
int fx[6]={0,0,0,-1,0,1}
int fy[6]={0,0,1,0,-1,0}
int x[1001];
int y[1001];
int i,j,k,p,m,n,s,a,b;
int xs,ys;
int tx,ty;
int count;
int maxcount;
int main(void)
{
     FILE *in=fopen("input.txt","r");
	 FILE *out=fopen("output.txt",w");
	 fscanf("%d %d %d %d", &n, &m, &a, &b);
	 for(i=1;i<=a;i++)
	 {
		 fscanf(in,"%d %d", &x[i], &y[i]);
	 }
    

