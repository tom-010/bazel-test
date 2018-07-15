#include "lib/hello-time.h"
#include <ctime>
#include <iostream>

void print_localtime() {
  using namespace std;
  time_t result = time(nullptr);
  cout << asctime(localtime(&result));
}
