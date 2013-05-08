/**
 * 装饰者模式
 * 具体的装饰者
 * 调料 牛奶
 * Milk
 */

#include "decorator.h"

class Milk : public Decorator {
public:
	float cost() { return 0.22 + this->drink->cost(); }
};
