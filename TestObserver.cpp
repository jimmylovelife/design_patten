/*
 * Test 观察者模式
 */
#include <iostream> 
#include "WetherSubject.h"
#include "TVObserver.h"

int main() {
	TVObserver *o1 = new TVObserver();
	WetherSubject mysub;
	mysub.add_observer(o1);
	mysub.change_value(2,2);
	return 0;
}
