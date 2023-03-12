#include <iostream>
#include <cMath>
using namespace std;

int main() {
    int n = 0;
    double value;
    double sum = 0;
    value = pow(-1, n) / (n + 1);
    while(log(2) - sum  > 1e-6 || log(2) - sum < 0 ) {
        sum = sum + value;
        n++;
        value = pow(-1, n) / (n + 1);
    }
    cout << sum << endl;
    cout << log(2) << endl;
    return 0;
}
