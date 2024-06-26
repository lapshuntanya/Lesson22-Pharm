#include "Pharm.h"

Pharm::Pharm(){
	m_name = new char[9] {"Pharmacy"};
	m_sizeMed = 0;
	m_arrMed = nullptr;
}

Pharm::Pharm(const char* name){
	int sizeN = strlen(name) + 1;
	m_name = new char[sizeN];
	strcpy_s(m_name, sizeN, name);

	m_sizeMed = 0;
	m_arrMed = nullptr;
}

Pharm::~Pharm(){
	delete[] m_name;
	if (m_sizeMed > 0) {
		delete[] m_arrMed;
	}
}

void Pharm::setName(const char* name){
	if (strlen(name) >= 2) {
		delete[] m_name;

		int sizeN = strlen(name) + 1;
		m_name = new char[sizeN];
		strcpy_s(m_name, sizeN, name);
	}
}

const char* Pharm::getName() const{	return m_name;}

void Pharm::showInfo() const{
	cout << "Name: " << m_name << endl;
	cout << "Amount of med: " << m_sizeMed << endl;
	for (int i = 0; i < m_sizeMed; i++)
	{
		cout << "\t#" << i + 1 << "medicine\n";
		m_arrMed[i].showInfo();
	}
}

void Pharm::addMedicine(Medicine obj)
{
}

void Pharm::findMedicine(const char* title) const
{
}

void Pharm::sortByTitle()
{
}

void Pharm::sortByPrice()
{
}
