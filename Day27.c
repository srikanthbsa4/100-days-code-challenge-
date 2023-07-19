//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int i,j,k;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                printf(" ");
                
            }
            for(k=0;k<2*i+1;k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	   int i,j,k;
	    for(i=n;i>0;i--)
        {
            for(j=0;j<n-i;j++)
            {
                printf(" ");

            }
            for(k=0;k<2*i-1;k++)
            {
                printf("*");
            }
            printf("\n");
        }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        // code here
    
     int i,j,k;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                printf(" ");
            }
            for(k=0;k<=i;k++)
            {
                printf("* ");
            }
            printf("\n");

        }
        for(i=n;i>0;i--)
        {

            for(j=0;j<n-i;j++)
            {

                printf(" ");

            }
            for(k=0;k<i;k++)
            {

                printf("* ");
            }
            printf("\n");
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends


