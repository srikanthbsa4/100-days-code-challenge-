#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,N,j,x,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&N);
	    for(j=0;j<N;j++)
	    scanf("%d",&a[j]);
	    scanf("%d",&x);
	    for(j=0;i<N;j++)
	    {
	        if(a[j]==x)
	        printf("YES");
	        
	        
	    }
	   
	    
	}
	return 0;
}

