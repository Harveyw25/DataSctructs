#include <iostream>
#include "tester.h"
#include "timer.h"

int main(){

    tester t = tester();
    t.test(10, 1);
    t.test(100, 1);
    t.test(1000, 1);
    t.test(10000, 1);
    t.test(100000, 1);
    t.test(1000000, 1);
    t.test(10000000, 1);

	return 0;
}
