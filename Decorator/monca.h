/**
 * װ����ģʽ
 * �����װ����
 * ���� Ħ��
 * Monca
 */
#include "decorator.h"
class Monca : public Decorator {
public:
	float cost() { return 0.33 + this->drink->cost(); }
};
