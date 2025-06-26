class Solution {
  public:
    int countSubstring(string s) {
        int n = s.length();
        int left = 0;
        int count = 0;
        int freq[3] = {0, 0, 0}; 

        for (int right = 0; right < n; ++right) {
            freq[s[right] - 'a']++;
            while (freq[0] > 0 && freq[1] > 0 && freq[2] > 0) {
                count += (n - right);
                freq[s[left] - 'a']--;
                left++;
            }
        }
        return count;
    }
};
