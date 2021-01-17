#include <iostream>
#include <unistd.h>

#include "ab_count.h"

int main() {
    int total = ab_count();
    int new_total = 0;
    std::cout << "Alpacas + Bandicoots = " << total;

    while(1) {
        usleep(1000);
	new_total = ab_count();
	if (new_total != total) {
            total = new_total;
	}
	std::cout << "\r" << "Alpacas + Bandicoots = " << total;
    }

    return 0;
}
