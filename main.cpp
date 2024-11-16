#include "Car.h"
#include <iostream>
#include <deque>
#include <ctime>
#include <cstdlib>
using namespace std;

const int INITIAL_SIZE = 2;

int main() {
    srand(time(0));

    deque<Car> queue;

    for (int i = 0; i < INITIAL_SIZE; i++) {
        queue.push_back(Car());
    }

    cout << "Initial queue:" << endl;
    







    return 0;
}