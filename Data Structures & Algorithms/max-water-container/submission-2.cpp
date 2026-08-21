class Solution {
public:
    int maxArea(vector<int>& heights) {
       int maxContainer = INT_MIN;

       int l = 0, r = heights.size() - 1;

       while(l < r){
        int h = min(heights[l], heights[r]);
        int w = r-l;
        int container = h * w;

        maxContainer = max(container, maxContainer);

        if(heights[l] < heights[r]) l++;
        else if(heights[l] > heights[r]) r--;
        else{
            l++; r--;
        }
       }
       return maxContainer; 
    }
};
