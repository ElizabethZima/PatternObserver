#pragma once
#include "IObservable.h"

#include <iostream>

class Buyer : public IObserver {
private:

	IObservable* product;

public:

	Buyer(IObservable* obj);

	void update(double p) override;
};

