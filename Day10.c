#include <stdio.h>

int main(void) {
	// your code goes here
	int i,X,Y,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d%d\n",&X,&Y);
	    printf("%d\n",X*10+Y*5);
	}
	return 0;
}