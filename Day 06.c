#include <stdio.h>

int main(void) {
	// your code goes here
	int i,M,N,K,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d%d%d\n",&N,&M,&K);
	    if((M*K)>=N)
	    printf("\n YES");
	    else 
	    printf("\n NO");
	}
	return 0;
}

