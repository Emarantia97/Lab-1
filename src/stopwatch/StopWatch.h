#ifndef STOPWATCH_H
#define STOPWATCH_H



class Stopwatch
{
    public:
    // returns the amount of time in seconds that has passed since the process (i.e. your program) started executing
    double getProcessTime();
    double getExecutionTime();
    void time_start ();
    void time_end ();

    private:
    void executionTime();
    double t_0;
    double t_1;
};


#endif
