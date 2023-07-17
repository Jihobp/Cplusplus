//http://boj.kr/000e663f39e747d8944794fb277b6f17
// stack method

#include <bits/stdc++.h>
using namespace std;


const int MX = 100005;
int dat[MX]; // dat 배열[MX] 가 들어간? 
int pos; // 정수 변수
//Q.why 변수명이 dat이랑 pos? ^^
//position, data? list?

void push(int value) { //한칸 밀고 value 넣는 것
	dat[pos++] = value;
}

void pop() { //맨위에 있는 pop 꺼내기
	pos--;
}

int top() { // pos top 에 있는거 가져오기
	return dat[pos - 1];
 }

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n; // 문자 입력
	while (n--) {	//Q Q. ????? n 번반복? n 에서 하나 뺀만큼?
		string c;	//문자 선언
		cin >> c;	//문자 입력 ?
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
		else { // t o p 이 뭔지 return 하는것 
			if (pos == 0) cout << -1 << '\n';
			else cout << top() << '\n';
		}

	}
}