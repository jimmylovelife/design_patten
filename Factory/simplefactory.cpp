/**
 * 简单工厂模式
 */

class Product {
public:
	void setName(const char *name) {
		this->name = (char *)malloc(strlen(name));
		strncpy(this->name, name, strlen(name));
	}
private:
	char *m_name;	
};

class AProduct : public Product {
	
};

class BProduct : public Product {
};

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
