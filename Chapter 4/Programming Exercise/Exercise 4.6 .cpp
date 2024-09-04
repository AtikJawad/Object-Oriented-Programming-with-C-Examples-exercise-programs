//Redo Exercise 4.5 using inline function. Test the function using a main function.
#include <iostream>
using namespace std;

inline int max(int a, int b, int c) {
    return (a > b && a > c) ? a : (b > c ? b : c);
}

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "The largest number is: " << max(a, b, c) << endl;

    return 0;
}
