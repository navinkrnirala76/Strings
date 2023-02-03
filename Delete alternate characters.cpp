class Solution {
  public:
    string delAlternate(string S) {
        // code here
        string str;
        for(int i=0;i<=S.size();i+=2){
            str += S[i];
        }
        return str;
    }
};
