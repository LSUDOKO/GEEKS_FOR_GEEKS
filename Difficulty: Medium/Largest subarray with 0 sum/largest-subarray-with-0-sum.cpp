//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
    int maxLen(vector<int>& arr) {
    unordered_map<int, int> presum;

    int sum = 0;
    int max_len = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        if (sum == 0) {
            max_len = i + 1;
        }
        if (presum.find(sum) != presum.end()) {
            max_len = max(max_len, i - presum[sum]);
        } else {
            presum[sum] = i;
        }
    }

    return max_len;
}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.maxLen(a) << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends