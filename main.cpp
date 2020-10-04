#include <iostream>
#include <iomanip>

using namespace std;

const int CELL_WIDTH = 4;
const int MIN_VALUE = 1;
const int MAX_VALUE = 10;

int main() {
	// heading
	cout << setw(CELL_WIDTH) << " ";
	for (int col = MIN_VALUE; col <= MAX_VALUE; col++) {
		cout << setw(CELL_WIDTH) << col;
	}
	cout << endl;
	for (int row = MIN_VALUE; row <= MAX_VALUE; row++) {
		cout << setw(CELL_WIDTH) << row;
		for (int col = MIN_VALUE; col <= MAX_VALUE; col++) {
			cout << setw(CELL_WIDTH) << row * col;
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}