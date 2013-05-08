/**
 * 装饰者模式
 * 具体的装饰者
 * 调料 摩卡
 * Monca
 */
#include "decorator.h"
class Monca : public Decorator {
public:
	float cost() { return 0.33 + this->drink->cost(); }
};
