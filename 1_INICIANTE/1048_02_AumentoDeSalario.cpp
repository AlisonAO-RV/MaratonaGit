/* Criado:          Alison Alain de Oliveira
 * Estudante:       Engenharia de Software
 * Universidade:    UNIRV - Rio Verde - GO
 * Ano:             2020
 * 
 * Problema encontrado em:
 * https://www.urionlinejudge.com.br/judge/pt/problems/view/1048
 * 
 * Nivel: 2
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    float salario;
    float reajust;
    float novoSalario;
    int porcent;

    cout << fixed;
    cout.precision(2);

    cin >> salario;

    if (salario < 400.01)
    {
        porcent = 15;
    }
    else if (salario < 800.01)
    {
        porcent = 12;
    }
    else if (salario < 1200.01)
    {
        porcent = 10;
    }
    else if (salario < 2000.01)
    {
        porcent = 7;
    }
    else
    {
        porcent = 4;
    }

    reajust = (salario / 100) * porcent;
    novoSalario = salario + reajust;

    cout << "Novo salario: " << novoSalario << "\n";
    cout << "Reajuste ganho: " << reajust << "\n";
    cout << "Em percentual: " << porcent << " %\n";

    return 0;
}
