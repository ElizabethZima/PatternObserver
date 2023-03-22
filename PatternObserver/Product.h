#pragma once
#include "IObservable.h"
#include <vector>

class Product : public IObservable {
private:
	std::vector<IObserver*> observers;
	double price;

public:

	Product(double p);

	void changePrice(double p);

	void addObserver(IObserver* o) override;

	void removeObserver(IObserver* o);

	void notify() override;
	
};

