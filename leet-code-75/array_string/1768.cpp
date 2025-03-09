
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1 = word1.length();
        int l2 = word2.length();

        string result;

        int i = 0, j = 0;

        while (i < l1 || j < l2) {
            if (i < l1) {
                result += word1[i++];
            }
            if(j < l2) {
                result += word2[j++];
            }
        }
        return result;
    }
};

int main() {
    Solution s;
    string result = s.mergeAlternately("abc", "xyz");
    cout << result << endl;
}