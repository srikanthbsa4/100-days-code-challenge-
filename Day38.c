//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void toBinary(int N)
{
    // your code here
    int j,i=0,b[32];
   while(N>0)
   {
       b[i]=N%2;
        N=N/2;
        i++;
   }
   for(j=i-1;j>=0;j--)
   {
      printf("%d",b[j]); 
   }
 
 }

//{ Driver Code Starts.

int main() {
	//code
	
	int t;
	cin>>t;
	
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    toBinary(n);
	    cout<<endl;
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
    int binary_to_decimal(string str) {
        // Code here.
    int dec_value = 0;
    int base = 1;
    int len = str.length();

    for (int i = len - 1; i >= 0; i--) {
        if (str[i] == '1') {
            dec_value += base;
        }
        base *= 2;
    }

    return  dec_value  ;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.binary_to_decimal(str);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends


