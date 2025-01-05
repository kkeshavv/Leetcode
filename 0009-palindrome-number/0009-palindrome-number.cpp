class Solution {
public:
    bool isPalindrome(int n) {
    
        int lastdigit;
        int original=n;
        long reversenum=0;
        while(n>0){
            lastdigit=n%10;
            n=n/10;
            reversenum=(reversenum*10)+lastdigit;
        }
        
        if(reversenum == original) return true;
        else return false;
    }
}; 
    