#include <iostream>

using namespace std;

int main (){
  int arr[] = {21, 12, 5, 3, 8};
	int temp = 0;
	
	for (int i=0; i<5; i++){
		for (int j=0; j<4; j++){
			if (arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

  return 0;
}
