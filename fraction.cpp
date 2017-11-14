#include "fraction.h"

Fraction::Fraction(double numerator, double denominator)
{
    Fraction fract = toFraction(numerator/denominator);
    m_numerator = fract.getNumerator();
    m_denominator = fract.getDenominator();
}

Fraction::Fraction(double decimal)
{
    Fraction fract = toFraction(decimal);
    m_numerator = fract.getNumerator();
    m_denominator = fract.getDenominator();


}

Fraction::Fraction(int numerator, int denominator) :
    m_numerator((double)numerator), m_denominator((double)denominator)
{

}
Fraction::Fraction(Fraction const &copy) :
    m_numerator(copy.m_numerator), m_denominator(copy.m_denominator)
{

}


Fraction::Fraction(Fraction numerator, Fraction denominator) :
    m_numerator(numerator.toDouble()), m_denominator(denominator.toDouble())
{

}

void    Fraction::setNumerator(int numerator)
{
    m_numerator = numerator;
}

void    Fraction::setNumerator(double numerator)
{
    m_numerator = numerator;
}

void    Fraction::setDenominator(double denominator)
{
    m_denominator = denominator;
}

void    Fraction::setDenominator(int denominator)
{
    m_denominator = denominator;
}


double  Fraction::toDouble()
{
    return (m_numerator/m_denominator);
}

int  Fraction::toInt()
{
    return ((int)toDouble());
}


int Fraction::decimal_count(double decimal)
{
    int     nbdecimal = 0;
    long     tronc = 0;
    double  decicopy =0;
    double     pow = 1.;
    int     maxPrecision = 50;

    while (maxPrecision)
    {
        decicopy = decimal * pow;
        tronc = decicopy;
        if ((decicopy/(double)tronc) == 1)
        {
            return (nbdecimal);
        }
        nbdecimal++;
        pow*=10.;
    }
    return (50);
}

Fraction Fraction::toFraction(double decimal)
{
    int     nbdecimal = 0;
    long     tronc = 0;
    double  decicopy =0;
    double     pow = 1.;
    int     maxPrecision = 50;

    while (maxPrecision--)
    {
        decicopy = decimal * pow;
        tronc = decicopy;
        if ((decicopy/(double)tronc) == 1)
        {
            break;
        }
        nbdecimal++;
        pow*=10.;
    }
    int num = decimal*pow;
    int deno = pow;
    Fraction fraction(num, deno);
    return (fraction);
}



