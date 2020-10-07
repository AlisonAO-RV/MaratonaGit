/* Criado:          Alison Alain de Oliveira
 * Estudante:       Engenharia de Software
 * Universidade:    UNIRV - Rio Verde - GO
 * Ano:             2020
 * 
 * Problema encontrado em:
 * https://www.urionlinejudge.com.br/judge/pt/problems/view/1006
 * 
 * Nivel: 1
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    double A, B, C;
    const double pesosA = 2;
    const double pesosB = 3;
    const double pesosC = 5;
    double media;

    cin >> A >> B >> C;

    media = ((A * pesosA) + (B * pesosB) + (C * pesosC)) / (pesosA + pesosB + pesosC);

    cout << fixed;
    cout.precision(1);

    cout << "MEDIA = " << media << "\n";

    return 0;
}