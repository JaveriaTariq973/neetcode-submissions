class Solution {
public:
    string encode(vector<string>& strs) {
        string enc;
        for(string x:strs){
            enc+=to_string(x.length());
            enc+='#';
            enc+=x;
        }
        return enc;
    }
    vector<string> decode(string s) {
        vector<string> strs;
        int l=0;
        int i=0;
        while(i<s.length()){
            int l=0;
            while(s[i]!='#'){
                l=l*10+(s[i]-'0');
                i++;
            }
            i++;
            string temp="";
            for(int j=0;j<l;j++){
                temp+=s[i];
                i++;
            }
            strs.push_back(temp);
        }
        return strs;
    }

};