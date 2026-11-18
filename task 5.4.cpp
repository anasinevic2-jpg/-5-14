#include <iostream>
using namespace std;
int water(int litersPerBed, int beds = 1) {
	return litersPerBed * beds;
}
int main() {
	cout << "Количество воды: " << water(5) << endl;
	return 0;
}