#include <iostream>
#include <string>
using namespace std;
int main()
{
    int con = 0;
    string pswd, con_pswd;
pswd_set:
    while (con == 0)
    {
        cout << "Enter your Password:";
        cin >> pswd;
        if (pswd.length() < 8)
        {
            cout << "The Password must contain at least 8 characters!" << endl
                 << endl;
            goto pswd_set;
        }
    pswd_conf:
        cout << "Please confirm your Password:";
        cin >> con_pswd;

        if (pswd == con_pswd)
        {
            cout << "Password created successfully!" << endl
                 << endl;
            con = 1;
        }
        else
        {
            cout << "Password not matched!" << endl
                 << endl;
            goto pswd_conf;
        }
    }
    string password;
    while (1)
    {
        cout << "Enter your password(enter q to quit):";
        cin >> password;
        if (password == pswd)
        {
            cout << "ACCESS GRANTED!" << endl
                 << endl;
        }
        else if (password == "q")
        {
            cout << "QUITTED" << endl
                 << endl;
            break;
        }
        else
        {
            cout << "Wrong Password! Try Again." << endl
                 << endl;
        }
    }
    return 0;
}