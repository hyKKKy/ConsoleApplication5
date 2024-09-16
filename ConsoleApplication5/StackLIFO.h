#pragma once
#include <iostream>

class StackLIFO
{
private:
	char* data;
	int size;
public:
	StackLIFO() {
		data = nullptr;
		size = 0;
	}

	~StackLIFO() {
		delete[] data;
	}

	void push(char value) {

		char* new_data = new char[size + 1];
		if (data != nullptr)
		{
			for (size_t i = 0; i < size; i++)
			{
				new_data[i] = data[i];
			}
			delete[] data;
		}
		new_data[size] = value;
		data = new_data;
		size += 1;
	}

	char pop() {
		char tmp = data[size - 1];

		const int new_size = size - 1;

		char* new_data = nullptr;
		if (new_size != 0)
		{
			new_data = new char[new_size];
			for (size_t i = 0; i < new_size; i++)
			{
				new_data[i] = data[i];
			}
		}

		delete[] data;
		data = new_data;

		size -= 1;
		return tmp;

	}

	char top() const {
		if (data == nullptr) {
			return 0;
		}
		return data[size - 1];
	}

	int Size() const {
		return size;
	}

	void clear() {
		delete[] data;
		size = 0;
	}

	bool isEmpty() {
		return data == nullptr;
	}
};