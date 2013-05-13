/**
 * 简单工厂模式
 */

#include "Product.h"

static Product* create_product(const int type) {
	switch (type) {
	case 1:
		return new AProduct();
		break;
	case 2:
		return new BProduct();
		break;
	default:
		return new Product();
	}
}
