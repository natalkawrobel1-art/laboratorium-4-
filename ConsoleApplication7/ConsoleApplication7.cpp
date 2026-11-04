// ConsoleApplication7.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cmath>
using namespace std; 

/* zadanie 0
int dodawanie(int a, int b);    // funkcja zwracajaca wynik typu int
void wyswietlanie(int a, int b); // funkcja bedaca procedura 🙂

int zmiennaGlobalna = 10;

int main() { // kod_04_05
    int a = 45, b = 25;
    int suma = dodawanie(a, b);
    cout << "Jesli dodam " << a << " do " << b << " to otrzymam " << suma << endl;
    a += 4;
    wyswietlanie(a, b);
    cout << "Zmienna globalna: " << zmiennaGlobalna << endl;
    cout << "Wartosci a oraz b: " << a << " i " << b << endl;
    return 0;
}

int dodawanie(int c, int b) {
    b = c + b;
    return b;
}

void wyswietlanie(int a, int b) {
    cout << "Wynik procedury / funkcji z void: " << a + b << endl;
    zmiennaGlobalna = 20;
    a = 111;
    b = 222;
}
Na początku zmienna a przyjmuje wartość 45, a b 25. Następnie liczby są dodawane i liczba a zwiększa swoją wartość o 4. Zmienna globalna zmienia wartość na 20. Na koniec zmienna a przyjmuje wartosc 111 a b 222 */ 

//zadanie 1 
string imie(string podane); 
void tabliczka(); 
void porownanie(int c, int d); 
int porownaniezezwracaniem(int c, int d); 
void najmniejsza(int a, int b, int c); 
double poletrojkata(double x, double y); 
void dzielniki(int calkowitapodana); 
float sredniawazona(float n, float m); 
double przeciwprostokatna(double k, double l); 
double dodawanie(double a, double b); 
double odejmowanie(double a, double b); 
double mnozenie(double a, double b); 
double dzielenie(double a, double b); 
float suma(int liczbaskladnikow);



int main() {
    string imiee; 
    int a; 
    int b; 
    int c; 
    int d; 
    int e; 
    double x = 2.5; 
    double y = 4.8; 
    double przyprostokatna1 = 9.7; 
    double przyprostokatna2 = 10.5; 
    int sprawdzjejdzielniki; 
    float pierwszaliczbadosredniej; 
    float drugaliczbadosredniej; 
    int liczbaskladnikow; 
    cout << "Podaj imie" << endl; 
    cin >> imiee;  
    cout << "Czesc " << imie(imiee) << endl; 
    tabliczka(); 
    cout << "Podaj pierwsza liczbe " << endl; 
    cin >> a; 
    cout << "Podaj druga liczbe " << endl; 
    cin >> b; 
    porownanie(a, b); 
    porownaniezezwracaniem(a, b); 
    cout << "Podaj pierwsza liczbe calkowita" << endl; 
    cin >> c; 
    cout << "Podaj druga liczbe calkowita" << endl;
    cin >> d;
    cout << "Podaj trzecia liczbe calkowita" << endl;
    cin >> e;
    najmniejsza(c, d, e); 
    double wynikPola = poletrojkata(x, y);
    cout << "Podwojona wartosc pola trojkata wynosi " << wynikPola* 2 << endl; 
    cout << "Podaj liczbe calkowita ktorej dzielniki chcesz sprawdzic" << endl; 
    cin >> sprawdzjejdzielniki; 
    dzielniki(sprawdzjejdzielniki); 
    cout << "Podaj wartosc pierwszej liczby z ktorej ma byc liczona srednia" << endl; 
    cin >> pierwszaliczbadosredniej; 
    cout << "Podaj wartosc drugiej liczby z ktorej ma byc liczona srednia" << endl;
    cin >> drugaliczbadosredniej;
    cout << sredniawazona(pierwszaliczbadosredniej, drugaliczbadosredniej) << endl; 
    cout << "Przeciwprostokatna wynosi " << przeciwprostokatna(przyprostokatna1, przyprostokatna2) << endl;
    double pierwsza;
    double druga;
    char znak;
    cout << "Prosze podac wartosc pierwszej liczby zmiennoprzecinkowej\n";
    cin >> pierwsza;
    cout << "Prosze podac wartosc drugiej liczby zmiennoprzecinkowej\n";
    cin >> druga;
    cout << "Prosze wprowadzic znak dzialania\n";
    cin >> znak;
    switch (znak) {
    case '+':
        cout << "Wynik to: " << dodawanie(pierwsza, druga) << endl;
        break;
    case '-':
        cout << "Wynik to: " << odejmowanie(pierwsza, druga) << endl;
        break;
    case '*':
        cout << "Wynik to: " << mnozenie(pierwsza, druga) << endl;
        break;
    case '/':
        cout << "Wynik to: " << dzielenie(pierwsza, druga) << endl;
        break;
    } 
    cout << "Podaj liczbe skladnikow" << endl;
    cin >> liczbaskladnikow;
    float wyniksumy= suma(liczbaskladnikow);
    cout << "Suma to " << wyniksumy; 
    return 0; 
}

string imie(string podane) {
    return podane; 
}
//zadanie 2
void tabliczka() {
    for (int i = 1; i <= 10; i++) {
        int a = i;
        for (int i = 1; i <= 10; i++) {
            int b = i;
            cout << a << "*" << b << "=" << a * b << "\t";
        } cout << endl;
    }
} 
//zadanie 3 
void porownanie(int c, int d) {
    if (c > d) {
        cout << c << " jest wieksze" << endl;
    }
    else if (c == d) {
        cout << "Liczby sa rowne" << endl;
    }
    else {
        cout << d << " jest wieksze" << endl; 
    }
}
int porownaniezezwracaniem(int c, int d) {
    if (c > d) {
        return c; 
    }
    else if (c == d) {
        return c ;
    }
    else {
        return d; 
    }
}
//zadanie 4 
void najmniejsza(int a, int b, int c) {
    int wartosc = a;
    if (b < wartosc) {
        wartosc = b;
    } if (c < wartosc) {
        wartosc = c;
    } cout << "Najmniejsza liczba to "<< wartosc << endl;
} 
//zadanie 5 
double poletrojkata(double x, double y) {
    double pole = (x * y) / 2; 
    cout << "Pole trojkata to " << pole << endl; 
    return pole; 
}
//zadanie 6 
void dzielniki(int calkowitapodana) {
    for (int i = 1; i <= calkowitapodana / 2; i++) {
        if (calkowitapodana % i == 0) {
            cout << i << endl; 
        }
    }
}
//zadanie 7
float sredniawazona(float n, float m) {
    float waga1;
    float waga2;
    cout << "Podaj wage pierwszej liczby" << endl;
    cin >> waga1;
    cout << "Podaj wage drugiej liczby" << endl;
    cin >> waga2;
    float srednia = ((n * waga1) + (m * waga2)) / (waga1 + waga2);
    return srednia;
}
//zadanie 8 
double przeciwprostokatna(double k, double l) {
    double przeciwpr = sqrt((k * k) + (l * l)); 
        return przeciwpr; 
}
//zadanie 9 
double dodawanie(double a, double b) {
    return a + b;
} 
double odejmowanie(double a, double b) {
    return a - b; 
}
double mnozenie(double a, double b) {
    return a * b; 
}
double dzielenie(double a, double b) {
    if (b == 0) {
        cout << "Nie można dzielić przez zero" << endl; 
        return 0; 
    }
    else {
        return a / b; 
    }
}
//zadanie 10 
float suma(int x) {
    float licznik = 0; 
    float liczba = 0; 
    for (int i = 1; i <= x; i++) {
        cout << "Podaj liczbe" << endl;
        cin >> liczba;
        licznik = licznik + liczba;

    } return licznik; 
}