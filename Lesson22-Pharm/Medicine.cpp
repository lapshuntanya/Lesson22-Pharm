#include "Medicine.h"

Medicine::Medicine()
{
    m_title = new char[10] {"undefined"};
    m_type = TYPES::other;
    m_country = new char[8] {"Ukraine"};
    m_price = 0;
}

Medicine::Medicine(const char* title, TYPES type, const char* country, float price)
{
    int sizeT = strlen(title) + 1; //Рахуємо кількість символів
    m_title = new char[sizeT];//Виділяємо необхідну пам'ять
    strcpy_s(m_title, sizeT, title); //Копіюємо символи рядку

    m_type = type;

    int sizeC = strlen(country) + 1; //Рахуємо кількість символів
    m_country = new char[sizeC];//Виділяємо необхідну пам'ять
    strcpy_s(m_country, sizeC, country); //Копіюємо символи рядку

    m_price = price;
}

Medicine::~Medicine()
{
    delete[] m_title;
    delete[] m_country;
}

void Medicine::setTitle(const char* title)
{
    if (strlen(title) >= 2) {
        delete[] m_title;

        int sizeT = strlen(title) + 1; //Рахуємо кількість символів
        m_title = new char[sizeT];//Виділяємо необхідну пам'ять
        strcpy_s(m_title, sizeT, title); //Копіюємо символи рядку
    }
}

void Medicine::setType(TYPES type){
    m_type = type;
}

void Medicine::setCountry(const char* country){
    if (strlen(country) >= 2) {
        delete[] m_country;

        int sizeC = strlen(country) + 1; //Рахуємо кількість символів
        m_country = new char[sizeC];//Виділяємо необхідну пам'ять
        strcpy_s(m_country, sizeC, country); //Копіюємо символи рядку
    }
}

void Medicine::setPrice(float price){
    if (price > 0) {
        m_price = price;
    }
}

const char* Medicine::getTitle() const{    return m_title;}
TYPES Medicine::getType() const{    return m_type;}
const char* Medicine::getCountry() const{    return m_country;}
float Medicine::getPrice() const{    return m_price;}

void Medicine::showInfo() const{
    cout << "Title: " << m_title << endl;
    cout << ""
}
