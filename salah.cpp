
#include <iostream>

int step(int var, short int stepen)
{
    int buffer = var;
    for (int i = 1; i < stepen; i++)
        var = buffer * var;
    return var;
}

int main()
{
    int var;

    for (int x = 1; x <= 9; x++)
    {
        for (int y = 0; y <= 9; y++)
        {
            for (int z = 0; z <= 9; z++)
            {
                int var = (x * 10000 + y * 1000 + z * 100 + y * 10 + x);
                if (step(x + y + z, 4) == var)
                    printf("x = %d\ny = %d\nz = %d\n", x, y, z);
            }
        }
    }

    return 0;
