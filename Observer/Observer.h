/**
 * �۲���ģʽ
 * Obserser
 */

#ifndef OBSERVER_H
#define OBSERVER_H

class IObserver {
public:
	virtual void update(int temp, int wind) {};
};

#endif
