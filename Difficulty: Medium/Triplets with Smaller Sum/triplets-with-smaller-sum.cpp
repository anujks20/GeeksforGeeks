class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        int count = 0;
        
        for (int  i = 0; i < arr.size() - 2; i++){
            
            int l = i + 1;
            int r = arr.size() - 1;
            
            while (l < r){
                
                int curr = arr[i] + arr[l] + arr[r];
                if (curr < sum){
                    count += r - l;
                    
                    l++;
                }
                
                else{
                    r--;
                }
            }
        }
        
        return count;
    }
};