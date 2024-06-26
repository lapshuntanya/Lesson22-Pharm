#pragma once
#include "Medicine.h"

class Pharm
{
	char* m_name;
	int m_sizeMed;
	Medicine* m_arrMed;
public:
	Pharm();
	Pharm(const char* name);
	~Pharm();

	void setName(const char* name);
	const char* getName()const;

	void showInfo()const;

	void addMedicine(Medicine obj);
	void findMedicine(const char* title)const;
	void sortByTitle();
	void sortByPrice();
};

