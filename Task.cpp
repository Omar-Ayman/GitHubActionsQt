#include "Task.h"
#include <iostream>
#include <string>

using namespace std;

Task::Task(QObject *parent)
    : QObject{parent}
{}

void Task::run()
{
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello " << name << endl;

    emit finished();
}
