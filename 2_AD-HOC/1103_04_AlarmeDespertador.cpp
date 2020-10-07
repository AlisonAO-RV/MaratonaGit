/* Criado:          Alison Alain de Oliveira
 * Estudante:       Engenharia de Software
 * Universidade:    UNIRV - Rio Verde - GO
 * Ano:             2020
 * 
 * Problema encontrado em:
 * https://www.urionlinejudge.com.br/judge/pt/problems/view/1103
 * 
 * Nivel: 4
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h1, m1, h2, m2, min;
    bool loop = true;
    while (loop)
    {

        cin >> h1 >> m1 >> h2 >> m2;

        h1 = (h1 * 60) + m1;
        h2 = (h2 * 60) + m2;

        if (h1 > h2)
        {
            h1 = 1440 - h1;
            min = h1 + h2;
        }
        else
        {
            min = h2 - h1;
        }

        if (h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0)
        {
            loop = false;
        }
        else
        {
            cout << min << "\n";
        }
    }
    return 0;
}
