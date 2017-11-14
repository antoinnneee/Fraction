#include <stdio.h>
#include "fraction.h"
#include <limits>

#include <iomanip>
#include <iostream>
#include <QDebug>
//  Function de principal, tout les programme commence par cette function
int main(int argc, char *argv[])
{
    std::setprecision(30);
    Fraction fraction(0.00000234);
    qDebug() << fraction.getNumerator() << "/" << fraction.getDenominator() << " = "
         << fraction.toDouble() << " | "<< fraction.getNumerator()/ fraction.getDenominator()
         << " | " << 0.000010002395784;
    Fraction fraction2(fraction,fraction);
    printf("fraction 2 : %lf/%lf = %lf\n", fraction2.getNumerator(), fraction2.getDenominator(), fraction2.toDouble());


    return 1;
}
