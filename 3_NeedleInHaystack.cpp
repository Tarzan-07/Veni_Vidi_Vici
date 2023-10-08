#include <iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};

int main()
{
    Solution s;
    int res = s.strStr("sadbutsad", "sad");
    cout << res << endl;
    return 0;
}