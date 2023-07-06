#include <stdio.h>

int main(void) {
	// your code goes here
	int n,A,B,X,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d%d%d\n",&X,&A,&B);
	    if((A*1+B*2)>=X)
	    printf("\n QUALIFY");
	    else
	    printf("\n NOTQUALIFY");
	}
	return 0;
}

