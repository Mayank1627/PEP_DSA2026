#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {

        reverse(s.begin(),s.end());
        string ans = "" ;


        for(int i = 0;i<s.size() ;i++){

            if(s[i] == ' ') continue;

            string str = "";
            while(i < s.size() && s[i] != ' '){
                str += s[i];
                i++;
            }

            reverse(str.begin(),str.end());
            ans = ans + str + " ";
        }

        ans.pop_back();
        return ans; 
    }
};

int main(){

    Solution sol;
    cout<<sol.reverseWords("the sky is blue");


}