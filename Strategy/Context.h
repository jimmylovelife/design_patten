/**
 * ����ģʽ
 * ���Ե�ʹ����
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
