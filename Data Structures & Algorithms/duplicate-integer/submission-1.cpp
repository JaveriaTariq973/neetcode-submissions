class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hashset; 
        bool ishave=false;
        for(int i=0;i<nums.size();i++){
            if(hashset.count(nums[i]))ishave=true;
            else hashset.insert(nums[i]);
            if(ishave==true)break;
        }
        return ishave;
    }
};