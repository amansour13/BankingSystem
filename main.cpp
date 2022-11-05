#include<iostream>
#include"BigDecimalIntClass.h"

class BigReal{

    double realNumber;
    std::string realNum;
    BigDecimalInt BD;

public:

    BigReal(double x = 0.0){ realNumber = x;}
    BigReal(std::string num){ realNum = num;} 
    BigReal(BigDecimalInt big) { BD = big;}
    BigReal(BigReal&);
    BigReal(BigReal&&);
    BigReal& operator=(BigReal&);
    BigReal& operator=(BigReal&&);
};

BigReal::BigReal(BigReal& other)
{
    realNumber = other.realNumber;
    realNum = other.realNum;
    BD = other.BD;

}

BigReal::BigReal(BigReal&& other)
{
    realNumber = other.realNumber;
    realNum = other.realNum;
    BD = other.BD;

}

BigReal& BigReal::operator=(BigReal& other)
{
    realNumber = other.realNumber;
    realNum = other.realNum;
    BD = other.BD;
}

BigReal& BigReal::operator=(BigReal&& other)
{
    if(this != &other)
    {
        realNumber = other.realNumber;
        realNum = other.realNum;
        BD = other.BD;
    }
}



int main(){




}