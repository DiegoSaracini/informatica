#include <cstdlib>
#include <iostream>
using namespace std;

double potenza(double base, unsigned int esponente)
{
       double accumulatore = 1;
       for(int contatore = 0;
               contatore < esponente;
               contatore++) {
                            accumulatore = accumulatore * base;
       }             
         
       return accumulatore;
} 
                    
int main(int argc, char *argv[])
{
    double base;
    unsigned int esponente;
    cout << "base ";
    cin >> base;
    cout << "esponente: ";
    cin >> esponente;
    cout << base << " elevato alla "
         << esponente << " potenza; "
         << potenza (base, esponente) << endl;
   
    system("PAUSE");
    return EXIT_SUCCESS;
}
