#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool canPlaceFlowers(vector<int>& flowerbed, int n) {
            int count = 0;
            int s = flowerbed.size();
            for (int i = 0; i < s; i++) {
                if(flowerbed[i] == 1) {
                    continue;
                }
                else if(flowerbed[i] == 0) {
                    if((i == 0 || flowerbed[i-1] == 0) && (i == (s- 1) || flowerbed[i+1] == 0)) {
                        count += 1;
                        i += 1;
                    }
                }
            }
            if (count >= n) {
                return true;
            }
            return false;
        }
    };
int main()
{
    Solution s;
    vector<int> flowerbed = {0, 0, 1, 0, 1};
    int n = 1;
    bool result = s.canPlaceFlowers(flowerbed, n);
    cout << result << endl;
}