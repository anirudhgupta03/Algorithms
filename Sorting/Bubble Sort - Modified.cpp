//Time Complexity
//Worst Case - O(n^2)
//Average Case - O(n^2)
//Best Case (When array is sorted) - O(n)

#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    
    int flag;
    
    for(int i = 0; i < n-1; i++){
         flag = 1;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j]>arr[j+1]){
                flag = 0;
                swap(arr[j],arr[j+1]);
            }
             if(flag == 1){
                 break;
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
