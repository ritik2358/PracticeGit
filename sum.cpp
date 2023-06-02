#include <iostream>
using namespace std;
// Function to return sum of two number
int addTwoNumber(int A, int B)
{
    // Return sum of A and B
    return A + B;
}
int main()
{
    // Given two number
    int a, b;
    cin >> a >> b;

    // Function call
    cout << addTwoNumber(a, b);
    return 0;
}
