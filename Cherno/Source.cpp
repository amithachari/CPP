#include <iostream>
#include <string>
using namespace std;

class Printable {
public:
	virtual string GetClassName() = 0;  //Pure Virtual Fn
};


class Entity: public Printable {
public:
	virtual std::string GetName() { return "Entity"; };
	string GetClassName() override { return "Entity";  }
};

class Player : public Entity, Printable {
private:
	std::string m_Name;
public:
	Player(const string& name) : m_Name(name) {}
	string GetName() override { return m_Name;}
	string GetClassName() override { return "Player"; }
};

void PrintName(Entity* entity) {
	cout << entity->GetName() << endl;
}

class A : public Printable {
public:
	string GetClassName() override { return "A"; }
};

void Print(Printable* obj) {
	cout << obj->GetClassName() << endl;
}

int main() {
	Entity* e = new Entity();
	Print(e);
	Player* p = new Player("Amith");
	Print(p);
	Print(new A());
	cin.get();
	return 0;
}