#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int mini = min(word1.length(), word2.length());
        int i;
        string res;
        for(i = 0; i <= mini-1; i++)
        {
            res += word1[i];
            res += word2[i];
        }
        if(word1.length() == word2.length())
        {
            return res;
        }
        if(mini == word1.length())
        {
            res += word2.substr(i+1, word2.length()-(i+1));
        }
        else
        {
            res += word1.substr(i+1, word2.length()-(i+1));
        }
        return res;
    }
};

int main()
{
    Solution s;
    string results = s.mergeAlternately("abc", "pqr");
    cout << results << endl;
    return 0;
}