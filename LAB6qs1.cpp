//Question1
#include <iostream>
#include <cmath>
using namespace std;

int calculateFac(int num) {
    if (num == 0) {
        return 1;
    }
    return num * calculateFac(num - 1);
}

int main() {
    int n,x;
    cout << "Enter the value of n: ";
    cin >> n;
    cout<<"Enter the value of x: ";
    cin>>x;

    double* numbers = new double[x];
    for (int i = 1; i <= x; i++) {
        numbers[i-1] = pow(n, i) / calculateFac(i);
    }

    double myResult = 1;

    for (int i = 0; i < x; i++) {
        myResult += numbers[i];
    }

    cout << "Result is : " << myResult << endl;
    delete[] numbers;
    return 0;

}









