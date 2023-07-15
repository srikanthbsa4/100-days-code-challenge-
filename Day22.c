#include<stdio.h>
int main()
{
    int n,m,i,j,k;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&m);
        int a[m];
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=m-1;i>=0;i--)
        {
            if(a[i]!=0)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}