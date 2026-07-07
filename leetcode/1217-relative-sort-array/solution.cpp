class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       vector<int> freq(1001,0);
        vector<int> ans;
        for(int num : arr1){
            freq[num]++;
        }

        for(int x : arr2){
            while(freq[x] > 0){
                ans.push_back(x);
                freq[x]--;
            }
        }
        for(int x = 0; x < 1001; x++){
            while(freq[x] > 0){
                ans.push_back(x);
                freq[x]--;
            }
        }
        return ans;
    }
};
