
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    int isPrime = 1;

    cout << "Enter the Number : ";
    cin >> num;

    if (num <= 1) {
        isPrime = 0;
    }
    else if (num == 2) {
        isPrime = 1;
    }
    else {
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1) {
        cout << "Given Number is Prime";
    } else {
        cout << "Not Prime";
    }

    return 0;
}