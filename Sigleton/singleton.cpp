/**
 * 单件模式
 */
#include <iostream>
using namespace std;
class Singleton;
class Singleton {
private:
	static Singleton *ins;
	Singleton() { i = 0;}
	int i;
public:
	static Singleton *getInstance() {
		if(ins == NULL) {
			ins = new Singleton;
		}
		return ins;
	}
	void inc() {
		i++;
	}
	int getI() {
		return i;
	}
};
Singleton* Singleton::ins = new Singleton;
int main() {
	Singleton *t1, *t2;

	t1 = Singleton::getInstance();
	t2 = Singleton::getInstance();
	t1->inc();
	cout<<t1->getI()<<endl;
	cout << t2->getI()<<endl;
	return 0;
}
