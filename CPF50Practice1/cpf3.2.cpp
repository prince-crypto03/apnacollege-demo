#include <iostream>
using namespace std;

int main ()
{
    int cpfmarks = 70;
    int mathmarks = 80;

    cout << "initial cpfmarks: " << cpfmarks << endl;
    
    cout << "\nPre Increment (++cpfmarks): " << ++cpfmarks << endl;

    cpfmarks = 70;
    cout << "pre decrement (--cpfmarks): " << --cpfmarks << endl;

    cpfmarks = 70;
    cout << "Post Increment (cpfmarks++): " << cpfmarks++ << endl;
    cout << "after Increment: " << cpfmarks << endl;

    cpfmarks = 70;
    mathmarks = 80;
    
    int result = ++cpfmarks + mathmarks++ + --cpfmarks + ++mathmarks - mathmarks--;

    cout << "\nexpression result: " << result << endl;
    cout << "cpfmarks after expression: " << cpfmarks << endl;
    cout << "mathmarks after expression: " << mathmarks << endl;

    return 0;
}