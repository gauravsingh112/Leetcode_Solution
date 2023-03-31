class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long dup=x;
        long long revNum=0;
        while(x>0){
            long long ld=x%10;
            
            
            revNum=(revNum*10)+ld;
            x=x/10;

        }
        if(dup==revNum)return true;
        else return false;
        
    } 

};