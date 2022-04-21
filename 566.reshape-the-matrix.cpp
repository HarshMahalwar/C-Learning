/*
 * @lc app=leetcode id=566 lang=cpp
 *
 * [566] Reshape the Matrix
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int l = mat.size(), r1 = mat[0].size();
        vector<vector<int>> a;
        if(r * c != l * r1)
            return mat;
        vector<int> t;
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < r1; j++)
            {
                t.push_back(mat[i][j]);
                if(t.size() == c)
                {
                    a.push_back(t);
                    t.clear();
                }
            }
            
        }
        return a;
    }
};
// @lc code=end

