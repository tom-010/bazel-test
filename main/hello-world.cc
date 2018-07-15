#include "lib/hello-time.h"
#include "lib/hello-opencv.h"
#include "main/hello-greet.h"
#include <iostream>

int main(int argc, char** argv) {
    std::string who = "World";
    if (argc > 1)
        who = argv[1];
    std::cout << get_greet(who) << std::endl;
    print_localtime();
    say_opencv_hello();
    return 0;
}
