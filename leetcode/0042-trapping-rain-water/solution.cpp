class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        if (n == 0) return 0;

        int leftmax = 0, rightmax = 0;
        int water = 0;

        // Find highest bar
        int heightmax = height[0];
        int index = 0;

        for (int i = 1; i < n; i++) {
            if (height[i] > heightmax) {
                heightmax = height[i];
                index = i;
            }
        }

        // Left side
        for (int i = 0; i < index; i++) {
            if (height[i] < leftmax)
                water += leftmax - height[i];
            else
                leftmax = height[i];
        }

        // Right side
        for (int i = n - 1; i > index; i--) {
            if (height[i] < rightmax)
                water += rightmax - height[i];
            else
                rightmax = height[i];
        }

        return water;
    }
};
