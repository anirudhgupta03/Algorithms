class Solution {
  public:
    void solve(vector<int> &arr, int i, int n){
        
        if(i == n){
            return;
        }
        
        int j = i - 1;
        int ele = arr[i];
            
        while(j >= 0 && arr[j] > ele){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = ele;
        solve(arr, i + 1, n);
    }
    void insertionSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        solve(arr, 1, n);
    }
};
