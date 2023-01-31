#include <stdio.h>
#include <math.h>


int array[3];
int size = 3;
int temp;

void main() {
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 20;
	//	printf("%d,", array[i]);
	}



	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - i -1 ; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	
	//for (int j = 0; j < size; j++) {
	//	printf("%d,", array[j]);
	//}
	
}