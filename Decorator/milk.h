/**
 * װ����ģʽ
 * �����װ����
 * ���� ţ��
 * Milk
 */

#include "decorator.h"

class Milk : public Decorator {
public:
	float cost() { return 0.22 + this->drink->cost(); }
};
