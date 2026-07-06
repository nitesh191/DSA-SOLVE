class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mp;
        for (int num : arr) {
            mp[num]++;
        }
        int ans = -1;
        for (int it : arr) {
            if (mp[it] == it)
            ans = max(ans, it);
        }
        return ans;
    }
};
