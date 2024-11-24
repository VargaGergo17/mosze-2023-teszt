#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // NELEMENTS helyett N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa" << std::endl; // idézőjelek
    for (int i = 0; i < N_ELEMENTS; i++) // hibás for ciklus
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) // helyes feltétel megadása
    {
        std::cout << "Ertek: " << b[i] << std::endl; //  hiányzó << 
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // atlag =0
    for (int i = 0; i < N_ELEMENTS; i++) // ,i++ helyett ;i++
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
