#include <iostream>
#include "version.h"

int main(int argc, char * argv[]) {
    std::cout << "OpenGraph editor and analyser.\nVersion "
              << OpenGraph_VERSION_MAJOR << "."
              << OpenGraph_VERSION_MINOR << std::endl;
}
