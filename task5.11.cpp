#include <iostream>
using namespace std;
int harvest(int bushes, int kgPerBush) {
	return bushes * kgPerBush;
}
int main() {
	cout << "Общая масса урожая: " << harvest(15, 7) << endl;
	return 0;
}
