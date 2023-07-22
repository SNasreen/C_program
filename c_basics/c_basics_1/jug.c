#include <stdio.h>
long p[10001];
int d[500][2];
int i,j,w,t,e,f,c;
long int memo(int w)
{
//	printf("c:%d\n", c);
	if(p[w] != -2)
		return p[w];
	int j,min,temp,changed = 0;
	min = d[c-1][0]*w + 1;
	for(j=0;j<c;j++)
	{
		if(w - d[j][1]>=0)
		{
			temp = memo(w - d[j][1]);
			if(temp > -1)
			{
				temp += d[j][0];
//				printf("w:%d temp:%d j:%d c:%d val:%d\n",w,temp,j,c,d[j][0]);
				if(temp < min)
					min = temp;
				if(!changed)
					changed++;
			}
		}
	}
	if(!changed)
		min = -1;
	p[w] = min;
//	printf("w:%d p:%d\n",w,p[w]);
	return p[w];
}
int main()
{
	p[0] = 0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&e,&f);
		w = f - e;
		for(j=1;j<=w;j++)
			p[j] = -2;
		scanf("%d",&c);
		for(j=0;j<c;j++)
			scanf("%d %d",&d[j][0],&d[j][1]);
		memo(w);
		if(p[w] == -1)
			printf("This is impossible.\n");
		else printf("The minimum amount of money in the piggy-bank is %ld.\n", p[w]);
	}
	return 0;
}
