class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int lp = 0;
        int rp = n-1;
        int maxWater =0;
            while(lp < rp){
               int width = rp -lp;
               int h = min(height[rp],height[lp]);
               int currWater = width * h;

               maxWater = max(currWater , maxWater);
               height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxWater;
    }
};