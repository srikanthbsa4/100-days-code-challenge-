#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,k,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d %d\n",&k,&x);
	    printf("%d\n",k-x);
	}
	return 0;
}

