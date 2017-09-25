#include "timer.h"

timer::timer()
{

}

void timer::start()
{
    startTime = std::chrono::high_resolution_clock::now();
}

void timer::stop()
{
    finishTime = std::chrono::high_resolution_clock::now();
}

std::chrono::duration<double> timer::print()
{
    std::chrono::duration<double> elapsed = finishTime - startTime;

    //std::cout << elapsed.count() << std::endl;
    return elapsed;
}

timer::~timer()
{

}
