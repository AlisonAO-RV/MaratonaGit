/* Criado:          Alison Alain de Oliveira
 * Estudante:       Engenharia de Software
 * Universidade:    UNIRV - Rio Verde - GO
 * Ano:             2020
 * 
 * Problema encontrado em:
 * https://www.urionlinejudge.com.br/judge/pt/problems/view/1103
 * 
 * Nivel: 5
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b, n;
    int d, c, v;
    bool loop = true;
    bool possivel = true;

    while (loop)
    {
        cin >> b >> n;

        double reservas[b];

        if (b == 0 && n == 0)
        {
            loop = false;
        }
        else
        {
            for (int i = 0; i < b; i++)
            {
                cin >> reservas[i];
            }

            for (int i = 0; i < n; i++)
            {
                cin >> d >> c >> v;
                reservas[d - 1] -= v;
                reservas[c - 1] += v;
            }

            for (int i = 0; i < b; i++)
            {
                if (reservas[i] < 0)
                {
                    possivel = false;
                }
            }

            if (possivel == true)
            {
                cout << "S\n";
            }
            else
            {
                cout << "N\n";
            }

            possivel = true;
        }
    }

    return 0;
}