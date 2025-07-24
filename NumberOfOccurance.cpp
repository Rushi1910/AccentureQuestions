#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countFreq(vector<int>& arr, int k) {
        // code here
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==k){
                cnt++;
            }
        }
        return cnt;
    }
};
