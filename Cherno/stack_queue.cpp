#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
	stack<int> stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	while (!stack.empty()) {
		cout << stack.top() << " ";
		stack.pop();
	}
	cout << endl;
	queue<int> queue;
	queue.push(1);
	queue.push(2);
	queue.push(3);
	queue.push(4);
	while (!queue.empty()) {
		cout << queue.front() << " ";
		queue.pop();
	}
	return 0;
}
