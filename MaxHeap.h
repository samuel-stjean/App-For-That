#pragma once
#include <iostream>
#include "App.h"

using namespace std;

class MaxHeap
{
private:
	App* arr;
	int capacity;
	unsigned int size;

	void swap(App* a, App* b) {
		App c = *a;
		*a = *b;
		*b = c;
	}

	void Heapify(unsigned int i) {
		unsigned int left = (2 * i) + 1;
		unsigned int right = (2 * i) + 2;
		unsigned int largest = i;

		if (left < size && arr[left].GetRank() >= arr[i].GetRank()) {
			largest = left;
		}
		if (left < size && arr[left].GetRank() >= arr[i].GetRank()) {
			largest = left;
		}
		if (largest != i) {
			swap(&arr[i], &arr[largest]);
			Heapify(largest);
		}
	}
public:
	MaxHeap(unsigned int c) {
		size = 0;
		capacity = c;
		arr = new App[c];
	}

	void Insert(App a) {
		size++;
		unsigned int temp = size - 1;
		arr[temp] = a;

		while (temp != 0 && arr[((temp)-1) / 2].GetRank() <= arr[temp].GetRank()) {
			swap(&arr[temp], &arr[((temp - 1) / 2)]);
			temp = (temp - 1) / 2;
		}
	}

	App Extract() {
		App a = arr[0];
		arr[0] = arr[size - 1];
		size--;
		Heapify(0);

		return a;
	}

	unsigned int GetSize() {
		return size;
	}
};

