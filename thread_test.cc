#include <iostream>
#include <chrono>
#include "thread_pool.h"

void sayHello() {
    std::cout << "hello. " << std::this_thread::get_id() << std::endl;
}

int main() {
    thread_pool tp;
    for (unsigned i = 0; i < 100; ++i)
        tp.submit(sayHello);

    std::this_thread::sleep_for(std::chrono::milliseconds(10));

    return 0;
}
