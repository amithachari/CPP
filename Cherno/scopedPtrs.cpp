#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Entity {
private:
	string m_Name;
public:
	void GetName(string* m_Name) const {
		cout << m_Name << endl;
	}
	Entity() {
		cout << "Created" << endl;
	}
	~Entity() {
		cout << "Destroyed" << endl;
	}

};

class ScopedPtr {
private:
	Entity* m_Ptr;
public:
	ScopedPtr(Entity* ptr)
		: m_Ptr(ptr) {

	}
	~ScopedPtr() {
		delete m_Ptr;
	}
};

int main() {
	{
		ScopedPtr e = new Entity();
	}
	cin.get();

}
