class Solution {
public:
    int maxArea(vector<int>& height) {
        int start,end,maxwater,area,width,hght;
        start = 0,end = height.size()-1,maxwater=0;

        while(start<end){
            width = end - start;
            hght = min(height[start],height[end]);
            area = width * hght;
            maxwater = max(maxwater,area);

            if(height[start]<height[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return maxwater;
    }
};