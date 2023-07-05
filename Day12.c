#include <stdio.h>

int main(void) {
	// your code goes here
	int A,B,n,i,c,d;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d%d\n",&A,&B);
	    c=(A*100)/10;
	    d=(B*100)/20;
	    if(c>d)
	    printf("\n FIRST");
	    else if(d>c)
	    printf("\n SECOND");
	    else 
	    printf("\n ANY");
	}
	return 0;
}

