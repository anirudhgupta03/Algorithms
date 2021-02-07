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
