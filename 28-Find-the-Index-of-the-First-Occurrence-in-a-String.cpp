class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.size();
        int h = haystack.size();


        for (int i = 0 ;i<h;i++) {
            if(haystack[i]==needle[0]) {
                if(haystack.substr(i,n)==needle) {
                    return i;
                }
            }
        }
        return -1;

        
    }
};