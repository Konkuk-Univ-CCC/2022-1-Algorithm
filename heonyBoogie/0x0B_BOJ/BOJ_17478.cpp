#include <iostream>
#include <string>

using namespace std;
string s = "____";
string t1 = "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
string t2 = "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
string t3 = "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";

int func(int n, string a){
	cout << a;
	cout << "\"����Լ��� ������?\"\n";
	if (n == 0) {
		cout << a;
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
		cout << a;
		cout << "��� �亯�Ͽ���.\n";
		return 0;
	}
	else {
		cout << a + t1;
		cout << a + t2;
		cout << a + t3;
		func(n - 1, a+s);
		cout << a;
		cout << "��� �亯�Ͽ���.\n";
	}
    return 0; // �̰� ���� ��� double free error �߻�
}

int main() {
	int n;
	cin >> n;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	func(n, "");
	return 0;
}