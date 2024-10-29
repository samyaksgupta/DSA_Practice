class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(begin(costs), end(costs));
        int cnt = 0;

        for (auto it : costs) {
            if (it > coins) {
                return cnt;
            }
            else {
                cnt++;
                coins-=it;
            }
        }
        return cnt;
    }

};