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

