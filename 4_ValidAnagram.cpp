#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return (s == t);
    }
};

int main()
{
    Solution s;
    bool res = s.isAnagram("anagram", "naharam");
    cout << res << endl;
    return 0;
}