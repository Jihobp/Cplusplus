#include <bits/stdc++.h>
/*
* 5강 스택 STACK 
스택을 직접 구현해보겠습니다. 조금 막막할 수 있겠지만 곰곰히 생각해보면 정말 쉽습니다. 
진짜 정말로 쉽습니다. 그래서 한 번 시도해보시면 좋겠습니다. 
구현체를 빼놓은 template는 github 링크에서 확인할 수 있습니다.
push 함수는 스택에 x를 추가하는 함수이고, pop 함수는 스택의 꼭대기에 위치한 원소를 제거하는 함수이고, top 함수는 스택의 꼭대기에 위치한 원소의 값을 확인하는 함수입니다. 
다음 슬라이드에서 push 함수부터 차례로 구현을 해보겠습니다.


STL stack에서는 주로 push, pop, top, empty, size 멤버 함수를 쓰게 될 것입니다. 
push, pop, top은 우리가 앞에서 한거랑 똑같고, empty랑 size도 크게 어렵지 않을 것입니다.
*/

using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x) { // 스택에 x추가하는 함수
	dat[pos++] = x;
}

void pop() { // 스택의 꼭대기의 원소 제거
	pos--; // pos -;
}

int top() { // 스택의 꼭대기에 위치한 원소 값 확인, 즉 반환
	return dat[pos - 1];
}

void test() {
	push(5); push(4); push(3);
	cout << top() << '\n'; // 3
	pop(); pop();
	cout << top() << '\n'; // 5
	push(10); push(12);
	cout << top() << '\n'; // 12
	pop();
	cout << top() << '\n'; // 10
}

int main(void) {
	test();
	return top();
}