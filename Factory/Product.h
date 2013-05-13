/**
 * 工厂模式
 * 产品
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
