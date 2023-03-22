#include "Buyer.h"

Buyer::Buyer(IObservable* obj) : product(obj) {
	obj->addObserver(this);
}


void Buyer::update(double p) {
	using namespace std;
	if (p < 350) {
		cout << "Customer bought product by price: " << p << endl;
		product->removeObserver(this);
	}
}