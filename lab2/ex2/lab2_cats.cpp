//#include <iostream>
//#include "cats.h"
//using namespace std;
//string cats::get_hair_length() const
//
//{
//    return hair_length;
//}
//
//string cats::get_Fur_Colour() const
//{
//
//    return Fur_Colour;
//   
//}
//
//string cats::get_eye_Colour() const
//{
//    return eye_Colour;
//}
//cats::cats()
//{
//    set_Fur_Colour();
//    set_hair_length();
//    set_eye_Colour();
//}
//
//void cats::set_Fur_Colour()
//{
//    int x = rand() % 3;
//    if (x == 1)
//        Fur_Colour = "Black";
//    if (x == 0)
//        Fur_Colour = "Brown";
//    if (x == 2)
//        Fur_Colour = "Grey";
//}
//
//void cats::set_eye_Colour()
//{
//    int x = rand() % 3;
//    if (x == 0)
//        eye_Colour = "Green";
//    if (x == 1)
//        eye_Colour = "Blue";
//    if (x == 2)
//        eye_Colour = "Brown";
//}
//
//void cats::set_hair_length()
//{
//    int x = rand() % 2;
//    if (x == 0)
//        hair_length = "short";
//    if (x == 1)
//        hair_length = "long";
//}
//
//void cats::print() const
//{
//    cout << "This your cat : " << endl;
//    cout << "the fourrure color of the cat is : " << Fur_Colour << endl;
//    cout << "the eye color of the cat is : " << eye_Colour << endl;
//    cout << "the hair length of the cat is : " << hair_length << endl;
//}
//
//cats::~cats()
//{
//    cout << "The cat has died " << endl;
//}
//void check(int number, cats *arr[])
//{
//    int black_hair = 0, grey_hair = 0, brown_hair = 0, black_green = 0, black_blue = 0, black_brown = 0;
//
//    for (int count = 0; count < number; count++)
//    {
//
//        string hair = "";
//        string eye = "";
//        hair = arr[count]->get_Fur_Colour();
//        eye = arr[count]->get_eye_Colour();
//        if (hair == "Black")
//        {
//            black_hair++;
//        }
//        else
//        {
//            if (hair == "Grey")
//            {
//                grey_hair++;
//            }
//            else
//            {
//                if ((hair) == "Brown")
//                {
//                    brown_hair++;
//                }
//                else
//                {
//                    if ((eye == "Green") && (hair == "Black"))
//                    {
//                        black_green++;
//                    }
//                    else
//                    {
//                        if ((hair == "Black") && eye == "Blue")
//                        {
//                            black_blue++;
//                        }
//                        else
//                        {
//                            if ((hair == "Black") && eye == "Brown")
//                                black_brown++;
//                        }
//                    }
//                }
//            }
//        }
//        black_brown++;
//    }
//    if ((grey_hair > brown_hair) && (brown_hair != 0 && grey_hair != 0))
//
//        cout << "the gray cats fight with the brown cats " << endl;
//
//    if ((black_green >= 1 && black_blue >= 1) && (black_brown == 1))
//    {
//
//        cout << "there is a fight ";
//    }
#include <iostream>
#include "cats.h"
using namespace std;

string cats::get_hair_length() const
{
    return hair_length;
}

string cats::get_Fur_Colour() const
{
    return Fur_Colour;
}

string cats::get_eye_Colour() const
{
    return eye_Colour;
}

cats::cats()
{
    set_Fur_Colour();
    set_hair_length();
    set_eye_Colour();
}

void cats::set_Fur_Colour()
{
    int x = rand() % 3;
    if (x == 0)
        Fur_Colour = "Brown";
    else if (x == 1)
        Fur_Colour = "Black";
    else
        Fur_Colour = "Grey";
}

void cats::set_eye_Colour()
{
    int x = rand() % 3;
    if (x == 0)
        eye_Colour = "Green";
    else if (x == 1)
        eye_Colour = "Blue";
    else
        eye_Colour = "Brown";
}

void cats::set_hair_length()
{
    hair_length = (rand() % 2 == 0) ? "short" : "long";
}

void cats::print() const
{
    cout << "This is your cat: " << endl;
    cout << "Fur color: " << Fur_Colour << endl;
    cout << "Eye color: " << eye_Colour << endl;
    cout << "Hair length: " << hair_length << endl;
}

cats::~cats()
{
    cout << "The cat has died." << endl;
}

void check(int number, cats *arr[])
{
    int black_hair = 0, grey_hair = 0, brown_hair = 0;
    int black_green = 0, black_blue = 0, black_brown = 0;

    for (int count = 0; count < number; count++)
    {
        if (!arr[count]) continue; // Ensure pointer is valid

        string hair = arr[count]->get_Fur_Colour();
        string eye = arr[count]->get_eye_Colour();

        if (hair == "Black") black_hair++;
        else if (hair == "Grey") grey_hair++;
        else if (hair == "Brown") brown_hair++;

        if (hair == "Black" && eye == "Green") black_green++;
        if (hair == "Black" && eye == "Blue") black_blue++;
        if (hair == "Black" && eye == "Brown") black_brown++;
    }

    if (grey_hair > brown_hair && brown_hair != 0)
        cout << "The grey cats fight with the brown cats." << endl;

    if (black_green >= 1 && black_blue >= 1 && black_brown >= 1)
        cout << "There is a fight!" << endl;
}

