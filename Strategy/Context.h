/**
 * 策略模式
 * 策略的使用者
 * Context
 */

#ifndef CONTEXT_H
#define CONTEXT_H

#include "IStrategy.h"

class Context {
private:
	IStrategy *strategy;
public:
	Context(IStrategy *strategy);
	~Context();
	void doAction();
};

#endif
