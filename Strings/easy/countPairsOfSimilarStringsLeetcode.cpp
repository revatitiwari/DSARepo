class Solution {
public:
    int similarPairs(vector<string>& words) {
        int count = 0;
        for(int i=0;i<words.size();i++){
            string s = words[i];
            set<char> st;
            for(int j=0;j<s.size();j++){
                st.insert(s[j]);
            }
            set<char> temp;
            for(int j=i+1;j<words.size();j++){
                string t = words[j];
                
                for(auto it : t){
                    temp.insert(it);
                }
                //cout<<st.size()<<" "<<temp.size()<<endl;
                if(st==temp){
                    count++;
                }
                temp.clear();
            }
        }
        return count;
    }
};