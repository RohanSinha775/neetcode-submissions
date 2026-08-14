class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1;
        int MaxWater = 0;

        while(left < right){
            int h= min(heights[left], heights[right]);
            int w = right - left;

            MaxWater = max(MaxWater, h * w);
            if(heights[left] < heights[right]) {
                left++;
            }else{
                right--;
            }

        }
        return MaxWater;
        
    }
};
