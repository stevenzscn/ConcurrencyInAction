#include <iostream>
#include <unistd.h>
#include "thread_pool.h"

void sayHello() {
    std::cout << "hello.\n";
}

int main() {
    thread_pool tp;
    tp.submit(sayHello);
    tp.submit(sayHello);
    tp.submit(sayHello);
    tp.submit(sayHello);
    tp.submit(sayHello);
    tp.submit(sayHello);
    tp.submit(sayHello);
    tp.submit(sayHello);
    tp.submit(sayHello);
    tp.submit(sayHello);

    sleep(1);

    return 0;
}
