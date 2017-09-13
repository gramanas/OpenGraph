#include "humanChanger.hpp"

void HumanChanger::connectPerson(const Person& person) {
    connect(this, SIGNAL(personChanged(int, QString)), &person, SLOT(slotInfoChanged(int, QString)));
}

void HumanChanger::setInfo(int age, const QString& name) {
    m_age = age;
    m_name = name;
}

bool HumanChanger::change() {
    emit personChanged(m_age, m_name);
    return true;
}
