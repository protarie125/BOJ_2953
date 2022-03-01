#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto mx = int{ 0 };
	auto p = int{ 0 };

	for (int i = 1; i <= 5; ++i) {
		auto sum = int{ 0 };
		for (int j = 0; j < 4; ++j) {
			int x;
			cin >> x;

			sum += x;
		}

		if (mx < sum) {
			mx = sum;
			p = i;
		}
	}

	cout << p << ' ' << mx;

	return 0;
}