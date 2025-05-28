#include <iostream>
using namespace std;
int* deepCopy(int* arr, const int& size)
{
	int* returningArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		returningArray[i] = arr[i];
	}
	return returningArray;
}
class Stack
{
private:
	int maxSize;
	int currentSize;
	int* arr;
public:
	Stack() :maxSize(0), currentSize(0), arr(0) {}
	Stack(const int& size) { arr = new int[size], currentSize = 0, maxSize = size; }
	~Stack() { delete [] arr, arr = nullptr; }
	void push(const int& size);
	int pop();
	bool isFull();
	bool isEmpty();
	void display();
};
class Queue
{
private:
	Stack input;
	Stack output;
public:
	Queue() :input(), output() {}
	Queue(const int& size) :input(size), output(size) {}
	Queue(const Queue& q):input(q.input), output(q.output){}
	void enQueue(const int& size);
	int deQueue();
	int peek();
	void display();
	bool isFull();
	bool isEmpty();
};
int main()
{
	cout << "Hello World" << endl;
	Queue q(5);
	q.enQueue(5);
	q.enQueue(10);
	q.enQueue(20);
	q.display();

	return 0;
}
void Stack::push(const int& value)
{
	if (isFull())
	{
		cout << "Stack is full!" << endl;
	}
	else
		arr[currentSize++] = value;
}
int Stack::pop()
{
	if (isEmpty())
	{
		cout << "Stack is empty" << endl;
		return 0;
	}
	else
		return arr[--currentSize];
}
bool Stack::isFull()
{
	if (currentSize == maxSize)
	{
		return true;
	}
	else
		return false;
}
bool Stack::isEmpty()
{
	if (currentSize == 0)
	{
		return true;
	}
	else
		return false;
}
void Stack::display()
{
	if (isEmpty())
	{
		cout << "Stack is empty" << endl;
	}
	else
		cout << "Max Size = " << maxSize << endl << "Current Size = " << currentSize << endl;
		for (int i = 0; i < currentSize; i++)
		{
			cout << i << ")" << arr[i] << endl;
		}
}
void Queue::enQueue(const int& value)
{
	if (input.isFull())
	{
		cout << "The Queue is full!" << endl;
	}
	else
	{
		input.push(value);
	}
}
int Queue::deQueue()
{
	if (input.isEmpty())
	{
		cout << "The queue is empty!" << endl;
		return -1;
	}

	while (!input.isEmpty())
	{
		output.push(input.pop());
	}

	int dequeuedValue = output.pop();  // the actual front

	while (!output.isEmpty())
	{
		input.push(output.pop());
	}

	return dequeuedValue;
}

int Queue::peek()
{
	if (input.isEmpty())
	{
		cout << "The queue is empty!" << endl;
		return -1;
	}

	while (!input.isEmpty())
	{
		output.push(input.pop());
	}

	int front = output.pop();
	output.push(front);  // push it back to preserve
	// Restore original order
	while (!output.isEmpty())
	{
		input.push(output.pop());
	}

	return front;
}

void Queue::display()
{
	if (input.isEmpty())
	{
		cout << "Queue is empty!" << endl;
		return;
	}

	// Move elements to output to reverse order
	while (!input.isEmpty())
	{
		output.push(input.pop());
	}

	// Display elements (front to rear)
	int index = 0;
	while (!output.isEmpty())
	{
		int val = output.pop();
		cout << index++ << ") " << val << endl;
		input.push(val); // Push back to input to restore state
	}
}
bool Queue::isFull()
{
	return input.isFull();
}
bool Queue::isEmpty()
{
	return input.isEmpty();
}