#include <iostream>
#include <string>
#include <vector>
#include "IObserver.h"
#include "IObservable.h"
#include "Product.h"
#include "WholeSaler.h"
#include "Buyer.h"

using namespace std;


int main() {

	Product* product = new Product(400);

	Wholesaler* wholesaler = new Wholesaler(product);
	Buyer* buyer = new Buyer(product);

	product->changePrice(320);
	product->changePrice(280);

}