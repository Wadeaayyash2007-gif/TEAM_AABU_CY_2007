#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
class chek_name_password
{
    private :
    string latters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNNOPQRSTUVWXYZ";
    string digits = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNNOPQRSTUVWXYZ0123456789";
        string chek_name = "";
        string chek_password = "";
      
    public :
     void generate_and_condition()
    {
        srand(time(0));
        
        int size_chek_name = 10;
        int size_chek_password = 12;
        for (int i = 0; i < size_chek_name; i++)
        {
            chek_name += latters[rand() % latters.length()];
        }
        for (int i = 0; i < size_chek_password; i++){
        
            chek_password += digits[rand() % digits.length()];
        }
        cout << "===========output================" << endl;
         cout << "your generated name is : " << chek_name << endl;
            cout << "your generated password is : " << chek_password << endl;
        string name  = "";
        string password = "";
        cout << "Enter your name : ";
        cin >> name;
        cout << "Enter your password : ";
        cin >> password;
        cout << "===========output================" << endl;
            cout << "your name is : " << name << endl;
            cout << "your password is : " << password << endl;
        if (name == chek_name && password == chek_password)
        {
            cout << "access logged in" << endl;
        }
        else
        {
            cout << "access denied" << endl;
        }
}
};
int main() 
{
chek_name_password chek;
chek.generate_and_condition();
}