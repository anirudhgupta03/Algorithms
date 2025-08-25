//Time Complexity
//Worst Case - O(n^2)
//Average Case - O(n^2)
//Best Case - O(n^2)

#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    
    int flag;
    
    for(int i = 0; i < n-1; i++){
        
        for(int j = 0; j < n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main() {
	
	int n;
	cin >> n;
	
	int arr[n];
	
	for(int i = 0; i < n; i++){
	    cin >> arr[i];
	}
	
	bubble_sort(arr,n);
	
	for(auto x : arr){
	    cout << x << " ";
	}
	cout << endl;
	return 0;
}

//Slight Optimisation
//Best Case - Array is already sorted O(N)
//Average Case - O(N*N)
//Worst Case - Reverse Sorted O(N*N)
//SC - O(N*N)
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define mod 1000000007

void  bubblesort(vector<int> &v){
    
    int n = v.size();
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = 0; j < n - 1 - i; j++){
            if(v[j] > v[j + 1]){
                flag = true;
                swap(v[j], v[j + 1]);
            }
        }
        if(flag == false) break;
    }
    
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main() {
    
    vector<int> v = {10,9,8,7,6,5,4,3,2,1};
    
    bubblesort(v);
    return 0;
}
};
