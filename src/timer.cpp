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

double timer::print()
{
    std::chrono::duration<double> elapsed = finishTime - startTime;
    std::cout << "Elapsed time: " << elapsed.count() << " s" << std::endl;
}

timer::~timer()
{

}
