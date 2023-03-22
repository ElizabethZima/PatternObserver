#include "Product.h"


Product::Product(double p) : price(p) {};

void Product::changePrice(double p) {
	price = p;
	notify();
}

void Product::addObserver(IObserver* o) {
	observers.push_back(o);
}

void Product::removeObserver(IObserver* o) {
	observers.erase(remove(observers.begin(), observers.end(), o), observers.end());
}


void Product::notify(){
	for (auto o : observers) {
		o->update(price);
	}
}