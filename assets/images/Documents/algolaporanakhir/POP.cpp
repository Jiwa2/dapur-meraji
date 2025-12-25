#include <iostream>
using namespace std;

	class stack {
		int top;
	public:
		int a[MAX];
		 stack() { top = -1;}
		bool push(int x);
		int pop();
		int peek();
		boolisEmpty();
	};
	bool Stack::push(int x)
	{
		if (top >= (MAX - 1)) {
			cout << "Stack Overflow";
			return false;
		}
		else {
			a[++top] = x;
			cout << x << "Didorong ke dalam tumpukan\n";
			return true;
		}
	}
	
	int Stack::pop()
	{
		if (top < 0) {
			cout << "Stack underflow";
			return 0;
		}
	}                      

int main () {
		
}
