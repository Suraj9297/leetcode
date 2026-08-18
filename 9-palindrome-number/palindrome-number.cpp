class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0){
            return false;
        }
         int rem=0;
         int n=x;
         long long int rev=0;
         while(x>0){
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
         }
         if(rev==n){
            return true;
         }
            return false;
        
    }
};