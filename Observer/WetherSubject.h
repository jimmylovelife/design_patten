/**
 * 观察者模式
 * 具体主题 天气
 */

#ifndef WETHERSUBJECT_H
#define WETHERSUBJECT_H

#include "Observer.h"
#include "Subject.h"

class WetherSubject : public ISubject {
private:
	int m_temp;
	int m_wind;
public:
	void add_observer(const IObserver *o);
	void remove_observer(const IObserver *o);
	void notify_observers();
	void change_value(int, int);
	vector<const IObserver *>::iterator find(const IObserver *);
};

#endif
