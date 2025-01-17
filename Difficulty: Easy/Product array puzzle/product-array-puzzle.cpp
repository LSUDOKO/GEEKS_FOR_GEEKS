//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int zeros = 0, idx = -1;
        int prod = 1;
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] == 0) {
                zeros++;
                idx = i;
            } else {
                prod *= arr[i];
            }
        }
        vector<int> res(arr.size(), 0);
        if (zeros == 0) {
            for (int i = 0; i < arr.size(); i++)
                res[i] = prod / arr[i];
        }
        else if (zeros == 1)
            res[idx] = prod;
        return res;}
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

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends