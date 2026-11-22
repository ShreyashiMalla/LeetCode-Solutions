class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int left=0;// Position where the next non-zero number should go
        for(int right=0;right<nums.size();right++){
            // Check if the current number is not zero
            if(nums[right]!=0){
                // Store the current number temporarily
                int temp=nums[right];
                // Put the left no. at right position
                nums[right]=nums[left];
                // Put the temp number at the left position
                nums[left]=temp;
                left++;
            }
        }        
    }
};