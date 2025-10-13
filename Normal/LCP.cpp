// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".
// Example 1:
// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:
// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";

        string Atrs = strs[0];
        for (int i = 0; i < strs.size(); i++) {
            while (strs[i].find(Atrs) != 0) {
                Atrs = Atrs.substr(0, Atrs.length() - 1);
                if (Atrs.empty())
                    return "";
            }
        }
        return Atrs;
    }
};

int main() {
    Solution sol;
    int n;

    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);
    cout << "Enter the strings (one per line):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    string result = sol.longestCommonPrefix(strs);
    cout << "Longest Common Prefix: \"" << result << "\"" << endl;

    return 0;
}
