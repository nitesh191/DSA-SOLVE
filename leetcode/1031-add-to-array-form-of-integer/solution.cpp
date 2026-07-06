class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i = num.size()-1;
        vector<int> arr;
        while(i >= 0 || k > 0){
            if(i>=0)
            k += num[i];
            arr.push_back(k%10);
            k /= 10;
            i--;
        }
        reverse(arr.begin(),arr.end());
        return arr;
    }
};
