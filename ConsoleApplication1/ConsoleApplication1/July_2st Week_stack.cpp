#include <bits/stdc++.h>
/*
* 5�� ���� STACK 
������ ���� �����غ��ڽ��ϴ�. ���� ������ �� �ְ����� ������ �����غ��� ���� �����ϴ�. 
��¥ ������ �����ϴ�. �׷��� �� �� �õ��غ��ø� ���ڽ��ϴ�. 
����ü�� ������ template�� github ��ũ���� Ȯ���� �� �ֽ��ϴ�.
push �Լ��� ���ÿ� x�� �߰��ϴ� �Լ��̰�, pop �Լ��� ������ ����⿡ ��ġ�� ���Ҹ� �����ϴ� �Լ��̰�, top �Լ��� ������ ����⿡ ��ġ�� ������ ���� Ȯ���ϴ� �Լ��Դϴ�. 
���� �����̵忡�� push �Լ����� ���ʷ� ������ �غ��ڽ��ϴ�.


STL stack������ �ַ� push, pop, top, empty, size ��� �Լ��� ���� �� ���Դϴ�. 
push, pop, top�� �츮�� �տ��� �ѰŶ� �Ȱ���, empty�� size�� ũ�� ����� ���� ���Դϴ�.
*/

using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x) { // ���ÿ� x�߰��ϴ� �Լ�
	dat[pos++] = x;
}

void pop() { // ������ ������� ���� ����
	pos--; // pos -;
}

int top() { // ������ ����⿡ ��ġ�� ���� �� Ȯ��, �� ��ȯ
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