/**
 * 装饰者模式
 * Decorator
 */
#ifndef DECORATOR_H
#define DECORATOR_H

#include "drink.h"

class Decorator : public Drink {
protected:
	Drink *drink;
public:
	//Decorator(Drink *drink) { this->drink = drink; }
	void setDrink(Drink *drink) { this->drink = drink; }
	virtual float cost() { return drink->cost(); }
};
#endif
