class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i=0;
        int j=height.size()-1;

        int maxi=INT_MIN;

        while(i<j){
            int hei=min(height[i], height[j]);
            int width = j-i;
            maxi=max(maxi, hei*width);
            if(height[i] < height[j])   i++;
            else    j--;
        }
        return maxi;
    }
};