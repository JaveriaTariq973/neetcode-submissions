class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int n:nums){
              freq[n]++;
        }
    vector<vector<int>> bucket(nums.size()+1);
    for(auto x:freq){
        bucket[x.second].push_back(x.first);
    }
    vector<int> res;
    
    for(int i=bucket.size()-1;i>=0;i--){
        for(int n:bucket[i]){
            res.push_back(n);
            if(res.size()==k)
             return res;
        }
    }
    return res;
    }
};
