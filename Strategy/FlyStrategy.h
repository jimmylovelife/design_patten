/**
 * 策略模式
 * 具体的策略
 * 飞行策略
 */

#ifndef FLY_STRATEGY_H
#define FLY_STRATEGY_H

#include "IStrategy.h"
class FlyStrategy : public IStrategy{
public:
	void action();	
};
#endif
