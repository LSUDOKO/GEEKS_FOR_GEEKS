//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        vector<int>ans;
        long long as=1;
        ans.push_back(as);
        for (int i=0;i<n-1;i++){
            as=as*(n-i-1);
            as=as/(i+1);
            ans.push_back(as);
        }
        return ans;
    }
};


//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends