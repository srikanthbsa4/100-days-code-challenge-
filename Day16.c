#include <stdio.h>

int main(void) {
	int n,N,X,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d%d\n",&N,&X);
	    
	    if(X%N==0)
	    printf("\nYES");
	    else
	    printf("\n NO");
	}
	return 0;
}
