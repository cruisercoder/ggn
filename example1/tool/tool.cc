#include "util.h"
#include <iostream>

int main(int argc, char *argv[]) {
  using namespace std;
  std::cout << "betin test1\n";

  try {
    do_something();
  } catch (exception &e) {
    cout << "exception: " << e.what() << "\n";
    return 1;
  } catch (const char *e) {
    cout << "exception: " << e << "\n";
    return 1;
  } catch (...) {
    cout << "exception: (...)"
         << "\n";
    return 1;
  }

  std::cout << "end test1\n";
  return 0;
}
