#include <bits/stdc++.h>
using namespace std;

int min_index(int arr[],int n,int ind){
    
    int ele = arr[ind], index = ind;
    
    for(int i = ind +1 ;i < n;i++){
        if(arr[i] < ele){
            ele = arr[i];
            index = i;
        }
    }
    return index;
}
void selection_sort(int arr[], int n){
    
    int flag;
    
    for(int i = 0; i < n-1; i++){
        
        swap(arr[i],arr[min_index(arr,n,i)]);
    }
}
int main() {
	
	int n;
	cin >> n;
	
	int arr[n];
	
	for(int i = 0; i < n; i++){
	    cin >> arr[i];
	}
	
	selection_sort(arr,n);
	
	for(auto x : arr){
	    cout << x << " ";
	}
	cout << endl;
	return 0;
}
