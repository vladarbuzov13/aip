Увеличить все отрицательные элементы на 5, а положительные уменьшить на 1


#include <iostream>



int main() {
	setlocale(0, "");
	const int n = 10;
	int arr[n];

	std::cout << "Íà÷àëüíûé ìàññèâ: ";
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10 - 5;
		std::cout << arr[i] << " ";
	}

	std::cout << "\nÈçìåíåííûé ìàññèâ èìååò âèä: ";
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0)
			arr[i] = arr[i] * 5;
		if (arr[i] > 0) 
			arr[i] = arr[i] - 1;
			std::cout << arr[i] << " ";
	}
}
