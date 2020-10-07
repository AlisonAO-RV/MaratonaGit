/* Criado:          Alison Alain de Oliveira
 * Estudante:       Engenharia de Software
 * Universidade:    UNIRV - Rio Verde - GO
 * Ano:             2020
 * 
 * Problema encontrado em:
 * https://www.urionlinejudge.com.br/judge/pt/problems/view/1005
 * 
 * Nivel: 2
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    float nota_A, nota_B;
    const float pesos = 11;
    double media;

    cin >> nota_A >> nota_B;

    media = ((nota_A * 3.5) + (nota_B * 7.5)) / pesos;

    cout << fixed;
    cout.precision(5);

    cout << "MEDIA = " << media << "\n";

    return 0;
}