/*
 * @lc app=leetcode id=500 lang=cpp
 *
 * [500] Keyboard Row
 */

// @lc code=start
class Solution
{
public:
    bool lcs(string x, string y)
    {
        int n = x.length(), m = y.length();
        int a[n + 1][m + 1];
        for (int i = 0; i < n + 1; i++)
        {
            for (int j = 0; j < m + 1; j++)
            {
                if(i == 0 || j == 0)
                    a[i][j] = 0;
            }
            
        }
        
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                if(x[i - 1] == y[j - 1])
                    a[i][j] = a[i - 1][j - 1] + 1;
                else 
                    a[i][j] = max(a[i - 1][j], a[i][j - 1]);
            }
            
        }
        return a[n][m] == m;
    }

    vector<string> findWords(vector<string> &words)
    {
        vector<string> a;
        string r1 = "qwertyuiop", r2 = "asdfghjkl", r3 = "zxcvbnm";
        sort(r1.begin(), r1.end());
        sort(r2.begin(), r2.end());
        sort(r3.begin(), r3.end());

        for(int i = 0; i < words.size(); i++)
        {
            set<char> s;
            for(int j = 0; words[i].size(); j++)
                s.insert(words[i][j]);
            string s1;
            s1.clear();
            for(auto it: s)
                s1.push_back(it);
            if(lcs(r1, s1) || lcs(r2, s1) || lcs(r3, s1))
                a.push_back(s1);
        }
        return a;
    }
};
// @lc code=end
