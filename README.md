# Times Table with Nested Loop

This exercise introduces nested loops and also `iomanip`.

## iomanip

Read chapter 9.2 in the zybook.

```c++
#include <iomanip>
```

The features found in `iomanip` are helpers for working with `streams` like `cout`. These helpers are designed to make formatting output much easier. For example:

```c++
cout << 1 << " item" << endl;
cout << 10 << " items" << endl;
cout << 100 << " items" << endl;
```

produces this:

```text
1 item
10 items
100 items
```

Suppose you wanted to line things up a little nicer.

```c++
cout << setw(4) << 1 << " item" << endl;
cout << setw(4) << 10 << " items" << endl;
cout << setw(4) << 100 << " items" << endl;
```

produces:

```text
   1 item
  10 items
 100 items
```

Perhaps you wanted right justification?

```c++
cout << left << setw(4) << 1 << " item" << endl;
cout << setw(4) << 10 << " items" << endl;
cout << setw(4) << 100 << " items" << right << endl;
```

produces:

```text
1    item
10   items
100  items
```

Each number still fits in 4 columns but is now left justified. Notice how `setw()` must be used set set the
width of the *next* item to be printed but `left` and `right` are sticky - they remain in force until changed.

## Nested loops

Read and do chapter 4.7 in your zybook.

Loops can be found inside other loops. When this happens, they are called nested loops.

The inner most loop can be thought of as happening the fastest. The outer most loop can be thought of as happened the slowest. Just imagine an odometer in a car. The one's digit (or tenths on some cars) is the innermost, and cycles quickly compared to the digit to its left.

Example:

```c++
for (int outer = 0; outer < 10; outer++) {
	for (int inner = 0; inner < 10; inner++) {
		cout << outer << " " << inner << endl;
	}
}
```

The inner loop will run 100 times (10 x 10).

## Times table

For this exercise, print a nicely formatted 10 x 10 times table:

```text
hyde pk_times_table $> ./a.out
       1   2   3   4   5   6   7   8   9  10
   1   1   2   3   4   5   6   7   8   9  10
   2   2   4   6   8  10  12  14  16  18  20
   3   3   6   9  12  15  18  21  24  27  30
   4   4   8  12  16  20  24  28  32  36  40
   5   5  10  15  20  25  30  35  40  45  50
   6   6  12  18  24  30  36  42  48  54  60
   7   7  14  21  28  35  42  49  56  63  70
   8   8  16  24  32  40  48  56  64  72  80
   9   9  18  27  36  45  54  63  72  81  90
  10  10  20  30  40  50  60  70  80  90 100
```

There will be *three* loops in this program. Use the first to print the horizontal heading.

Then, a nested loop - the outer will be the rows, the inner will be the columns.

Use `setw()` with a cell width set to 4 using a `const int`. For the maximum loop values, also use `const int` variables. This is to get you in the habit of avoiding *magic numbers*.

```c++
const int CELL_WIDTH = 4;
const int MIN_VALUE = 1;
const int MAX_VALUE = 10;
```
