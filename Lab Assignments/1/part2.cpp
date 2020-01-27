#include <iostream>
#include <time.h>
#include "Vector2.h"
using namespace std;

const int tSize = 100;

double elapsed_time( clock_t start, clock_t finish){
   // returns elapsed time in milliseconds
   return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}

int main() {

    double vec_push_front;
    Vector<int> vec;
    clock_t start, finish;

      // time for visiting in vector
    start = clock();
    for(int i = 0; i < tSize; ++i) {
        vec.push_front(i);
    }
    finish = clock();
    vec_push_front = elapsed_time(start, finish);

    cout << "[Weijie Zeng]\n[301379422]\n[weijiez]\nProgram: [part1]\nType of Element: [int]\nNumber of Elements: [" << tSize << "]" << endl;
    cout << "Time units: [""milliseconds""]" << "Time for Vector Insertion: [" << vec_push_front << "]" << endl;

    return 0;
}
