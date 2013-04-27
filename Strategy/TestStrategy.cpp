/**
 * ����ģʽ
 * ���Դ���
 */

#include "Context.h"
#include "FlyStrategy.h"
#include "SwimStrategy.h"

int main() {
	Context bird(new FlyStrategy());
	Context fish(new SwimStrategy());

	bird.doAction();
	fish.doAction();
	return 0;
}
