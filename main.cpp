#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	const int32_t CELL_WIDTH = 4;
	const int32_t MIN_VALUE = 1;
	const int32_t MAX_VALUE = 10;

	cout << setw(CELL_WIDTH) << " " << "|";
	for (int32_t counter = MIN_VALUE; counter <= MAX_VALUE; counter++) {
		cout << setw(CELL_WIDTH) << counter;
	}
	cout << endl;

	cout << setfill('-') << setw(CELL_WIDTH) << "-" << "+";
	cout << setw(CELL_WIDTH * MAX_VALUE) << "-" << endl;
	cout << setfill(' ');

	for (int32_t outer = MIN_VALUE; outer <= MAX_VALUE; outer++) {
		cout << setw(CELL_WIDTH - 1) << outer << " |";
		for (int32_t inner = MIN_VALUE; inner <= MAX_VALUE; inner++) {
			cout << setw(CELL_WIDTH) << outer * inner;
		}
		cout << endl;
	}
	return 0;
}