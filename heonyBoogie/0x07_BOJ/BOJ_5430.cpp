#include <iostream>
#include <string>
#include <deque>
#include <sstream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, size;
	string s, arr;
	cin >> n;
	for (int i = 0; i < n; i++) {
		deque<string> DQ;
		cin >> s >> size >> arr;
		arr.erase(arr.begin()); // [ ����
		arr.pop_back(); // ]����
		istringstream ss(arr);
		string token;
		while (getline(ss, token, ',')) {
			DQ.push_back(token);
		}
		bool isWrong = false; 
		bool flip = false; // ������ ����
		for (char a : s) {
			if (a == 'R') {
				flip = !flip;
			}
			else {
				if (DQ.empty()) {
					isWrong = true;
					break;
				}
				if (flip) DQ.pop_back();
				else DQ.pop_front();
			}
		}

		if (isWrong) { //�迭�� ����ִµ� D����� �������
			cout << "error\n";
		}
		else if (DQ.empty()) {//�迭�� ��������� D����� ���� �������
			cout << "[]\n";
		}
		else { // �迭�� ������� ���� ���
			if (flip) {
				cout << "[";
				for (int i = DQ.size() - 1; i > 0; i--) {
					cout << DQ[i] << ",";
				}
				cout << DQ.front() << "]\n";
			}
			else {
				cout << "[";
				for (int i = 0; i < DQ.size() - 1; i++) {
					cout << DQ[i] << ",";
				}
				cout << DQ.back() << "]\n";
			}
		}
	}
	return 0;
}