/**
 * 工厂模式
 * 工厂方法
 */
#iclude "Product.h"

class Factory {
public:
	virtual Product* createProduct(int type) = 0;
};

class SDFactory : public Factory {
public:
	virtual Product* createProduct(int type) {
		switch(type) {
		case 1:
			return new AProduct();
		case 2:
			return new BProduct();
		}
	}
};

class BJFactory : public Factory {
public:
	virtual Product * createProduct(int type) {
		switch(type) {
		case 1:
			return new BProduct();
		}
	}
};


