#include<iostream>
#include<conio.h>
using namespace std;

class  Category
{
            public :
                            Category()
                            {
                                            cout<<"\n Inside Category Constructor"<<endl;
                            }

                            ~Category()
                            {
                                            cout<<"\n Inside Category Destructor"<<endl;
                            }

                            virtual void  Display(int Num)
                            {
                                    cout<<"\n Inside Base Class Display Function "<< Num;
                            }

                            void Accept()
                            {
                                    int  No = 0;

                                    cout<<"\n Enter a Number : ";
                                    cin>>No;
                            }
};

class  Product : public  Category
{
                private:
                            int  P_ID;

                public :
                            int Cat_ID;

                             Product()
                            {
                                            this->P_ID = 0;
                                            this->Cat_ID = 21;
                                            cout<<"\n Inside Product Constructor"<<endl;
                            }

                            ~Product()
                            {
                                            cout<<"\n Inside Product Destructor"<<endl;
                            }

                            void  Display(int Num)
                            {
                                    cout<<"\n Inside Derived Class Display Function "<< Num<<endl;
                            }
};

int main()
{
                Product Obj;
                Category  Obj1;

                Obj1.Accept();
                Obj1.Display(5);

                Obj.Accept();
                Obj.Display(7);

                getch();
                return 0;
}
