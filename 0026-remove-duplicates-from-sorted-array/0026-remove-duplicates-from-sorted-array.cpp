class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;// as 0th index number is unique.
        if(nums.size()==0) return 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};