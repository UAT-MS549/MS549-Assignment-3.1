#include <iostream>
#include <string>
#include <chrono>
#include <vector>
#include "functions.h"

/*
* Douglas Little
* MS549
* Estimated time:Should be less than an hour, since most of it bulds on previous work.
* Actual time:
*/

using namespace std;

int main()
{
	auto startHigh = std::chrono::high_resolution_clock::now();
	auto endHigh = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> diff = endHigh - startHigh;

	int bubbleArray1[100];
	for (int i = 0; i < 100; i++)
	{
		bubbleArray1[i] = rand() % 100;
	}

	int n1A = sizeof(bubbleArray1) / sizeof(bubbleArray1[0]);
	startHigh = std::chrono::high_resolution_clock::now();
	sortBubble(bubbleArray1, n1A);
	endHigh = std::chrono::high_resolution_clock::now();
	diff = endHigh - startHigh;
	cout << "Bubble Sort sorted 100 element in " << diff.count() << " seconds" << endl;

	int mergeArray1[100];
	for (int i = 0; i < 100; i++)
	{
		mergeArray1[i] = rand() % 100;
	}

	int n1B = sizeof(mergeArray1) / sizeof(mergeArray1[0]);
	startHigh = std::chrono::high_resolution_clock::now();
	mergeSort(mergeArray1, 0, n1B);
	endHigh = std::chrono::high_resolution_clock::now();
	diff = endHigh - startHigh;
	cout << "Merge Sort sorted 100 element in " << diff.count() << " seconds" << endl;

	int bubbleArray2[1000];
	for (int i = 0; i < 1000; i++)
	{
		bubbleArray2[i] = rand() % 1000;
	}

	int n2A = sizeof(bubbleArray1) / sizeof(bubbleArray2[0]);
	startHigh = std::chrono::high_resolution_clock::now();
	sortBubble(bubbleArray2, n2A);
	endHigh = std::chrono::high_resolution_clock::now();
	diff = endHigh - startHigh;
	cout << "Bubble Sort sorted 1000 element in " << diff.count() << " seconds" << endl;

	int mergeArray2[1000];
	for (int i = 0; i < 1000; i++)
	{
		mergeArray2[i] = rand() % 1000;
	}

	int n2B = sizeof(mergeArray2) / sizeof(mergeArray2[0]);
	startHigh = std::chrono::high_resolution_clock::now();
	mergeSort(mergeArray2, 0, n2B);
	endHigh = std::chrono::high_resolution_clock::now();
	diff = endHigh - startHigh;
	cout << "Merge Sort sorted 1000 element in " << diff.count() << " seconds" << endl;

	int bubbleArray3[10000];
	for (int i = 0; i < 10000; i++)
	{
		bubbleArray3[i] = rand() % 10000;
	}

	int n3A = sizeof(bubbleArray3) / sizeof(bubbleArray3[0]);
	startHigh = std::chrono::high_resolution_clock::now();
	sortBubble(bubbleArray3, n3A);
	endHigh = std::chrono::high_resolution_clock::now();
	diff = endHigh - startHigh;
	cout << "Bubble Sort sorted 10000 element in " << diff.count() << " seconds" << endl;

	int mergeArray3[10000];
	for (int i = 0; i < 10000; i++)
	{
		mergeArray3[i] = rand() % 10000;
	}

	int n3B = sizeof(mergeArray3) / sizeof(mergeArray3[0]);
	startHigh = std::chrono::high_resolution_clock::now();
	mergeSort(mergeArray3, 0, n3B);
	endHigh = std::chrono::high_resolution_clock::now();
	diff = endHigh - startHigh;
	cout << "Merge Sort sorted 10000 element in " << diff.count() << " seconds" << endl;

	int bubbleArray4[100000];
	for (int i = 0; i < 100000; i++)
	{
		bubbleArray4[i] = rand() % 100000;
	}

	int n4A = sizeof(bubbleArray4) / sizeof(bubbleArray4[0]);
	startHigh = std::chrono::high_resolution_clock::now();
	sortBubble(bubbleArray4, n4A);
	endHigh = std::chrono::high_resolution_clock::now();
	diff = endHigh - startHigh;
	cout << "Bubble Sort sorted 100000 element in " << diff.count() << " seconds" << endl;

	int mergeArray4[100000];
	for (int i = 0; i < 100000; i++)
	{
		mergeArray4[i] = rand() % 100000;
	}

	int n4B = sizeof(mergeArray4) / sizeof(mergeArray4[0]);
	startHigh = std::chrono::high_resolution_clock::now();
	mergeSort(mergeArray4, 0, n4B);
	endHigh = std::chrono::high_resolution_clock::now();
	diff = endHigh - startHigh;
	cout << "Merge Sort sorted 100000 element in " << diff.count() << " seconds" << endl;

	return 0;
}