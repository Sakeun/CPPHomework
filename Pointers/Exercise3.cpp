#include "Exercise3.h"

#include <iostream>

int** Exercise3::CreatePascalsTriangle(int n)
{
    int** rows = new int*[n];
    for(int i = 0; i < n; i++)
    {
        rows[i] = new int[i + 1];
        for(int j = 0; j < i + 1; j++)
        {
            if(j == 0 || j == i)
            {
                rows[i][j] = 1;
                continue;
            }
            if(i > 1)
            {
                rows[i][j] = rows[i-1][j-1] + rows[i-1][j];
            }
        }
    }

    return rows;
}

void Exercise3::PrintPascalsTriangle(int** p, int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i + 1; j++)
        {
            std::cout << p[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Exercise3::CleanPascalsTriangle(int** p, int n)
{
    for(int i = 0; i < n; i++)
    {
        delete p[i];
    }
    delete p;
}
