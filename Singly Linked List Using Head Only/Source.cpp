#include "myLL.h"

int main()
{
	myLL obj;

	obj.insertAtHead(10);
	obj.insertAtHead(20);
	obj.insertAtHead(30);
	obj.insertAtTail(0);
	
	cout << "Search: " << obj.search(999) << endl;
	
	cout << "Display: " << endl;

	obj.display();

	return 0;
}