#include <stdio.h>

int main(void) {
    int i,n,N;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d\n",&N);
	    printf("%d\n",(N*1000)/100);
	}
	return 0;
}

