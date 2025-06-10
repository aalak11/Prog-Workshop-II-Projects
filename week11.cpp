#include <iostream>
#include <string>

//example program of how to solve a numerical search of an array using a recursive method
bool search(int arr[], int size, int target){
	if (size == 0){
		return 0;
	}
	
	if (arr[size-1] == target){
		return true;
	}
	
	//recursive case
	return search(arr, size, target);
}

int main(){
	int arr[] = {1,2,3,4};
	
	
	return 0;
}