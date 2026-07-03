class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int row = accounts.size(), col = accounts[0].size(), sum=0, sum1=0, max_number=0;
       for(int i = 0; i < row; i++) {

            sum = 0;                     // Reset sum

            for(int j = 0; j < col; j++) {
                sum += accounts[i][j];   // Correct indexing
            }

            max_number = max(sum, sum1);
            sum1 = max_number;
        }

        return max_number;
    }
};
