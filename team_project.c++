#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
class check_secure_password
{
protected :
const string special_characters = "!@#$%^&*()_+-=~`{}[]|\\:;\"'<>,.?/";
const string numbers = "0123456789";
const string uppercase_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string lowercase_letters = "abcdefghijklmnopqrstuvwxyz";
private :
    string chek_password = special_characters + numbers + uppercase_letters + lowercase_letters;
    int password_length = 8;
    public : 

    void generate_password()
    {
        srand(time(0));
        for (int i = 0; i < password_length; i++)
        {
            chek_password += chek_password[rand() % chek_password.length()];
        }
        cout << "Generated Password: " << chek_password << endl;
    }
    void check_password_strength(const string& password)
    {
        bool has_special_char = false;
        bool has_number = false;
        bool has_uppercase = false;
        bool has_lowercase = false;

        for (char c : password)
        {
            if (special_characters.find(c) != string::npos)
                has_special_char = true;
            else if (numbers.find(c) != string::npos)
                has_number = true;
            else if (uppercase_letters.find(c) != string::npos)
                has_uppercase = true;
            else if (lowercase_letters.find(c) != string::npos)
                has_lowercase = true;
        }

        if (has_special_char && has_number && has_uppercase && has_lowercase && password.length() >= password_length)
            cout << "Password is strong." << endl;
        else
            cout << "Password is weak." << endl;
    }
    void print_password_requirements()
    {
        cout << "Password Requirements:" << endl;
        cout << "- At least " << password_length << " characters long" << endl;
        cout << "- Contains at least one special character: " << special_characters << endl;
        cout << "- Contains at least one number: " << numbers << endl;
        cout << "- Contains at least one uppercase letter: " << uppercase_letters << endl;
        cout << "- Contains at least one lowercase letter: " << lowercase_letters << endl;
    }
};
class chek_secire_name
{
protected :
    const string special_characters = "!@#$%^&*()_+-=~`{}[]|\\:;\"'<>,.?/";
    const string numbers = "0123456789";
    const string uppercase_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const string lowercase_letters = "abcdefghijklmnopqrstuvwxyz";
private :
    string chek_name = special_characters + numbers + uppercase_letters + lowercase_letters;
    int name_length = 3;
public :
    void check_name_strength(const string& name)
    {
        bool has_special_char = false;
        bool has_number = false;
        bool has_uppercase = false;         
        bool has_lowercase = false;
        if (has_special_char && has_number && has_uppercase && has_lowercase && name.length() >= name_length)
            cout << "Name is strong." << endl;
        else
            cout << "Name is weak." << endl;

}
void print_name_requirements()
    {
        cout << "Name Requirements:" << endl;
        cout << "- At least " << name_length << " characters long" << endl;
        cout << "- Contains at least one special character: " << special_characters << endl;
        cout << "- Contains at least one number: " << numbers << endl;
        cout << "- Contains at least one uppercase letter: " << uppercase_letters << endl;
        cout << "- Contains at least one lowercase letter: " << lowercase_letters << endl;
    }
};
int main()
{
    check_secure_password password_checker;
    password_checker.print_password_requirements();
    string password;
    cout << "Enter a password to check its strength: ";
    cin >> password;
    password_checker.check_password_strength(password);
    password_checker.generate_password();

    chek_secire_name name_checker;
    name_checker.print_name_requirements();
    string name;
    cout << "Enter a name to check its strength: ";
    cin >> name;
    name_checker.check_name_strength(name);

    return 0;
}