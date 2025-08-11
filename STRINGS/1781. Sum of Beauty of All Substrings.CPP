class Solution {
public:
    int freqDiff(const string &str) {
        if (str.empty()) return 0;

        unordered_map<char, int> freq;
        for (char ch : str) {
            freq[ch]++;
        }

        int maxFreq = INT_MIN;
        int minFreq = INT_MAX;
        for (auto &p : freq) {
            maxFreq = max(maxFreq, p.second);
            minFreq = min(minFreq, p.second);
        }

        return maxFreq - minFreq;
    }

    int beautySum(string s) {
        int n = s.size();
        int total = 0;

        // Iterate over all substrings
        for (int i = 0; i < n; i++) {
            unordered_map<char, int> freq;
            for (int j = i; j < n; j++) {
                freq[s[j]]++; // extend substring

                int maxFreq = INT_MIN;
                int minFreq = INT_MAX;
                for (auto &p : freq) {
                    maxFreq = max(maxFreq, p.second);
                    minFreq = min(minFreq, p.second);
                }

                total += (maxFreq - minFreq);
            }
        }

        return total;
    }
};

