class Solution {
  public:
    void solve(vector<int> &arr, int n){
        // Base case
        if (n == 1)
            return;
    
        bool flag = false;
        for (int i=0; i<n-1; i++){
            if (arr[i] > arr[i+1]){
                flag = true;
                swap(arr[i], arr[i+1]);
            }
        }
        if(flag == false){
            return;
        }
        solve(arr, n-1);
    }
    
    void bubbleSort(vector<int>& arr) {
        // code here
        solve(arr, arr.size());
    }
};
