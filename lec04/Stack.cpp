#include<iostream>
using namespace std;
struct Stack {
	int data[1000];
	int top;
	Stack() {
		top=-1;
	}
	inline bool empty()const {
		return top==-1;
	}
	inline int size()const {
		return top+1;
	}
	inline int peek()const {
		return data[top];
	}
	void push(int x){
		data[++top]=x;
	}
	void pop(){
		--top;
	}
};


int main() {
	Stack S;//Call Stack();
	cout<<S.top<<endl;//-1
	return 0;
}
