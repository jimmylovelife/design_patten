/**
 * 策略模式
 * 策略使用者实现
 * Context
 */

#include "Context.h"

Context::Context(IStrategy *strategy) {
	this->strategy = strategy;
}

Context::~Context() {
}

void Context::doAction() {
	strategy->action();
}

