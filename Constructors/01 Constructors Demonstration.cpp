using namespace std;
#include<iostream>
#include<conio.h>

class  Constructor_Demo
{
        private :
                    int  x,  y;

                    void  Sun()                                                                                                // Member Function or Behavior
                    {
                                cout << "\n Inside Private Sun() function of our Class...";
                    }

        public :
                    int  i , j;                                                                                                     // Data Members or Characteristics

                    Constructor_Demo()                                                                              // Default Constructor
                    {
                                i = j = x = y = 0;
                                a = b = 1;

                                cout<< "\n Inside Default Constructor Of Our Class...";
                    }

                    Constructor_Demo(int  N1, int  N2, int N3)                                                  // Parameterized  Constructor
                    {
                                    x = y = N1;
                                    i = j = N2;
                                    a = b = N3;

                                    cout<< "\n Inside Parameterized Constructor Of Our Class...";
                    }

                    void  Fun()                                                                                                // Member Function or Behavior
                    {
                                cout << "\n Inside PUBLIC fun() function of our Class...";
                    }

                    ~Constructor_Demo()                                                                         // Destructor
                    {
                                cout<< "\n Inside Destructor Of Our Class...";
                    }

        protected :
                    int  a , b;

                    void  Gun()                                                                                                // Member Function or Behavior
                    {
                                cout << "\n Inside PROTECTED Gun() function of our Class...";
                    }
};

int  main()
{
            Constructor_Demo  Obj1, Obj2;                             // Objects Created Using Default Constructor

            Constructor_Demo  Obj3(15, 21, 75);                 // Object Created Using Parameterized  Constructor



            getch();
            return 0;
}
