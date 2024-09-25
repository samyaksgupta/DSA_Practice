class Solution {
private:
    void dfs(vector<vector<int>>& image, int i, int j, int color, int ocolor) {
        int n = image.size();
        int m = image[0].size();
        if (i < 0 || i >= n || j < 0 || j >= m || image[i][j] != ocolor) {
            return;
        }
        image[i][j] = color;
        dfs(image, i + 1, j, color, ocolor);
        dfs(image, i - 1, j, color, ocolor);
        dfs(image, i, j + 1, color, ocolor);
        dfs(image, i, j - 1, color, ocolor);
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int ocolor = image[sr][sc]; 
        if (ocolor != color) {
            dfs(image, sr, sc, color, ocolor);
        }
        return image;
    }
};
