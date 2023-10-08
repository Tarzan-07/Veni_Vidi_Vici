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
            res += word2.substr(i, word2.length()-(i));
        }
        else
        {
            res += word1.substr(i, word1.length()-(i));
        }
        return res;
    }
};

int main()
{
    Solution s;
    string results = s.mergeAlternately("abcd", "pq");
    cout << results << endl;
    return 0;
}