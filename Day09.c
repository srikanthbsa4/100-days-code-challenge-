#include <stdio.h>

int main(void) {
    int n,i,C,X,Y;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d%d%d\n",&C,&X,&Y);
	    printf("%d\n",(C-X)*Y);
	}
	return 0;
}

