#ifndef FRACTION_H  // protection contre la double inclusion a mettre dans tout les headers (fichier.h)
#define FRACTION_H

class Fraction
{
    //  public fonction et variable accessible par une class externe
public:
    /*
     * Différente maniere d'initialisé la class
     * toute les valeurs envoyé a l'init sont convertie en type double
     */
    Fraction (double numerator, double denominator);
    Fraction (double decimal);
    Fraction (int numerator, int denominator);
    Fraction (Fraction const &copy);
    Fraction (Fraction numerator, Fraction denominator);


    double getNumerator() { return (m_numerator); }
    double getDenominator() { return (m_denominator); }

    //  function qui permet de modifier une des valeur de la fraction
    void setNumerator(int numerator);
    void setNumerator(double numerator);
    void setDenominator(int denominator);
    void setDenominator(double denominator);



    // function de conversion
    double toDouble();
    int toInt();
    Fraction toFraction(double decimal);
    //  Tout ce qu'il y a apres private n'est accesible uniquement par la class
private:
    double m_numerator;
    double m_denominator;

    int decimal_count(double decimal);

};

//bool operator=();

#endif // FRACTION_H
