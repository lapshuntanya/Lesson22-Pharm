#pragma once
#include <iostream>
#include <cstring>
using namespace std;

enum TYPES {
	other,
	pills,		//пігулки
	capsules,	//капсули
	syrope		//сироп
};

class Medicine
{
	char* m_title;	//назва препарату
	TYPES m_type;		//тип
	char* m_country;	//країна походження
	float m_price;	//ціна

public:
	Medicine();
	Medicine(const char* title, TYPES type, const char* country,
		float price);
	Medicine(const Medicine& obj_copy);
	~Medicine();

	void setTitle(const char* title);
	void setType(TYPES type);
	void setCountry(const char* country);
	void setPrice(float price);

	const char* getTitle()const;
	TYPES getType()const;
	const char* getCountry()const;
	float getPrice()const;

	void showInfo()const;
};

