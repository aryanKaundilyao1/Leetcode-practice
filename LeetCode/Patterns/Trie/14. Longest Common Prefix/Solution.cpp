class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Find the shortest string
        int index = 0;
        int minSize = INT_MAX;

        for (int i = 0; i < strs.size(); i++) {
            if (strs[i].size() < minSize) {
                minSize = strs[i].size();
                index = i;
            }
        }

        string shortest = strs[index];
        int count = 0;

        // Compare each character of the shortest string
        for (int i = 0; i < shortest.size(); i++) {
            for (int j = 0; j < strs.size(); j++) {
                if (strs[j][i] != shortest[i]) {
                    return shortest.substr(0, count);
                }
            }

            count++;
        }

        return shortest.substr(0, count);
    }
};
    