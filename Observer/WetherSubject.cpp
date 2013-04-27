/*
 * 观察者模式
 * WetherSubject
 */
#include "WetherSubject.h"
vector<const IObserver *>::iterator WetherSubject::find(const IObserver *b) {
	vector<const IObserver *>::iterator ptr = observers.begin();
	while(ptr != observers.end()) {
		if( *ptr == b)
			break;
		ptr++;
	}
	return ptr;
}

void WetherSubject::add_observer(const IObserver* b) {
	if (find(b) == observers.end())
		this->observers.push_back(b);
}

void WetherSubject::remove_observer(const IObserver* b) {
	vector<const IObserver *>::iterator ptr = find(b);
	if(ptr != observers.end()) {
		observers.erase(ptr);
	}
}

void WetherSubject::notify_observers() {
	vector<const IObserver *>::iterator ptr = observers.begin();
	while(ptr != observers.end()) {
		(const_cast<IObserver *>(*ptr))->update(m_temp, m_wind);
		ptr++;
	}	
}

void WetherSubject::change_value(int temp, int wind) {
	this->m_temp = temp;
	this->m_wind = wind;
	notify_observers();
}
