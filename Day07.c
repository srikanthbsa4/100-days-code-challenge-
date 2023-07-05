#include <stdio.h>

int main(void) {
	// your code goes here
	int i,M,N,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d%d\n",&N,&M);
	    printf("%d\n",2*N+4*M);
	}
	return 0;
}

