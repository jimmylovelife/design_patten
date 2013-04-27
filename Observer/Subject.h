/*
 * 观察者模式
 * subject
 */

#ifndef SUBJECT_H
#define SUBJECT_H
#include <vector>
#include "Observer.h"
using namespace std;

class ISubject {
public:
	vector<const IObserver *> observers;
public:
	virtual void add_observer(const IObserver* o){};
	virtual void remove_observer(const IObserver* o){};
	virtual void notify_observers(){};
};

#endif //SUBJECT_H
