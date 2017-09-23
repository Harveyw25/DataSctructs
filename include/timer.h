#ifndef TIMER_H
#define TIMER_H

#include <chrono>
#include <iostream>

class timer
{
    public:
        timer();
        void start();
        void stop();
        double print();
        virtual ~timer();

    protected:

    private:
        std::chrono::time_point<std::chrono::system_clock> startTime;
        std::chrono::time_point<std::chrono::system_clock> finishTime;

};

#endif // TIMER_H
