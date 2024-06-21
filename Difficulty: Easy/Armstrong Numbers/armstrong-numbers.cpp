//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    std::string armstrongNumber(int n) {
        // code here
        int a,b,c,d,sum;
        a=n%10;
        b=n/10;
        c=b%10;
        d=b/10;
        
        sum=(a*a*a)+(c*c*c)+(d*d*d);
        if(n==sum)
        {
            return "true";
        }
        else{
            return "false";
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
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends