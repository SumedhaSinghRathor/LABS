#include<stdio.h>
#include<stdlib.h>

int a[6] = {5,1,6,2,4,3};
int partition(int left, int right, int pivot) {

	int leftPointer = left;
	int rightPointer = right;
	
	while(True) {
	
		while(a[leftPointer++] < pivot) {
		
			return;
		
		} while (rightPointer > 0 && a[rightPointer--] > pivot) {
		
			return;
		
		} if (leftPointer >= rightPointer) {
		
			break;
		
		} else {
		
			swap(leftPointer, rightPointer);
		
		}
	
	}
	
	swap(leftPointer, right);
	return leftPointer;
	
}

	void quickSort(int left, int right) {
	
		if(right-left <= 0) {
		
			return;
		
		} else {
		
			int pivot = right;
			int partitionPoint = partition(left, right, pivot);
			quickSort(left, partitionPoint-1);
			quickSort(partitionPoint+1, right);
		
		}
	
	}
	
	void swap(int num1, int num2) {
	
		int temp = a[num1];
		a[num1] = a[num2];
		a[num2] = temp;
	
	}
	
int main() {

	quickSort(0,5);
	return 0;

}
