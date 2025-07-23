#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        if(s1.length()!=s2.length()){
            return false;
        }
        
        // sort(s1.begin(),s1.end());
        // sort(s2.begin(),s2.end());
        // int j=0;
        // for(int i=0;i<s1.length();i++){
        //     if(s1[i]!=s2[j]){
        //         return false;
        //     }
        //     j++;
        // }
        
        unordered_map<char,int> mp1,mp2;
        for(char ch:s1){
            mp1[ch]++;
        }
        
        for(char ch:s2){
            mp2[ch]++;
        }
        
        if(mp1 !=  mp2){
            return false;
        }
        
        
        return true;
    }
};
