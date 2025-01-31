#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    list<string> browse_history;
    // creating an iterator
    list<string>::iterator current = browse_history.begin();

    string s;

    while (true)
    {
        cin >> s;

        if(s == "end")
        {
          break;
        }

        browse_history.push_back(s);
    }

    int q;
    cin >> q;
    cin.ignore();

    for(int x = 0; x < q; x++)
    {
        string command;
        getline(cin, command);

        stringstream ss(command);
        string word;

        vector<string> commands;

        while (ss >> word) {
        commands.push_back(word);
        }

        // logic

        if(commands[0] == "visit")
        {
            // some code

            auto it = find(browse_history.begin(), browse_history.end(), commands[1]);

            if (it != browse_history.end()) // so that mean we found
            {
                current = it;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if(commands[0] == "prev")
        {
            // some code
            if (current != browse_history.begin()) // there is some node to search
            {
                --current;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if(commands[0] == "next")
        {
            // some code
            // --browse_history.end() to avoid going past the end
            // suppose we are at end, if we code without -- then the condition will be true and we will go to NULL
            if (current != --browse_history.end())
            {
                ++current;
                cout << *current << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else
        {
            cout << "Not Available" << endl;
        }
    }
//     taking input done;
//     for(const auto bh: browse_history)
//     {
//           cout << bh << " ";
//     }
    return 0;
}
