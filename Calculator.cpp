# include <iostream>
using namespace std;

int main()
{
    char op;
    float num1, num2;

    cout << "Masukan Operasi seperti + atau - atau * atau /  : ";
    cin >> op;

    cout << "Masukan angka 1 : ";
    cin >> num1;
    cout << "Masukan angka 2: ";
    cin >> num2;

    switch(op)
    {
        case '+':
            cout << num1+num2;
            break;

        case '-':
            cout << num1-num2;
            break;

        case '*':
            cout << num1*num2;
            break;

        case '/':
            cout << num1/num2;
            break;

        default:
            // Kalau operasi berbeda dari +,-,* atau / maka menampilkan Error Message
            cout << "Error! Operasi Salah!";
            break;
    }

    return 0;
   
}
