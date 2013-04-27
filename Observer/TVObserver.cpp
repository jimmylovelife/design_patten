/*
 * 观察者模式
 * TVObserver 实现
 */
#include <stdio.h>
#include "TVObserver.h"
void TVObserver::update(int temp, int wind) {
	this->m_curTemp = temp;
	this->m_curWind = wind;
	this->display();
}

void TVObserver::display() {
	printf("current temprature:%d, wind:%d\n", this->m_curTemp, this->m_curWind);
}
