#include <iostream>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int i = 0, aval = 0, bval = 0;
        while(i < t.length() || i < s.length())
        {
            if(i < s.length())
            {
                aval += static_cast<int>(s[i]);
            }
            if(i < t.length())
            {
                bval += static_cast<int>(t[i]);
            }
            i++;
        }
        int diff = bval - aval;
        return static_cast<char>(diff);
    }
};

int main()
{
    Solution s;
    char res = s.findTheDifference("", "a");
    cout << res << endl;
    return 0;
}