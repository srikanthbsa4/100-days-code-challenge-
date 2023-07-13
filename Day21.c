#include <stdio.h>

int main(void) {
	// your code goes here
		int i,n;
	scanf("%d",&n);
	float x;

	for(i=0;i<n;i++)
	{
	    scanf("%f",&x);
	    if(x<1500)
	        printf("%.2f\n",x+x*0.1+x*0.9);
	     else
	      printf("%.2f\n",x+500+x*0.98);
	}
	return 0;
}

