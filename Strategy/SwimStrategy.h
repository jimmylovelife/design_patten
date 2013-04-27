/**
 * 策略模式
 * 具体策略
 * 游泳
 */

#ifndef SWIM_STRATEGY_H
#define SWIM_STRATEGY

#include "IStrategy.h"

class SwimStrategy : public IStrategy {
public:
	void action();
};
#endif
