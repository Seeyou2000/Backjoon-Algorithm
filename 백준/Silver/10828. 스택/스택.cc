#include <iostream>
using namespace std;

class stack {
private:
	int data[10000];
	int top;
public:
	stack() {
		top = -1;
	}
	~stack(){}

	void push(int input_data) {
		data[top + 1] = input_data;
		top++;
	}
	int pop() {
		int a = data[top];
		top--;
		return a;
	}
	int size() {
		return top + 1;
	}
	bool empty() {
		if (size())
			return false;
		else
			return true;
	}
	int _top() {
		int a = data[top];
		return a;
	}
};

int main() {
	stack s;
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string order;
		cin >> order;
		if (order == "push") {
			int data;
			cin >> data;
			s.push(data);
		}
		else if (order == "pop") {
			if (s.empty())
				cout << "-1\n";
			else
				cout << s.pop() << "\n";
		}
		else if (order == "size") {
			cout << s.size() << "\n";
		}
		else if (order == "empty") {
			cout << s.empty() << "\n";
		}
		else {
			if (s.empty())
				cout << "-1\n";
			else
				cout << s._top() << "\n";
		}
	}
}