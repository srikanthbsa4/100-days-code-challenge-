#include <stdio.h>

int main(void) {
	// your code goes here
	int i,n,X;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&X);
	if(X%10==0)
	printf("%d\n",X/10);
	else if(X%5==0)
	printf("%d\n",X/10+1);
	else
	printf("-1\n");
	
	
	}

	
	return 0;
}

