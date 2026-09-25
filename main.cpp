#include <iostream>
using namespace std;

int main()
{
    //get users colors
    int userColor;

    //allows for me to use for loop and check colors off
    bool choseRed = false;
    bool choseOrange = false;
    bool choseYellow = false;
    bool choseGreen = false;
    bool choseBlue = false;
    bool chosePurple = false;
    bool choseBlack = false;
    bool choseWhite = false;
    bool choseGrey = false;

    //checks to see that there is a color clash recognized
    bool colorClash = false;

    //has the user be announed by what they want to be called
    string userName = "";

    cout << "Welcome to the Color Clash Checker(CCC).\nWe get input on colors you have difficulty seeing and then compute if the colors clash.\nThen recommened different colors based on your specific clash.\nTo get started please enter your name:" << endl;
    getline(cin,userName);

    cout << "\nHello " << userName << ". What colors do you struggle to see, choose 5.";
            
    //goes and gets user color 5 times instead of having 5 different variables
    for (int i = 0; i < 5; i++)
    {
        cout << "\nRed(1) Orange(2) Yellow(3) Green(4) Blue(5)\nPurple(6) Black(7) White(8) Grey(9) NA(10)\nIf it's less than 5, type in '10'\n";
        cin >> userColor;

        //checks to see if the user puts in correct input and restarts it if not
        if (userColor < 1 || userColor > 10)
        {
            i--;
            continue;
        }
        //checks that if it is the correct input and then its 11 then the whole loop stops
        else if (userColor == 10)
        {
            break;
        }

        //checks which number is selected through every iteration
        switch(userColor)
        {
            case 1:
                choseRed = true;
            break;
            case 2:
                choseOrange = true;
            break;
            case 3:
                choseYellow = true;
            break;
            case 4:
                choseGreen = true;
            break;
            case 5:
                choseBlue = true;
            break;
            case 6:
                chosePurple = true;
            break;
            case 7:
                choseBlack = true;
            break;
            case 8:
                choseWhite = true;
            break;
            case 9:
                choseGrey = true;
            break;
                
        }

    }

    //generate space so that it doesnt look cluttered in the console
    cout << "\n";

    //checks through all the common types of color clashes with the colors presented
    if (choseRed && choseGreen)
    {
        cout << "Red and Green clash, you could use a Blue and Yellow or Orange and Navy Blue." << endl;
        colorClash = true;
    }
    if (choseOrange && choseBlue)
    {
        cout << "Orange and Blue clash, you could use a Peach and Navy Blue or Orange and Dark Grey." << endl;
        colorClash = true;
    }
    if (choseBlue && choseYellow)
    {
        cout << "Blue and Yellow clash, you could use a Navy Blue and White or Teal and Charcoal." << endl;
        colorClash = true;
    }
    if (choseYellow && choseWhite)
    {
        cout << "Yellow and White clash, you could use a Yellow and Black." << endl;
        colorClash = true;
    }
    if (choseBlue && choseBlack)
    {
        cout << "Blue and Black clash, you could use a Light Blue and Black or Navy Blue and White." << endl;
        colorClash = true;
    }
    if (choseGrey && choseWhite)
    {
        cout << "Grey and White clash, you could use a Dark Grey and White or Light Grey and Black." << endl;
        colorClash = true;
    }
    if (choseGrey && choseBlack)
    {
        cout << "Grey and Black clash, you could use a Light Grey and Black or Dark Grey and White." << endl;
        colorClash = true;
    }
    if (chosePurple && choseBlack)
    {
        cout << "Purple and Black clash, you could use a Lavender and Black or Deep Purple and White." << endl;
        colorClash = true;
    }

    //generate space so that it doesnt look cluttered in the console
    cout << "\n";

    // if clash color is false, then it diplays the message of the computer not recognizing any clashing colors
    if (!colorClash)
    {
        cout << "The colors that you inputed don't seem to have a clashing color recognized by this program.\nThank you for using CCC." << endl;
    }
    else
    {
        cout << "Thank you for using CCC. Try your new alternative colors next time you need to." << endl;
    }

  return 0;
}