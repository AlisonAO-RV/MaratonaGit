/* Criado:          Alison Alain de Oliveira
 * Estudante:       Engenharia de Software
 * Universidade:    UNIRV - Rio Verde - GO
 * Ano:             2020
 * 
 * Problema encontrado em:
 * https://www.urionlinejudge.com.br/judge/pt/problems/view/1009
 * 
 * Nivel: 2
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string funcionario;
    double salario, vendas, total;

    cin >> funcionario >> salario >> vendas;

    total = salario + ( (vendas / 100) * 15 );

    cout << fixed;
    cout.precision(2);

    cout << "TOTAL = R$ " << total << "\n";

    return 0;
}