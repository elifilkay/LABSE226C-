#include <iostream>

using namespace std;

const int MAX_NUM = 1000000;

int numbers[] = {2, 3, 4, 5, 6, 7, 9};
bool isPrime[MAX_NUM+1];

int sieve_of_eratosthenes(int* numbers, int n) {
    int numPrimes = 0;
    fill_n(isPrime, n, true);
    for (int i = 0; i < n; i++) {
        if (isPrime[numbers[i]]) {
            int number = numbers[i];
            if (number > 1) {
                numPrimes++;
            }
            for (int j = number * 2; j <= MAX_NUM; j += number) {
                isPrime[j] = false;
            }
        }
    }
    return numPrimes;
}

int main() {
    int n = sizeof(numbers) / sizeof(int);
    int numPrimes = sieve_of_eratosthenes(numbers, n);
    cout << "The number of prime numbers: " << numPrimes << endl;
    for (int i = 2; i <= MAX_NUM; i++) {
        if (isPrime[i]) {
            cout << i<<" " ;
        }
    }
    return 0;
}

