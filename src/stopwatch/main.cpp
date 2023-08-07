#include <iostream>
#include "StopWatch.h"
#include <ctime>

using namespace std;

int main()
{
    Stopwatch stopWatch;

    stopWatch.time_start();

    for(long int i=0; i<1000000000; i++)
    {

    }

    stopWatch.time_end();

    cout << stopWatch.getExecutionTime();
    return 0;
}
