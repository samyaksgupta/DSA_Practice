class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for (int i = 0 ; i < stones.size() ; i++) {
            q.push(stones[i]);

        }
        while (q.size() > 1) {
            int first = q.top(); q.pop();
            int second = q.top(); q.pop();
            

            if (first != second ) {
                q.push(first - second);
            }


        }
        return q.empty() ? 0 : q.top();

    }
};