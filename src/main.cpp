#include <iostream>
#include "version.h"
#include "person.hpp"
#include "humanChanger.hpp"

int main(int argc, char * argv[]) {
    std::cout << "OpenGraph editor and analyser.\nVersion "
              << OpenGraph_VERSION_MAJOR << "."
              << OpenGraph_VERSION_MINOR << std::endl;

    Person p(20, QString("George"));
    HumanChanger hc;

    std::cout << p.getAge() << " " << p.getName().toStdString() << " " << p.getTimes() << "\n";

    hc.connectPerson(p);
    hc.setInfo(10, "koala");

    for (int i = 0; i < 10; i++)
        hc.change();

    std::cout << p.getAge() << " " << p.getName().toStdString() << " " << p.getTimes() << "\n";
}
