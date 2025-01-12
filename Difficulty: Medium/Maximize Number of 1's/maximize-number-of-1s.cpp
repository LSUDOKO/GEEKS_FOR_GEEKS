//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        int res = 0;
        int start = 0, end = 0; 
        int cnt = 0;
        while (end < arr.size()) {
            if (arr[end] == 0)
                cnt++;
            while (cnt > k) {
                if (arr[start] == 0)
                    cnt--;
                    
                start++;
            }
            res = max(res, (end - start + 1));
            end++; 
        }
        return res; }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int m;
        cin >> m;
        cin.ignore();

        Solution obj;
        int ans = obj.maxOnes(arr, m);
        cout << ans << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends