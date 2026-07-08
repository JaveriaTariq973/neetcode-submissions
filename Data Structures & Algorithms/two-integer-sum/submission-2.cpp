class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> to;
        for(int i=0;i<nums.size();i++){
            to[nums[i]]=i;
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int diff=target - nums[i];
            if(to.count(diff) && to[diff]!=i){ ans.push_back(to[diff]);
            ans.push_back(i);
            }
        }
        return ans;

    }
};
