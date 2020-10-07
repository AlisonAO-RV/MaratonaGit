/* Criado:          Alison Alain de Oliveira
 * Estudante:       Engenharia de Software
 * Universidade:    UNIRV - Rio Verde - GO
 * Ano:             2020
 * 
 * Problema encontrado em:
 * https://www.urionlinejudge.com.br/judge/pt/problems/view/1002
 * 
 * Nivel: 4
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    const double n = 3.14159;
    double raio;
    double area;

    cin >> raio;

    area = n * pow(raio, 2);

    cout << fixed;
    cout.precision(4);

    cout << "A=" << area << "\n";

    return 0;
}