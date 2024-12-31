// bubble sort algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
	int a[] = { 1,43,56,89,567,89,65,34,12,21 };
	int length = 10;
	for (int i = 0;i < length;i++) {
		for (int j = 0;j < length - 1;j++) {
			if (a[j] > a[j+1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (int i = 0;i < length;i++) {
		std::cout << a[i] << "\n";
	}
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
