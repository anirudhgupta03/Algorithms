//Best Case - O(NlogN)
//Average Case - O(NlogN)
//Worst Case - O(NlogN)
// The time complexity of Merge Sort is  O(NlogN) in all 3 cases (worst, average and best) 
// as merge sort always divides the array into two halves and takes linear time to merge two halves.
//SC - O(N)
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define mod 1000000007

void merge(int l, int mid, int r, vector<int> &v){
    
    int llen = mid - l + 1;
    int rlen = r - mid;
    
    vector<int> left(llen), right(rlen);
    
    for(int i = l; i <= mid; i++){
        left[i - l] = v[i];
    }
    for(int i = mid + 1; i <= r; i++){
        right[i - mid - 1] = v[i];
    }
    
    int ptr1 = 0, ptr2 = 0, ptr3 = l;
    
    while(ptr1 < llen && ptr2 < rlen){
        if(left[ptr1] < right[ptr2]){
            v[ptr3] = left[ptr1];
            ptr1++;
            ptr3++;
        }
        else{
            v[ptr3] = right[ptr2];
            ptr2++;
            ptr3++;
        }
    }
    while(ptr1 < llen){
        v[ptr3] = left[ptr1];
        ptr1++;
        ptr3++;
    }
    while(ptr2 < rlen){
        v[ptr3] = right[ptr2];
        ptr2++;
        ptr3++;
    }
}
void mergesort(int l, int r, vector<int> &v){
    
    if(l >= r){
        return;
    }
    
    int mid = (l + r)/2;
    mergesort(l, mid, v);
    mergesort(mid + 1, r, v);
    merge(l, mid, r, v);
}
int main() {
    
    vector<int> v = {10,9,8,7,6,5,4,3,2,1};
    mergesort(0, v.size() - 1, v);
    
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
	  return 0;
}
