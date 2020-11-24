#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string filename = "fstream.txt";
    ofstream outfstream(filename);
    string data;
    if (outfstream.is_open())
    {
        outfstream << "This is a line." << endl;
        cout << "Write data";
        cin >> data;
        outfstream << data << endl;
        outfstream.close();
    }
    else
        cout << "Unable to open file";
    ifstream infstream(filename);
    if (infstream.is_open())
    {
        while (getline(infstream, data))
        {
            cout << data << '\n';
        }
    }
    return 0;
}