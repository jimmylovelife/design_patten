/**
 * ���Գ���
 */
#include <stdio.h>
#include "monca.h"
#include "milk.h"
#include "juice.h"
#include "coffee.h"

int main() {
	Drink *coffee = new Coffee();
	Drink *juice = new Juice();
	
	Decorator *milk = new Milk();
	Decorator *monca = new Monca();

	//����Ħ��
	milk->setDrink(coffee);
	monca->setDrink(milk);
	printf("Ħ�����̵ļ۸�%f\n", monca->cost());
}
