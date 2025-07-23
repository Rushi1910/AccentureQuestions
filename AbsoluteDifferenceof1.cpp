class Solution {
  public:
        bool checknum(int num){
            
            string str=to_string(num);
            for(int i=0;i<str.length()-1;i++){
                if(abs((str[i]-'0') -(str[i+1]-'0') )!=1){
                    return false;
                }
            }
            return true;
        }
    vector<int> getDigitDiff1AndLessK(vector<int>& arr, int k) {
        // code here
        
        vector<int> vec;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]<k && arr[i]>=10){
                if(checknum(arr[i])){
                   vec.push_back(arr[i]);
                }
            
            }
            
        }
        return vec;
    }
};
