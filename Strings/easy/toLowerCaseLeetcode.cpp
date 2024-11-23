class Solution {
public:
    string toLowerCase(string s) {
       int size = s.length();
        //traversing string.
        for(int i=0;i<size;i++){
            if(isupper(s[i])){
                s[i]+=32;
               }
            }
        return s;
    }
};

class Solution {
public:
    string toLowerCase(string s) {
       int size = s.length();
        //traversing string.
        for(int i=0;i<size;i++){
            if(s[i]<='Z' && s[i]>='A'){
                s[i]+=32;
               }
            }
        return s;
    }
};