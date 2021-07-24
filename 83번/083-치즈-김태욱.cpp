#include<stdio.h>
int map[101][101];
int airchk[101][101];
int chk[101][101];
int fx[1000001], fy[1000001];
int nx[5]={0,-1,0,1,0};
int ny[5]={-1,0,1,0,0};
int f,s;
int tx,ty;
int gx,gy;
int i,j,k,h,g,b,v;
int n,m;
int count,flag;
int chk1, mapchk, beforecount;
int main(void)
{
	FILE *in=fopen("input.txt","r");
	FILE *out=fopen("output.txt","w");
	fscanf(in,"%d %d", &n, &m);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			fscanf(in,"%d", &map[i][j]);
		//	fprintf(out,"%4d", map[i][j]);
			chk[i][j]=map[i][j];
		}
	//	fprintf(out,"\n");
	}
//	fprintf(out,"\n");
/*	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			fprintf(out,"%4d", chk[i][j]);
		}
		fprintf(out,"\n");
	}    
	fprintf(out,"\n");  */
    while(1)
	{
		f=s=1; fx[f]=1; fy[f]=1;
		while(f<=s)
		{
			for(i=0;i<4;i++)
			{
				tx=fx[f]+nx[i];
				ty=fy[f]+ny[i];
				if(tx>0 && ty>0 && tx<=n && ty<=m)
				{
					if(map[tx][ty]==0 && airchk[tx][ty]==0)
					{
						s++;
						fx[s]=tx;
						fy[s]=ty;
						airchk[tx][ty]=1;
						for(j=0;j<4;j++)
						{
							gx=tx+nx[j];
							gy=ty+ny[j];
							if(gx>0 && gy>0 && gx<=n && gy<=m)
							{
								if(map[gx][gy]==1)
								{
									chk[gx][gy]=0;
								}
							}
						}
					}
				}
			}
			f++;
		}
  /*      for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				fprintf(out,"%4d", chk[i][j]);
			}
			fprintf(out,"\n");
		}    
		fprintf(out,"\n");    */
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				airchk[i][j]=0;
			}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
			     if(chk[i][j]!=0)
				 {
					 chk1=1;
				 }
			}
		}
		if(chk1==0)
		{
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=m;j++)
				{
					if(map[i][j]==1)
					{
						beforecount++;
					}
				}
			}
			break;
		}
		else if(chk1==1) chk1=0;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				map[i][j]=chk[i][j];
			}
		}
		count++;
	}
    fprintf(out, "%d\n%d\n", count+1, beforecount);
	fcloseall();
	return 0;
}




		
	    
	

			

