//Best Case - Array is already sorted O(N)
//Average Case - O(N*N)
//Worst Case - Reverse Sorted O(N*N)
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define mod 1000000007

void insertionsort(vector<int> &v){
    
    int n = v.size();
    
    for(int i = 1; i < n; i++){
        int j = i - 1;
        int ele = v[i];
        while(j >= 0 && v[j] > ele){
            v[j + 1] = v[j];
            j--;
        }
        j++;
        v[j] = ele; 
    }
    
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main() {
    
    vector<int> v = {10,9,8,7,6,5,4,3,2,1};
   
    insertionsort(v);
    return 0;
}
