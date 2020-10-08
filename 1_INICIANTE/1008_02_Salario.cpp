/* Criado:          Alison Alain de Oliveira
 * Estudante:       Engenharia de Software
 * Universidade:    UNIRV - Rio Verde - GO
 * Ano:             2020
 * 
 * Problema encontrado em:
 * https://www.urionlinejudge.com.br/judge/pt/problems/view/1008
 * 
 * Nivel: 2
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int funcionario = 0;
    int horas = 0;
    double valorHora, total;

    cin >> funcionario >> horas >> valorHora;

    total = horas * valorHora;

    cout << fixed;
    cout.precision(2);

    cout << "NUMBER = " << funcionario << "\n";
    cout << "SALARY = U$ " << total << "\n";

    return 0;
}