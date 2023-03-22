#pragma once
#include "IObservable.h"
#include <iostream>

class Wholesaler : public IObserver {
private:
	IObservable* product;
public:
	Wholesaler(IObservable* obj);

	void update(double p) override;
	
};

