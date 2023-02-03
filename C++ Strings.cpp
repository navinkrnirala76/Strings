string conCat(string s1 , string s2)
{
    // code here.
     cout<<s1+s2;
}


//3.
// User function Template for C++
class Solution {
  public:
    string revStr(string S) {
        // code here
        int n=S.size();
        for(int i=0;i<n/2;i++){
            swap(S[i],S[n-i-1]);
        }
        return S;
    }
};
