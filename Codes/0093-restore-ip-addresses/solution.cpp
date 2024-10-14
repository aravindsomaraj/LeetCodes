class Solution {
public:
    vector<string> res;

    void helper(string& s, int i, int k, string temp) {
        if (i == s.size() && k == 4) {
            res.push_back(temp.substr(0, temp.size() - 1));
            return;
        }
        if (k > 4 || i >= s.size()) return;

        for (int len = 1; len <= 3; ++len) {
            if (i + len > s.size()) break; // Ensure we don't go out of bounds

            string segment = s.substr(i, len);
            int value = stoi(segment);

            // Skip if the segment has leading zeros or if it's greater than 255
            if ((segment.size() > 1 && segment[0] == '0') || value > 255) continue;

            helper(s, i + len, k + 1, temp + segment + ".");
        }
    }

    vector<string> restoreIpAddresses(string s) {
        helper(s, 0, 0, ""); 
        return res;
    }
};

