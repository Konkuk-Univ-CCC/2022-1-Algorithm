#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		list<char> L;
		string s;
		cin >> s;
		auto it = L.begin();
		for (char a : s) {
			if (a == '<') {
				if(it!=L.begin()) it--;
			}
			else if (a == '>') {
				if (it != L.end()) it++;
			}
			else if (a == '-') {
				if (it != L.begin()) { // it!=L.begin()�� �߰����� �ʾƼ� ��Ÿ�� ���� �߻�(list�� ������� �ʾƵ� Ŀ���� ���� ���� ���� �� �ֱ� ������ �� ��츦 ���)
					it = L.erase(--it);
				}
			}
			else {
				L.insert(it, a);
			}
		}
		for (char a : L) {
			cout << a;
		}
		cout << "\n"; 
	}

	return 0;
}