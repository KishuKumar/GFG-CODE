//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string ans="";
        int i,j,f,m=arr[0].size();
        for(i=1;i<N;i++)
        {
            m=min(m,int(arr[i].size()));
        }
        for(i=0;i<m;i++)
        {
            f=0;
            for(j=0;j<N;j++)
            {
                if(arr[0][i]!=arr[j][i])
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                break;
            }
            ans+=arr[0][i];
        }
        if(ans=="")
        {
            ans="-1";
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends