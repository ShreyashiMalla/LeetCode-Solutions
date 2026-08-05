class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int k=2;// as 0th index number is unique.
        if(n<=2) return n;
        for(int i=2;i<nums.size();i++){
            if(nums[i]!=nums[k-2]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
        
    }
};