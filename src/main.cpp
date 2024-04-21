#include <iostream>
#include "sorting.hpp"
int main(void) {
	int* arr = new int[6] { 5, 2, 1, 6, 3, 7 };
	srt::quickSort(arr, 6);
	for (size_t a = 0; a < 6; ++a) {
		std::cout << arr[a];
	}
	std::cout << std::endl;
	system("pause");
	return 0;
}