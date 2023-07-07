#include <stdio.h>

int main(void) {
	// your code goes here
	int i,N,n;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&N);
	    if(N%4==0)
	    printf("%d\n",N/4);
	    else
	    printf("%d\n",(N/4)+1);
	}
	return 0;
}

