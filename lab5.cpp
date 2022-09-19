#include <iostream>

void insertSort(int mas[], int n) {
	int tmp;
	int j;
	int i;
	for (i = 0; i < n; i++) {
		tmp = mas[i];
		for (j = i - 1; j >= 0 && mas[j] > tmp; j--) {
			mas[j + 1] = mas[j];
		}
			mas[j + 1] = tmp;
		
	}
}



int main()
{
	int mas[10];
	int n = 10;
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 10;
		std::cout << mas[i] << " ";
	}

	std::cout << std::endl;

	insertSort(mas, n);

	for (int i = 0; i < n; i++) {
		std::cout << mas[i] << " ";
	}



}

