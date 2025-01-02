#include <iostream>
#include <memory>

using namespace std;

int main() {
	int* ptr = new int(74); //heap new delete
	cout << *ptr << endl;
	delete ptr;
	ptr = nullptr;

	unique_ptr<int> ptr1 = make_unique<int>();

	cout << *ptr1;


	return 0;
}
