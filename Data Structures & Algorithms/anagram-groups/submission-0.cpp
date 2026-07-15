class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if( strs.empty())
        return {};

        unordered_map<string,vector<string>> group;
        for (string str:strs){
            string frequencystring=getfrequencystring(str);

            if(group.count(frequencystring)){
                group[frequencystring].push_back(str);
            }
            else{
                group[frequencystring];
                group[frequencystring].push_back(str);
            }
        }
        vector<vector<string>> ans;
        for(auto x:group){
            ans.push_back(x.second);
        }
        return ans;
    }
    string getfrequencystring(string str){
        if( str.empty())
        return "";
        int freq[26]={0};
        for(char c:str){
            freq[c-'a']++;
        }
        string freqstr="";
        char c='a';
        for(int i:freq){
            freqstr+=c;
            freqstr+=to_string(i);
            c++;
        }
return freqstr;
    }
};
