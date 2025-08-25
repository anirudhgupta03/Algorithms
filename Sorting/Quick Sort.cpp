// Method - 1
class Solution {
  public:
    void quickSort(vector<int>& nums, int lo, int hi) {
        // code here
        if(lo >= hi){
            return;
        }
        int ind = partition(nums, lo, hi);
        quickSort(nums, lo, ind - 2);
        quickSort(nums, ind, hi);
    }

  public:
    int partition(vector<int>& nums, int lo, int hi) {
        
        int pivotElement = nums[hi];
        int ptr1 = lo, ptr2 = lo;
        while(ptr2 <= hi){
            if(nums[ptr2] <= pivotElement){
                swap(nums[ptr1], nums[ptr2]);
                ptr1++;
            }
            ptr2++;
        }
        return ptr1;
    }
};

//Method - 2
//Ref: https://www.youtube.com/watch?v=WIrA4YexLRQ&feature=youtu.be
class Solution {
  public:
    void quickSort(vector<int>& nums, int lo, int hi) {
        // code here
        if(lo >= hi || lo < 0 || hi >= nums.size()){
            return;
        }
        int ind = partition(nums, lo, hi);
        quickSort(nums, lo, ind - 1);
        quickSort(nums, ind + 1, hi);
    }

  public:
    int partition(vector<int>& nums, int lo, int hi) {
        int pivot = nums[lo];
          
        int i = lo, j = hi;
          
          while(i < j){
              while(nums[i] <= pivot && i <= hi - 1){
                  i++;
              }
              while(nums[j] > pivot && j >= lo + 1){
                  j--;
              }
              if(i < j){
                  swap(nums[i], nums[j]);
              }
          }
          swap(nums[lo], nums[j]);
          return j;
    }
};
