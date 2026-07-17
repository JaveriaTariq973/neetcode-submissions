class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> leftprod;
        vector<int> rightprod(nums.size());
        vector<int> res;
        leftprod.push_back(1);
        for(int i=1;i<nums.size();i++){
            leftprod.push_back(nums[i-1]*leftprod[i-1]);
        }
        rightprod[nums.size()-1]=1;
        for (int i = nums.size()-2; i >= 0; i--) {
    rightprod[i] = nums[i+1] * rightprod[i+1];
}
        for(int i=0;i<nums.size();i++){
            res.push_back(leftprod[i]*rightprod[i]);
        }
        return res;
    }
    
};
