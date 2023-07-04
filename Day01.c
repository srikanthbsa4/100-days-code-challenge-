#include <stdio.h>

int main(void) {
    int n,i,x,y,z;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d%d%d\n",&x,&y,&z);
	    printf("%d\n",x*y*z);
	}
	return 0;
}

