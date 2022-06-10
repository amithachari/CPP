#include <iostream>
#include <string>
#include <memory>
using namespace std;

class Entity {
private:
	string m_Name;
public:
	const string& GetName() const 
	{ 
		return m_Name; 
	}
	Entity() : m_Name("Unknown") {
		cout << "created Entity" << endl;
	}
	Entity(const string& name) : m_Name(name) {
		cout << "Destroyed Entity" << endl;
	}
	void Print() {
		cout << m_Name << endl;
	}
};

class String {
private:
	char* m_Buffer;
	unsigned int m_Size;

public:
	String(const char* string1) {
		m_Size = strlen(string1);
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, string1, m_Size);
		m_Buffer[m_Size] = 0;

	}
	String(const String& other) {
		memcpy(this, &other, sizeof(String));
	}
	~String() {
		delete[] m_Buffer;
	}

	char& operator[](unsigned int index) {
		return m_Buffer[index];
	}
	

	friend ostream& operator<<(ostream& stream, const String& string);

};

ostream& operator<<(ostream& stream, const String& string) {
	stream << string.m_Buffer;
	return stream;
}

int main() {

	String string = "Amith";
	String second = string;
	cout << string << endl;

	cin.get();
	
	return 0;
}
