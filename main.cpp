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
    for (int i = 0; i < queue.size(); ++i) {
        cout << "    ";
        queue[i].print();
    }
    
    while (!queue.empty()) {
        randomNum = rand() % 100  + 1;

        cout << "Time: " << time << " Operation: ";
        if (randomNum <= 55) {
            cout << "Car paid: ";
            queue.front().print();
            queue.pop_front();
        } else {
            Car newCar;
            cout << "Joined lane: ";
            newCar.print();
            queue.push_back(newCar);
        }
        
        cout << "Queue:" << endl;
        if (queue.empty()) {
            cout << "    " << "Empty" << endl;
        } else {
            for (int i = 0; i < queue.size(); ++i) {
                cout << "    ";
                queue[i].print();
            }
        }

        ++time;
        }

    return 0;
}