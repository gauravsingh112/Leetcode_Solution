class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low =0, mid, high=nums.size()-1;
        while(low<=high)
        {
           
            int mid=low+high;
            if(nums[mid]==target){
                return mid;
                
                }else if(target>nums[mid]){
                 low =mid+1;
                
                }else{
                    high=mid-1;
            }
        } return -1;       
    }
};