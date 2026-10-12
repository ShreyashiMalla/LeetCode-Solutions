
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count=0;
        for(int i=0;i<nums.size();i++){
             // If count becomes 0, choose a new candidate
            if(count==0){
                candidate=nums[i];
            }
            // Same number increase count; different number decrease count
            if(nums[i]==candidate){
                count++;
            }
            else{
                count--;
            }
        }
        return candidate;        
    }
};
