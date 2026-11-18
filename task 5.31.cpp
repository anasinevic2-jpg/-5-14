#include <iostream>
using namespace std;
int vegetables(int a, int b) {
	return a + b;
} 
int vegetables(int a, int b, int c) {
	return a + b + c;
}
int main() {
	cout << "Урожай с трёх грядок:" << vegetables (12, 4, 67) << endl;
	cout << "Урожай с двух грядок:" << vegetables( 52, 13) << endl;
	return 0;
}