// Listing 5.4 - demonstrates if statements usied with relational operators

#include <iostream>
int main()
{
    using std::cin;
    using std::cout;

    int MetsScore, YankeesScore;
    cout << "Enter the score for the mets: ";
    cin >> MetsScore;

    cout << "\nEnter the score for the Yankees: ";
    cin >> YankeesScore;

    cout << "\n";

    if (MetsScore > YankeesScore)
    {
        cout << "Yay go Mets!!\n";
    }

    if (MetsScore < YankeesScore)
    {
        cout << "Go Yankees!!\n";
    }

    if (MetsScore == YankeesScore)
    {
        cout << "A tie? Nah cant be...\n";
        cout << "Give me the real score for the Yankees: ";
        cin >> YankeesScore;
        cout << "\n";

        if(MetsScore > YankeesScore)
        {
            cout << "Knew it. Lets go Mets!!\n";
        }

        if (MetsScore < YankeesScore)
        {
            cout << "Knew it. Go Yankees!!\n";
        }

        if (MetsScore == YankeesScore)
        {
            cout << "Wow it really was a tie!\n";
        }
    }

    cout << "Thanks for telling me.\n";
    return 0;
}