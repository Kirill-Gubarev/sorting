namespace srt {
	template<typename T>
	void bubbleSort(T* arr, int size) {
		bool sorted = false;
		while (!sorted) {
			sorted = true;
			for (int a = 0; a < size - 1; ++a) {
				int b = a + 1;
				if (arr[a] > arr[b])
				{
					std::swap(arr[a], arr[b]);
					sorted = false;
				}
			}
		}
	}
	template<typename T>
	void insertionSort(T* arr, int size) {
		for (int a = 1; a < size - 1; ++a) {
			T temp = arr[a];
			int b = a - 1;
			for (; b >= 0 && temp < arr[b]; --b) {
				arr[b + 1] = arr[b];
			}
			arr[b + 1] = temp;
		}
	}
	template<typename T>
	void quickSort(T* arr, int size) {
		quickSort(arr, 0, size - 1);
	}
	template<typename T>
	void quickSort(T* arr, int left,int right) {
		if (left >= right)return;
		T pivot = arr[right];
		int a = left - 1;
		for (int b = left; b < right; b++) {
			if (arr[b] < pivot) {
				a++;
				std::swap(arr[a], arr[b]);
			}
		}
		std::swap(arr[a + 1], arr[right]);
		int pi = a + 1;
		quickSort(arr, left, pi - 1);
		quickSort(arr, pi + 1, right);
	}
}