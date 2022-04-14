#include <iostream>
#define MAX 10
using namespace std;

class stack
{
private:
	int top;
	int arr[MAX];

public:

	stack()
	{
		top = -1;
		arr[0] = 0;
	}

	int push(int data)
	{
		if (top == MAX - 1)
			return -1;

		arr[++top] = data;
		return arr[top];
	}

	int pop()
	{
		if (top < 0)
			return -1;

		return arr[top--];
	}

	void print_stack()
	{
		for (int i = top; i >= 0; i--)
			cout << arr[i] << endl;
		cout << endl;
	}
};

int main()
{
	stack st;
	for (int i = 0; i < 10; i++)
		st.push(i);

	st.print_stack();

	st.pop();
	st.pop();
	st.pop();

	st.print_stack();

	st.push(7);
	st.push(8);
	st.push(9);
	st.push(10);

	st.print_stack();
	return 0;
}