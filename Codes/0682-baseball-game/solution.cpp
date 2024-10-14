class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> v;
        for (string& s : ops) {
            if (s == "C") {
                v.pop_back(); // Remove the last valid score
            } else if (s == "D") {
                v.push_back(2 * v.back()); // Double the last valid score
            } else if (s == "+") {
                v.push_back(v[v.size()-1] + v[v.size()-2]); // Sum of the last two valid scores
            } else {
                v.push_back(stoi(s)); // Convert to integer and add to the scores
            }
        }
        return accumulate(v.begin(), v.end(), 0); // Sum all the valid scores
    }
};

