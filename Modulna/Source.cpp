#include <iostream>;
using namespace std;
int main() {
	srand(time(0));
	int dob = 1, sum = 0, float ser = 0;
	float ex;
	int amount;
	cin >> amount;
	for (int i = 1; i <= amount; i++) {
		ex = rand() % 10 + 1;
		sum += ex;
		dob *= ex;
		ser = ser + (ex / amount);
	}
	cout << "Summa - " << sum;
	cout << "Dobutok - " << dob;
	cout << "Seredne arifmetichne - " << ser;
}
