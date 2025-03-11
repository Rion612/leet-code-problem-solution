/*1071. Greatest Common Divisor of Strings*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        if (!((str1 + str2) == (str2 + str1)))
        {
            return "";
        }
        int l1 = str1.length();
        int l2 = str2.length();

        int gcd = gcdOfTwoNumbers(l1, l2);

        return str1.substr(0, gcd);
    }

    int gcdOfTwoNumbers(int a, int b)
    {
        int temp;

        while ((a % b) > 0)
        {
            temp = a % b;
            a = b;
            b = temp;
        }

        return b;
    }
};

int main()
{
    Solution s;
    string result = s.gcdOfStrings("ABCABC", "ABC");
    cout << result << endl;
}