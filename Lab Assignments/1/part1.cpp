#include <iostream>
#include <time.h>
#include "List.h"
#include "Vector.h"
using namespace std;

const int tSize = 10000000;

double elapsed_time( clock_t start, clock_t finish){
   // returns elapsed time in milliseconds
   return (finish - start)/(double)(CLOCKS_PER_SEC/1000);
}

int main()
{

    double lis_time_insert, lis_time_visit, vec_time_insert, vec_time_visit;
    List<int> lis;
    Vector<int> vec;
    clock_t start, finish;

      // time for insertion in list
    start = clock();
    for(int i = 0; i < tSize; ++i) {
        lis.push_back(i);
    }
    finish = clock();
    lis_time_insert = elapsed_time(start, finish);

      // time for visiting in list
    start = clock();
    lis.visitAll();
    finish = clock();
    lis_time_visit = elapsed_time(start, finish);

      // time for insertion in vector
    start = clock();
    for(int i = 0; i < tSize; ++i) {
        vec.push_back(i);
    }
    finish = clock();
    vec_time_insert = elapsed_time(start, finish);

      // time for visiting in vector
    start = clock();
    vec.visitAll();
    finish = clock();
    vec_time_visit = elapsed_time(start, finish);

    cout << "[Weijie Zeng]\n[301379422]\n[weijiez]\nProgram: [part1]\nType of Element: [int]\nNumber of Elements: [" << tSize << "]" << endl;
    cout << "Time units: [""milliseconds""]" << "Time for Vector Insertion: [" << vec_time_insert << "]" << endl;
    cout << "Time for List Visiting: [" << vec_time_visit << "]" << endl;
    cout << "Time for Vector Insertion: [" << lis_time_insert << "]" << endl;
    cout << "Time for List Visiting: [" << lis_time_visit << "]" << endl;

    return 0;
}

















