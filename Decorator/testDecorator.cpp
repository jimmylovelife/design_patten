/**
 * 测试程序
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

	//加奶摩卡
	milk->setDrink(coffee);
	monca->setDrink(milk);
	printf("摩卡加奶的价格%f\n", monca->cost());
}
