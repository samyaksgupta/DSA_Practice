class Solution {
public:

    bool ispal(string s, int l , int r) {
        while (l<r) {
            if(s.at(l) == s.at(r)){
                l++;
                r--;
                
            } else return false;
        }
        return true;

    }
    bool validPalindrome(string s) {
        int l = 0; 
        int r = s.size()-1;
        while(l<r){
            if (s.at(l) == s.at(r)){
                l++;
                r--;
            }else{
                return ispal(s, l+1, r) || ispal(s, l, r-1);

            }
        }
        return true;
        
    }
};