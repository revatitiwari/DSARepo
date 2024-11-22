class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string> v;string t;
        for(auto it : sentence){
            if((int)it!=32){
                t+=it;
            }else{
                v.push_back(t);
                t="";
            }
            //cout<<it<<endl;
        }
        v.push_back(t);
        for(auto it : v){
            cout<<it<<endl;
        }
        
        
        for(int i=1;i<sentence.size()-1;i++){
              if(sentence[i]==' '){
                   if(sentence[i-1]!=sentence[i+1]){
                       return false;
                   }
              }
        }
        
        return sentence[0]==sentence[sentence.size()-1];
    }
};
