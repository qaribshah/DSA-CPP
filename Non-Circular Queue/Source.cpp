#include "myQueue.h"

int main()
{
	myQueue<int> obj(4);
	obj.enqueue(265);
	obj.enqueue(1985);
	obj.enqueue(-3);
	obj.enqueue(91);

	//obj.enqueue(888);

	cout << "Dequeue Value: " << obj.dequeue() << endl << endl;
	
	cout << "int display: " << endl;
	obj.display();

	return 0;
}