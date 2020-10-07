/* Criado:          Alison Alain de Oliveira
 * Estudante:       Engenharia de Software
 * Universidade:    UNIRV - Rio Verde - GO
 * Ano:             2020
 * 
 * Problema encontrado em:
 * https://www.urionlinejudge.com.br/judge/pt/problems/view/1007
 * 
 * Nivel: 1
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, B, C, D, diferenca;

    cin >> A >> B >> C >> D;

    diferenca = ((A * B) - (C * D));

    cout << "DIFERENCA = " << diferenca << "\n";

    return 0;
}