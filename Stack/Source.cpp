#include "myStack.h"

int main()
{
	myStack<int> obj(5);
	obj.push(265);
	obj.push(-3);
	obj.push(1985);

	//cout << "Removed Value: " << obj.pop() << endl << endl;

	obj.push(91);
	obj.push(0);
	obj.push(6);

	cout << "Topped Value: " << obj.top() << endl << endl;


	cout << "int display()" << endl;
	obj.display();

	cout << endl << endl;
	myStack<string> str(100);
	str.push("DSA");
	str.push("D6");
	cout << "string display()" << endl;
	str.display();

	return 0;
}