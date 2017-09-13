#ifndef HUMAN_CHANGER_HPP
#define HUMAN_CHANGER_HPP

#include "person.hpp"
#include <QObject>

class HumanChanger : public QObject {
    Q_OBJECT
  public:
    HumanChanger() {
    }

    ~HumanChanger() {
    }

    void connectPerson(const Person& person);
    void setInfo(int age, const QString& name);
    bool change();

  signals:
    void personChanged(int age, const QString& name);

  private:
    Person m_person;
    int m_age;
    QString m_name;
};
#endif
