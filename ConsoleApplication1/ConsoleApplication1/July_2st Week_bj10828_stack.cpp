//http://boj.kr/000e663f39e747d8944794fb277b6f17
// stack method

#include <bits/stdc++.h>
using namespace std;


const int MX = 100005;
int dat[MX]; // dat �迭[MX] �� ��? 
int pos; // ���� ����
//Q.why �������� dat�̶� pos? ^^
//position, data? list?

void push(int value) { //��ĭ �а� value �ִ� ��
	dat[pos++] = value;
}

void pop() { //������ �ִ� pop ������
	pos--;
}

int top() { // pos top �� �ִ°� ��������
	return dat[pos - 1];
 }

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n; // ���� �Է�
	while (n--) {	//Q Q. ????? n ���ݺ�? n ���� �ϳ� ����ŭ?
		string c;	//���� ����
		cin >> c;	//���� �Է� ?
		if (c == "push") {
			int t;
			cin >> t;
			push(t);
		}
		else if (c == "pop") {
			if (pos == 0) cout << -1 << '\n';
			else {
				cout << top() << '\n';
				pop();
			}
		}
		else if (c == "size")
			cout << pos << '\n';
		else if (c == "empty")
			cout << (int)(pos == 0) << '\n';
		else { // t o p �� ���� return �ϴ°� 
			if (pos == 0) cout << -1 << '\n';
			else cout << top() << '\n';
		}

	}
}