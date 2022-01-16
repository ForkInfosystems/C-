#include <iostream>
#include<conio.h>
using namespace std;

class  Karad                                                  // Base Class
{
            public:
                            int  a, b;

                            Karad()
                            {
                                        cout << "\n Karad :: Constructor..." << endl;
                            }

                            ~Karad()
                            {
                                        cout << "\n Karad :: Destructor..." << endl;
                            }

                            void fun()
                            {
                                        cout << "\n Karad :: fun()..." << endl;
                            }
};

class Pune : public  Karad                             // Derived Class
{
            public:
                                int  x, y;

                                Pune();
                                ~Pune();

                                void gun();
};

Pune :: Pune()
{
            cout << "\n Pune :: Constructor..." << endl;
}

Pune :: ~Pune()
{
            cout << "\n Pune :: Destructor..." << endl;
}

void Pune :: gun()
{
            cout << "\n Pune :: gun()..." << endl;
}

// Main function for the program

int main( )
{
                Karad  K1;
                getche();
                Pune  P1;
                getche();

                cout << endl <<sizeof(K1)<< endl;               // 8
                cout << endl <<sizeof(P1)<< endl;              //  16

                getch();
                return 0;
}
