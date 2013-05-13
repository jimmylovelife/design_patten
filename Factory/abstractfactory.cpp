/**
 * 抽象工厂模式
 */

class Comp1 {
	
};

class SDComp1 : public Comp1 {
};

class BJComp1 : public Comp1 {
};

class Comp2 {
};

class SDComp2 : public Comp2 {
};

class BJComp2 : public Comp2 {
};


class AbstractFactory {
public:
	virtual Comp1 * createComp1() = 0;
	virtual Comp2 * createComp2() = 0;

};

class SDFactory : public AbstractFactory {
public:
	virtual Comp1 * createComp1() {
		return new SDComp1();
	}
	virtual Comp2 * createComp2() {
		return new SDComp2();
	}
};

class BJFactory : public AbstractFactory {
public:
	virtual Comp1 * createComp1(){
		return new BJComp1();
	}
	virtual Comp2 * createComp2() {
		return BJComp2();
	}
};

class Product {
public:
	virtual Product	(AbstractFactory *fac) = 0;
private:
	Abstractory *m_fac;
};

class SDProduct : public product {
public:
	virtual SDProduct(AbstractFactory *fac) {
		this->m_fac = fac;
	}
	void prepare() {
		Comp1 * p1 = this->m_fac->createComp1();
		Comp2 * p2 = this->m_fac->createComp2();
	}
private:
	AbstractFactory *m_fac;
};

class SDStore {
public:
	Product *createProduct() {
		Product *pro = new SDProduct(new SDFactory());	
	}
};




















