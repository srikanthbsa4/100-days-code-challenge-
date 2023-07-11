#include <stdio.h>

int main(void) {
	// your code goes here
	int a,M,N,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d%d",&N,&M);
	    if(N>M)
	    a=N-M;
	    else
	    a=0;
	    printf("%d\n",N+a);
	}
	return 0;
}

