#include <iostream>
using namespace std;
void pickBasket(int& baskets) {
	baskets = baskets + 1;
}
int main() {
	int baskets = 11;
	pickBasket(baskets);
	cout << baskets;
	return 0;
} 