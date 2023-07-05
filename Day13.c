#include <stdio.h>

int main(void) {
	// your code goes here
		int n,i,N;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d\n",&N);
	    if(N%4==0)
	    printf("\nGOOD");
	    else
	    printf("\nNOT GOOD");
	    
	  
	}
	return 0;
}

