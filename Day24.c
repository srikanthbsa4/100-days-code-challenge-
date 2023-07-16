#include <stdio.h>

int main(void) {
    int x,n,i;
	// your code goes here
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&x);
	    if(x<=30)
	    printf("NO\n");
	    else
	    printf("YES\n");
	}
	return 0;
}

