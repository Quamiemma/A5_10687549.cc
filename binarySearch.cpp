#include <iostream>

using namespace std;


int binarySearch(const int list[], int listLength, int searchItem);
int main (){
  int array[] = {21, 12, 5, 3, 8};
	int temp = 0;
	//loop to sort the array in ascending order
	for (int i=0; i<5; i++){
		for (int j=0; j<4; j++){
			if (array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	//loop to print the sorted array
	for (int j = 0; j<5; j++){
		cout << array[j] << " ";
		
	}
	cout << endl;

  return 0;
}

int binarySearch(const int list[], int listLength, int searchItem) { 
	int first = 0; int last = listLength - 1; 
	int mid;
	bool found = false;
	
	while (first <= last && !found) { 
		mid = (first + last) / 2;
		if (list[mid] == searchItem) 
			found = true; 
		else if (list[mid] > searchItem) 
			last = mid - 1; 
		else 
			first = mid + 1;
	}
	if (found) 
		return mid; 
	else {
		return -1;
	} 
}
