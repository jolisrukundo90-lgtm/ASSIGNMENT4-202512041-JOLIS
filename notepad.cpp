#include "notepad.h"

void writeFile(string filename)
{
    ofstream file(filename);
    string text;

    cout << "Enter text (type END to stop):" << endl;

    cin.ignore();

    while (true)
    {
        getline(cin, text);

        if (text == "END")
            break;

        file << text << endl;
    }

    file.close();
    cout << "File saved successfully." << endl;
}

void readFile(string filename)
{
    ifstream file(filename);
    string text;

    if (!file)
    {
        cout << "File not found!" << endl;
        return;
    }

    cout << "\n--- File Contents ---" << endl;

    while (getline(file, text))
    {
        cout << text << endl;
    }

    file.close();
}

void appendFile(string filename)
{
    ofstream file(filename, ios::app);
    string text;

    cout << "Enter text to append (type END to stop):" << endl;

    cin.ignore();

    while (true)
    {
        getline(cin, text);

        if (text == "END")
            break;

        file << text << endl;
    }

    file.close();
    cout << "Text appended successfully." << endl;
}