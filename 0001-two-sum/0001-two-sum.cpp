class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();

        int maxWater = 0;
        int low = 0;
        int high = n-1;

        while(low < high){
            int width = high-low;
            int minHeight = min(height[low], height[high]);
            maxWater = max(maxWater , width*minHeight);

            if(height[low] < height[high])
                low++;
                else
                high--;
        }
        return maxWater;
    }
};