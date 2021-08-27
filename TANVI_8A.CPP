#include<iostream.h>
#include<conio.h>
 
class NUM
{

        int n;
         
    public:
        //function to get number
        void getNum(int x)
        {
            n=x;
        }
        //function to display number
        void dispNum(void)
        {
            cout << "value of n is: " << n;
        }
        //unary ! operator overloading
	void operator !(void)
        {
            n=!n;
        }
};
int main()
{clrscr();
    NUM num;
    num.getNum(10);
    cout << "Before calling Operator Overloading:";
    num.dispNum();
    cout << endl;
     
    !num;
    cout << "After  calling Operator Overloading:";
    num.dispNum();
    cout << endl;getch();
    return 0;

}