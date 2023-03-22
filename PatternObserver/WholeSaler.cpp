#include "WholeSaler.h"

Wholesaler::Wholesaler(IObservable* obj) : product(obj) {
	obj->addObserver(this);
}

void Wholesaler::update(double p)  {
	using namespace std;
	if (p < 300) {
		cout << "Optsaler bought product by price: " << p << endl;
		product->removeObserver(this);
	}

}