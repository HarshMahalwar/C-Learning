/*
 * @lc app=leetcode id=658 lang=cpp
 *
 * [658] Find K Closest Elements
 */

// @lc code=start
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        for (int i = 0; i < arr.size(); i++)
        {
            q.push({abs(arr[i] - x), arr[i]});
        }
        arr.clear();
        for(int i = 0; i < k; i++)
        {
            arr.push_back(q.top().second);
            q.pop();
        }
        sort(arr.begin(), arr.end());
        return arr;
    }
};
// @lc code=end

