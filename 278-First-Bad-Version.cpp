// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 0;
        int r = n-1;
        int m = l+(r-l)/2;
        while (l<=r) {
            if (isBadVersion(m)) r = m-1;
            else l = m+1;
            m = l + (r-l)/2;
         
        }
        return m;
        
        
    }
};