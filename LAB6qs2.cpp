#include <iostream>
#include <cmath>

using namespace std;

double calculate_sum() {

    int n;
    cout << "Enter your number: ";
    cin >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double term = pow(-1, i + 1) / i;
        sum += term;
    }
    return sum;
}

int main() {
    double sum = calculate_sum();
    cout << "Sum: " << sum << endl;
    return 0;
}