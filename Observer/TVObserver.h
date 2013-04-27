/*
 * 观察者模式
 * TVObserver
 */

#ifndef TVOBSERVER_H
#define TVOBSERVER_H

#include "Observer.h"

class IDisplay {
public:
	virtual void display(){};
};

class TVObserver : public IObserver, public IDisplay {
private:
	int m_curTemp;
	int m_curWind;
public:
	TVObserver(){};
	void update(int, int);
	void display();
};

#endif
