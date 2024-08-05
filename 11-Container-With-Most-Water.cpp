class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0 ,right = height.size()-1;
        int Maxarea = 0;
        while (left < right) {
            int area = (right - left )*min(height[left], height[right]);
            Maxarea = max(Maxarea, area);
            if (height[left] < height[right]) {
                left += 1;

            }else {
                right -= 1;

            }

        }
        return Maxarea;
       
    }
    
};