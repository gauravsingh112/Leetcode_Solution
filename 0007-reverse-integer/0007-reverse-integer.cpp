class Solution {
public:
    int reverse(int x) {
        int lastdigit;
        int reverseNum=0;
        while(x!=0){
            lastdigit=x%10;

            x=x/10;
            if(reverseNum>INT_MAX/10 || reverseNum<INT_MIN/10){
                return 0;
            }
            reverseNum=(reverseNum*10)+lastdigit;
            
        }return reverseNum;
    }
        
    
};