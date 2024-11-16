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
    int time = 1, randomNum = 0;

    for (int i = 0; i < INITIAL_SIZE; ++i) {
        queue.push_back(Car());
    }

    cout << "Initial queue:" << endl;
    for (int i = 0; i < queue; ++i) {
        queue[i].print();
    }
    
    while (!queue.empty()) {
        randomNum = rean() % 100  + 1;

        cout << "Time: " << time << " Operation: ";
        if (randomNum <= 55) {
            cout << "Car paid: ";
            queue.front().print();
            queue.pop_front();
        }
        }
    }







    return 0;
}