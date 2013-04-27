/**
 * ����ģʽ
 * ����ʹ����ʵ��
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

