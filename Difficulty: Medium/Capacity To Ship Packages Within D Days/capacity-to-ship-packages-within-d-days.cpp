//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
public:
    int leastWeightCapacity(int arr[], int n, int d) {
        int mincap = 0;
        int maxcap = 0;

        // Find initial search space
        for (int i = 0; i < n; i++) {
            mincap = max(mincap, arr[i]);
            maxcap += arr[i];
        }

        // Binary search on capacity
        while (mincap < maxcap) {
            int mid = mincap + (maxcap - mincap) / 2;
            int sum = 0, days = 1;

            for (int i = 0; i < n; i++) {
                if (sum + arr[i] > mid) {
                    days++;
                    sum = 0;
                }
                sum += arr[i];
            }

            if (days > d) {
                mincap = mid + 1;
            } else {
                maxcap = mid;
            }
        }

        return mincap;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, D;
        cin >> N;

        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];
        cin >> D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr, N, D) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends