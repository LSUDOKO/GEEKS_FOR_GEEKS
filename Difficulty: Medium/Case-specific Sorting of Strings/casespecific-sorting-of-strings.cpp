class Solution {
  public:
    string caseSort(string& s) {
        vector<char> lower, upper;

        // Step 1: Separate characters by case
        for (char c : s) {
            if (islower(c)) lower.push_back(c);
            else upper.push_back(c);
        }

        // Step 2: Sort both vectors
        sort(lower.begin(), lower.end());
        sort(upper.begin(), upper.end());

        // Step 3: Reconstruct result based on original case positions
        int li = 0, ui = 0;
        string result = "";
        for (char c : s) {
            if (islower(c))
                result += lower[li++];
            else
                result += upper[ui++];
        }

        return result;
    }
};
