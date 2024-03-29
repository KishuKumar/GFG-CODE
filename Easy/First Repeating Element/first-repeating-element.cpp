//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        std::unordered_map<int, int> freqMap;

    int minIndex = INT_MAX;
    for (int i = 0; i < n; ++i) {
        if (freqMap.find(arr[i]) != freqMap.end()) {
            if (freqMap[arr[i]] < minIndex) {
                minIndex = freqMap[arr[i]];
            }
        } else {
            freqMap[arr[i]] = i + 1; // Store 1-based index
        }
    }

    if (minIndex != INT_MAX) {
        return minIndex;
    } else {
        return -1; // No repeating element found
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

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends