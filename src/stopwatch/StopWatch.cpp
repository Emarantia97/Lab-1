#include "StopWatch.h"
#include <ctime>
using namespace std;



// returns the amount of time in seconds that has passed since the process (i.e. your program) started executing
double Stopwatch::getProcessTime()
{
    clock_t time = clock();
    return static_cast<double>(time)/CLOCKS_PER_SEC;
}

double Stopwatch::getExecutionTime()
{
    return t_1-t_0;
}



void Stopwatch::time_start()
{
     t_0=getProcessTime();
}

void Stopwatch::time_end()
{
    t_1 = getProcessTime();

}
