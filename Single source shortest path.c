#include<stdio.h>
int main()
{
    int v,n,c[100][100],s[100],d[100],max,i,j,k,w,u;
    scanf("%d%d",&v,&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        s[i]=0;
        d[i]=c[v][i];
    }
    s[v]=1;
    d[v]=0;
    for(j=2;j<=n-1;j++)
    {
        max=9999;
        for(k=1;k<=n;k++)
        {
            if(s[k]==0)
            {
                if(max>d[k])
                {
                    max=d[k];
                    u=k;
                }
            }
        }
        s[u]=1;
        for(w=1;w<=n;w++)
        {
            if(s[w]==0)
            {
                if(d[w]>d[u]+c[u][w])
                {
                    d[w]=d[u]+c[u][w];
                }
            }
        }
    }
    for(i=1;i<=n;i++)
        printf("%d ",d[i]);
}

//contributed by snk
