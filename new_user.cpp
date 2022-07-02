#include <iostream>
#include <cstdio>  // for using gets and puts in built functions
#include <cstring> // for using string in built functions
using namespace std;

// class Main_Page; // forward declaration
class Account
{
public:
    void login()
    {
        char username[26];
        long long password;
        char predefined_username[26] = "yuvrajsingh2002";
        long long predefined_password = 012002;
        int incorrect = 0;
        char new_username[26];
        long long new_password;

        cout << endl;
        cout << "     ENTER YOUR LOGIN DETAILS\n";

    again_enter_login: // goto statement
        cout << "     ENTER USERNAME : ";
        getchar();
        gets(username);
        cout << "     ENTER PASSWORD : ";
        cin >> password;

        // now we will compare if user entered and actual same or not
        // 1. Compare strings ( for loop or inbuilt function)
        int check_username = strcmp(predefined_username, username);
        if (check_username == 0) // means strings are same
        {
            // 2 / compare password
            if (predefined_password == password)
            {
                cout << endl;
                cout << "     LOGGED IN SUCCESFULLY !!\n";
                cout << endl;
                incorrect = 0;
            }
        }
        else
        {
            if (incorrect < 1)
            {
                cout << endl;
                cout << "     INCORRECT USERNAME (Try Again !!)\n";
                cout << "     \n";
                incorrect++;
                goto again_enter_login;
            }
            else
            {
                cout << endl;
                cout << endl;
                cout << "     YOU ENTERED LOGIN DETAILS WRONG 2 TIMES !!\n";

                cout << "     ENTER THE LOGIN DETIALS WHICH YOU WANT TO UPDATE\n";
                cout << endl;
                cout << "     ENTER NEW USERNAME : ";
                getchar();
                gets(new_username);
                cout << "     ENTER NEW PASSWORD : ";
                cin >> new_password;

                // now we will update login detials
                for (int i = 0; i < 26; i++)
                {
                    predefined_username[i] = new_username[i];
                }
                predefined_password = new_password;
                cout << endl;
                cout << "     YOUR LOGIN DETIALS HAS BEEN UPDATED !!\n";
                cout << "     Login with the new crediantials";
                cout << endl;
                goto again_enter_login;
            }
        }
    }

public:
    void signup()
    {
        char username[26];
        long long password;
        int age; // will put restriction
        char gender[15];
        char male_gender[5] = "MALE";
        char female_gender[7] = "FEMALE";
        char other_gender[6] = "OTHER";
        char email[30];
        long long phone_number;

        cout << endl;
        cout << "     ENTER SOME BASIC DETAILS BEFORE STARTING\n";
        cout << endl;

    again_enter_basic_details:
        cout << "     ENTER USERNAME : ";
        getchar(); // to avoid the skipping of the gets function
        gets(username);
        cout << "     ENTER PASSWORD : ";
        cin >> password;

        cout << "     ENTER AGE : "; // put condition of age
        cin >> age;
        if (age < 18)
        {

            cout << "     #########################################\n";

            cout << endl;
            cout << "     SORRY YOU CAN'T ACCESS THIS WEBSITE !!\n";

            cout << endl;
            cout << "     #########################################\n";
            cout << endl;
            goto again_enter_basic_details;
        }
        else if (age > 43)
        {
            cout << "     #########################################\n";

            cout << endl;
            cout << "     SORRY YOU CAN'T ACCESS THIS WEBSITE !!\n";

            cout << endl;
            cout << "     #########################################\n";
            cout << endl;
            goto again_enter_basic_details;
        }

    again_ask_gender:
        cout << "     ENTER GENDER  (MALE , FEMALE , OTHER ) : "; // put check on user input
        getchar();
        gets(gender);
        // Now we will check whether user entered male , female or other
        int check_male_gender = strcmp(male_gender, gender);
        int check_female_gender = strcmp(female_gender, gender);
        int check_other_gender = strcmp(other_gender, gender);

        if (check_male_gender == 0)
        {
            cout << "     ENTER EMAIL : ";
            cin >> email;

        again_enter_phone_number_male:
            cout << "     ENTER PHONE NUMBER : ";
            cin >> phone_number;
            int phone_number_counter = 0;

            // now check if number is more than 10 then give error
            while (phone_number > 0)
            {

                phone_number = (phone_number / 10); // it will update and will run the while loop
                phone_number_counter++;
            }
            if (phone_number_counter > 10)
            {
                cout << endl;
                cout << "     ERROR BECAUSE OF MORE THAN 10 DIGITS\n";
                goto again_enter_phone_number_male;
            }
            else if (phone_number_counter < 0)
            {
                cout << endl;
                cout << "     ERROR BECAUSE OF MORE THAN 10 DIGITS\n";
                goto again_enter_phone_number_male;
            }
        }
        else if (check_female_gender == 0)
        {
            cout << "     ENTER EMAIL : ";
            cin >> email;
        again_enter_phone_number_female:
            cout << "     ENTER PHONE NUMBER : ";
            cin >> phone_number;
            int phone_number_counter = 0;

            // now check if number is more than 10 then give error
            while (phone_number > 0)
            {

                phone_number = (phone_number / 10); // it will update and will run the while loop
                phone_number_counter++;
            }
            if (phone_number_counter > 10)
            {
                cout << endl;
                cout << "     ERROR BECAUSE OF MORE THAN 10 DIGITS\n";
                goto again_enter_phone_number_female;
            }
            else if (phone_number_counter < 0)
            {
                cout << endl;
                cout << "     ERROR BECAUSE OF MORE THAN 10 DIGITS\n";
                goto again_enter_phone_number_female;
            }
        }
        else if (check_other_gender == 0)
        {

            cout << "     ENTER EMAIL : ";
            cin >> email;
        again_enter_phone_number_other:
            cout << "     ENTER PHONE NUMBER : ";
            cin >> phone_number;
            int phone_number_counter = 0;

            // now check if number is more than 10 then give error
            while (phone_number > 0)
            {

                phone_number = (phone_number / 10); // it will update and will run the while loop
                phone_number_counter++;
            }
            if (phone_number_counter > 10)
            {
                cout << endl;
                cout << "     ERROR BECAUSE OF MORE THAN 10 DIGITS\n";
                goto again_enter_phone_number_other;
            }
            else if (phone_number_counter < 0)
            {
                cout << endl;
                cout << "     ERROR BECAUSE OF MORE THAN 10 DIGITS\n";
                goto again_enter_phone_number_other;
            }
        }
        else if (check_female_gender != 0 || check_male_gender != 0 || check_other_gender != 0)
        {
            cout << endl;
            cout << "     INVALID INPUT !!\n";
            goto again_ask_gender;
        }
    }

    // declaration of friend function
    // friend void common(Main_Page M, Account A);
};

class Main_Page
{
public:
    void user_interface()
    {
    again_user_interface:
        cout << endl;
        cout << "     WELCOME TO THE PLACE WHERE YOU WILL FIND YOUR ONE";
        cout << endl;
        int choose;
        cout << "     1 : FIND YOUR LOVE\n";
        cout << "     2 : CONTROL WHO SEES YOU\n";
        cout << "     3 : ACCOUNT SETTINGS\n";
        cout << "     4 : COMMUNITY GUIDLINES\n";
        cout << "     ENTER : ";
        cin >> choose;

        switch (choose)
        {
        case 1:
            find_love();

            break;

        case 2:
            control_who_sees_you();

            break;

        case 3:
            account_settings();
            break;

        case 4:
            community_guidlines();
            break;

        default:
            cout << "     ENTER VALID ANSWER !!\n";
            goto again_user_interface;
            break;
        }
    }

public:
    void community_guidlines()
    {
        cout << "     COMMUNITY GUIDLINES : ";
        cout << endl;
        cout << endl;
        cout << "     THIS WEBSITE IS NOT FOR : \n";
        cout << endl;
        cout << "     We are not asking you to comb your hair to one side or even speak in full sentences; but please keep it classy and appropriate for public consumption. .";
        cout << endl;
        cout << endl;

        cout << "     Any content that promotes, advocates for, or condones racism, bigotry, hatred, or violence against individuals or groups based on factors like (but not limited to) race.";
        cout << endl;
        cout << endl;

        cout << "     Do not publicly broadcast any private information, yours or anyone else . This includes social security numbers, passports, passwords, financial information or unlisted contact information.";
        cout << endl;
        cout << endl;

        cout << "     Promoting or advocating for commercial sexual services, human trafficking or other non-consensual sexual acts is strictly prohibited and will result in your account being banned from Tinder.";
        cout << endl;
        cout << endl;
        user_interface();
    }

public:
    void find_love()
    {
        char name[26];
        int age_pref;
        int distance_pref;
        int gender_pref;
        int passion[5];

        cout << endl;
        cout << "     ENTER YOUR DATING IDENTITY\n";
        cout << endl;

        cout << "     ENTER NAME WITH WHICH YOU WANT TO BE DISCOVERED : ";
        getchar();
        gets(name);

    again_renew_preferences:
        cout << endl;
        cout << "     ENTER YOUR AGE(PREFERANCE)\n"; // make range of age

        cout << "     1 ----> (20-27)YEARS\n";
        cout << "     2 ----> (28-35)YEARS\n";
        cout << "     3 ----> (36-43)YEARS\n";
        cout << "     MY PREFERENCE : ";
        cin >> age_pref;
        if (age_pref == 1 || age_pref == 2 || age_pref == 3)
        {
            cout << endl;
            cout << "     ENTER THE DISTANCE RANGE\n";
            cout << "     1  ---->  0-100 km\n";
            cout << "     2  ---->  100-500 km\n";
            cout << "     3  ---->  500-1000 km\n";
            cout << "     4  ---->  1000-5000 km\n";
            cout << "     ENTER : ";
            cin >> distance_pref;

        again_ask_gender_preferance:
            cout << endl;
            cout << "     ENTER THE GENDER YOU ARE LOOKING FOR\n";
            cout << "     1 ----> MALE\n";
            cout << "     2 ----> FEMALE\n";
            cout << "     MY PREFERENCE : ";
            cin >> gender_pref;
            if (gender_pref == 1 || gender_pref == 2)
            {
            again_ask_passion:
                cout << "     ENTER YOUR PASSIONS(ANY 5)\n";
                cout << endl;
                cout << endl;
                cout << "     HEALTH AND WELLBEING             LEARNING AND GROWING               WORKD AND SERVICE                        ";
                cout << endl;
                cout << endl;
                cout << "     1  :  SELF CARE                 5  :  PERSONAL FINANCE             9  :  LEADERSHIP\n";
                cout << "     2  :  SPORTS                    6  :  KNOWLEDGE                    10 :  COACHING\n";
                cout << "     3  :  YOGA                      7  :  PRACTICING                   11 :  DONATING\n";
                cout << "     4  :  BIKING                    8  :  READING                      12 :  TRAINING AND TEACHING\n";
                cout << endl;
                cout << endl;

                cout << "     MY PASSIONS : ";
                for (int i = 0; i < 5; i++)
                {
                    cin >> passion[i];
                }

                // display the passion entered

                cout << "     THE PASSION YOU CHOSE : ";
                for (int k = 0; k < 5; k++)
                {
                    cout << passion[k];
                    cout << "  ";
                }

                int passion_satisfied;

            ask_passion_satisfied:
                cout << endl;
                cout << endl;
                cout << "     ARE YOU SATISFIED WITH YOUR PASSIONS ? \n";
                cout << "     1 ----> YES\n";
                cout << "     2 ----> NO\n";
                cout << "     MY CHOICE : ";
                cin >> passion_satisfied;

                if (passion_satisfied == 1) // go further
                {
                    cout << endl;
                    cout << "     FINDING MATCHES FOR YOU !!\n";
                    cout << endl;

                    people_who_matches(age_pref, distance_pref, gender_pref); // searching function
                }
                else if (passion_satisfied == 2) // agian ask for passion
                {
                    goto again_ask_passion;
                }
                else
                {
                    cout << "     ENTER VALID ANSWER\n";
                    goto ask_passion_satisfied;
                }
            }
            else
            {
                cout << "     ######################################\n";
                cout << endl;
                cout << "     SORRY FOR INCONVINIENCE BUT CHOOSE FROM THE LIST ABOVE !!\n";
                goto again_renew_preferences;
            }
        }
        else
        {
            cout << "KINDLY CHOOSE THE GENDER PREFERANCE OUT OF MALE/FEMALE !!\n";
            goto again_ask_gender_preferance;
        }
    }

public:
    void people_who_matches(int age_pref, int distance_pref, int gender_pref)
    {
        int age = age_pref;
        int distance = distance_pref;
        int gender = gender_pref;
        // list of people
        if (age == 1) // 1st limit of the age
        {
            if (distance == 1) // 1st limit for the distance
            {
                if (gender == 1)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : ANSHUL SHARMA\n";
                    cout << "     AGE : 20 YEARS\n";
                    cout << "     WITHIN : 50km\n";
                    cout << "     GENDER : MALE\n";
                    cout << "     PASSIONS : SELFCARE , SPORTS , READING NOVELS\n";
                    cout << endl;
                    final_contact();
                }
                else if (gender == 2)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : KOMAL SHARMA\n";
                    cout << "     AGE : 21 YEARS\n";
                    cout << "     WITHIN : 70km\n";
                    cout << "     GENDER : FEMALE\n";
                    cout << "     PASSIONS : YOGA ,BIKING , GARDENING\n";
                    cout << endl;
                    final_contact();
                }
            }
            else if (distance == 2)
            {
                if (gender == 1)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : YUVRAJ SINGH\n";
                    cout << "     AGE : 22 YEARS\n";
                    cout << "     WITHIN : 150km\n";
                    cout << "     GENDER : MALE\n";
                    cout << "     PASSIONS : SPORTS , BOOK READING , PODCAST LISTENER , CODING\n";
                    cout << endl;
                    final_contact();
                }
                else if (gender == 2)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : SANJANA\n";
                    cout << "     AGE : 23 YEARS\n";
                    cout << "     WITHIN : 470km\n";
                    cout << "     GENDER : FEMALE\n";
                    cout << "     PASSIONS : YOGA ,TRAVELLING , PLANTING\n";
                    cout << endl;
                    final_contact();
                }
            }
            else if (distance == 3)
            {
                if (gender == 1)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : BHAVJOT SINGH\n";
                    cout << "     AGE : 24 YEARS\n";
                    cout << "     WITHIN : 600km\n";
                    cout << "     GENDER : MALE\n";
                    cout << "     PASSIONS : ONLINE GAMER , SPORT ENTHUSIAST\n";
                    cout << endl;
                    final_contact();
                }
                else if (gender == 2)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : GURLEEN KAUR\n";
                    cout << "     AGE : 25 YEARS\n";
                    cout << "     WITHIN : 960km\n";
                    cout << "     GENDER : FEMALE\n";
                    cout << "     PASSIONS : TRAVELLING , PAINTING\n";
                    cout << endl;
                    final_contact();
                }
            }
            else if (distance == 4)
            {
                if (gender == 1)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : SHIVAM PANDEY\n";
                    cout << "     AGE : 26 YEARS\n";
                    cout << "     WITHIN : 3000km\n";
                    cout << "     GENDER : MALE\n";
                    cout << "     PASSIONS : CRICKET LOVER , CODING , BOOKS , TRAVELLING\n";
                    cout << endl;
                    final_contact();
                }
                else if (gender == 2)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : ANCHAL SHARMA\n";
                    cout << "     AGE : 27 YEARS\n";
                    cout << "     WITHIN : 5000km\n";
                    cout << "     GENDER : FEMALE\n";
                    cout << "     PASSIONS : TRAVELLING , PAINTING, SELFCARE\n";
                    cout << endl;
                    final_contact();
                }
            }
            else
            {
                cout << "     SORRY THERE IS NO MATCH FOR YOU BECAUSE OF DISTANCE !!\n";
            }
        }

        else if (age == 2) // 2nd limit of the age
        {
            if (distance == 1) // 1st limit for the distance
            {
                if (gender == 1)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : AJAY SHARMA\n";
                    cout << "     AGE : 28 YEARS\n";
                    cout << "     WITHIN : 50km\n";
                    cout << "     GENDER : MALE\n";
                    cout << "     PASSIONS : SELFCARE , SPORTS , READING NOVELS\n";
                    cout << endl;
                    final_contact();
                }
                else if (gender == 2)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : GEETIKA SAIGAL\n";
                    cout << "     AGE : 29 YEARS\n";
                    cout << "     WITHIN : 70km\n";
                    cout << "     GENDER : FEMALE\n";
                    cout << "     PASSIONS : YOGA ,BIKING , GARDENING\n";
                    cout << endl;
                    final_contact();
                }
            }
            else if (distance == 2)
            {
                if (gender == 1)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : AKULA PARISHIT\n";
                    cout << "     AGE : 30 YEARS\n";
                    cout << "     WITHIN : 150km\n";
                    cout << "     GENDER : MALE\n";
                    cout << "     PASSIONS : SPORTS , BOOK READING , PODCAST LISTENER , CODING\n";
                    cout << endl;
                    final_contact();
                }
                else if (gender == 2)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : ARSHDIVYA\n";
                    cout << "     AGE : 31 YEARS\n";
                    cout << "     WITHIN : 470km\n";
                    cout << "     GENDER : FEMALE\n";
                    cout << "     PASSIONS : YOGA ,TRAVELLING , PLANTING\n";
                    cout << endl;
                    final_contact();
                }
            }
            else if (distance == 3)
            {
                if (gender == 1)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : SHREYAS\n";
                    cout << "     AGE : 32 YEARS\n";
                    cout << "     WITHIN : 600km\n";
                    cout << "     GENDER : MALE\n";
                    cout << "     PASSIONS : ONLINE GAMER , SPORT ENTHUSIAST\n";
                    cout << endl;
                    final_contact();
                }
                else if (gender == 2)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : MUSKAN SHARMA\n";
                    cout << "     AGE : 33 YEARS\n";
                    cout << "     WITHIN : 960km\n";
                    cout << "     GENDER : FEMALE\n";
                    cout << "     PASSIONS : TRAVELLING , PAINTING\n";
                    cout << endl;
                    final_contact();
                }
            }
            else if (distance == 4)
            {
                if (gender == 1)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : HARIANSH SINGH\n";
                    cout << "     AGE : 34 YEARS\n";
                    cout << "     WITHIN : 3000km\n";
                    cout << "     GENDER : MALE\n";
                    cout << "     PASSIONS : CRICKET LOVER , CODING , BOOKS , TRAVELLING\n";
                    cout << endl;
                    final_contact();
                }
                else if (gender == 2)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : JASMEEN KAUR\n";
                    cout << "     AGE : 35 YEARS\n";
                    cout << "     WITHIN : 5000km\n";
                    cout << "     GENDER : FEMALE\n";
                    cout << "     PASSIONS : TRAVELLING , PAINTING, SELFCARE\n";
                    cout << endl;
                    final_contact();
                }
            }
            else
            {
                cout << "     SORRY THERE IS NO MATCH FOR YOU BECAUSE OF DISTANCE !!\n";
            }
        }

        else if (age == 3) // 3rd limit of the age
        {
            if (distance == 1) // 1st limit for the distance
            {
                if (gender == 1)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : AISHVEER SINGH\n";
                    cout << "     AGE : 36 YEARS\n";
                    cout << "     WITHIN : 50km\n";
                    cout << "     GENDER : MALE\n";
                    cout << "     PASSIONS : SELFCARE , SPORTS , READING NOVELS\n";
                    cout << endl;
                    final_contact();
                }
                else if (gender == 2)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : SUMEKSHA\n";
                    cout << "     AGE : 37 YEARS\n";
                    cout << "     WITHIN : 70km\n";
                    cout << "     GENDER : FEMALE\n";
                    cout << "     PASSIONS : YOGA ,BIKING , GARDENING\n";
                    cout << endl;
                    final_contact();
                }
            }
            else if (distance == 2)
            {
                if (gender == 1)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : ANKIT THAKUR\n";
                    cout << "     AGE : 38 YEARS\n";
                    cout << "     WITHIN : 150km\n";
                    cout << "     GENDER : MALE\n";
                    cout << "     PASSIONS : SPORTS , BOOK READING , PODCAST LISTENER , CODING\n";
                    cout << endl;
                    final_contact();
                }
                else if (gender == 2)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : REHMAT KAUR\n";
                    cout << "     AGE : 39 YEARS\n";
                    cout << "     WITHIN : 470km\n";
                    cout << "     GENDER : FEMALE\n";
                    cout << "     PASSIONS : YOGA ,TRAVELLING , PLANTING\n";
                    cout << endl;
                    final_contact();
                }
            }
            else if (distance == 3)
            {
                if (gender == 1)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : VINEET SHARMA\n";
                    cout << "     AGE : 40 YEARS\n";
                    cout << "     WITHIN : 600km\n";
                    cout << "     GENDER : MALE\n";
                    cout << "     PASSIONS : ONLINE GAMER , SPORT ENTHUSIAST\n";
                    cout << endl;
                    final_contact();
                }
                else if (gender == 2)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : AVNEET\n";
                    cout << "     AGE : 41 YEARS\n";
                    cout << "     WITHIN : 960km\n";
                    cout << "     GENDER : FEMALE\n";
                    cout << "     PASSIONS : TRAVELLING , PAINTING\n";
                    cout << endl;
                    final_contact();
                }
            }
            else if (distance == 4)
            {
                if (gender == 1)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : TANISH THAKUR\n";
                    cout << "     AGE : 42 YEARS\n";
                    cout << "     WITHIN : 3000km\n";
                    cout << "     GENDER : MALE\n";
                    cout << "     PASSIONS : CRICKET LOVER , CODING , BOOKS , TRAVELLING\n";
                    cout << endl;
                    final_contact();
                }
                else if (gender == 2)
                {
                    cout << "     FINALLY MATCH FOUND !!\n";
                    cout << "     ****************************\n";
                    cout << "     NAME : SOHANA\n";
                    cout << "     AGE : 43 YEARS\n";
                    cout << "     WITHIN : 5000km\n";
                    cout << "     GENDER : FEMALE\n";
                    cout << "     PASSIONS : TRAVELLING , PAINTING, SELFCARE\n";
                    cout << endl;
                    final_contact();
                }
            }
            else
            {
                cout << "     SORRY THERE IS NO MATCH FOR YOU BECAUSE OF DISTANCE !!\n";
            }
        }

        else
        {
            cout << "     THERE IS NO MATCH FOR YOU BECAUSE OF AGE FACTOR\n";
        }
    }

public:
    void final_contact()
    {
        char ask_hi[3];
        char ask_valid_hi[3] = "HI";
        int check_hi;
        int ask_continue;
    again_ask_contact:
        cout << "     DO YOU WANT TO CONTACT HIM ? \n";
        cout << "     1 ----> YES EXCITED\n";
        cout << "     2 ----> NOT INTERESTED\n";
        cout << "     MY DECISION : ";
        cin >> ask_continue;
        cout << endl;
        if (ask_continue == 1)
        {

            cout << "     SAY (HI) \n";
        again_start_conversation:
            cout << "     START CONVERSATION : ";
            getchar();
            gets(ask_hi);
            int check = strcmp(ask_valid_hi, ask_hi);

            if (check == 0)
            {
                cout << endl;
                cout << "     HELLO HOW ARE YOU ?";
                cout << endl;
                cout << endl;
                cout << "     GOOD LUCK NOW ITS UPTO YOU \n";
            }
            else if (check == 1)
            {
                cout << "     SAY HI ONLY TO START THE CONVERSATION";
                cout << endl;
                goto again_start_conversation;
            }
        }
        else if (ask_continue == 2)
        {
            cout << "     UPDATE YOUR PREFERENCES !!\n";
            find_love();
        }
        else
        {
            cout << "     ENTER VALID NUMBER !!\n";
            goto again_ask_contact;
        }
    }

public:
    void control_who_sees_you()
    {
        int ask_upgrade;

        cout << endl;
        cout << "     *********************************************\n";
        cout << "     TO SEE WHO STALK YOU PURCHASE PLUS PACKAGE\n";

        cout << "     FEATURES : \n";
        cout << "     1. Control who sees you\n";
        cout << "     2. Unlimited likes\n";
        cout << "     3. Control Your Life\n";
        cout << "     4. Like profile around the world\n";
        cout << "     5. Unlimited Rewinds\n";
        cout << "     6. Hide Advertisement\n";
        cout << endl;

    again_ask_about_package:
        cout << "     Do you want to upgrade to Plus Package ? :\n";
        cout << "     1 : YES\n";
        cout << "     2 : NO\n";
        cout << "     MY CHOICE : ";
        cin >> ask_upgrade;

        if (ask_upgrade == 1)
        {
            int ask_package;
            int cont;
            cout << endl;
        ask_package_again:
            cout << "     WHICH PACKAGE DO YOU WANT TO CHECKOUT\n";
            cout << "     1 : MOST POPULAR\n";
            cout << "     2 : BEST VALUE\n";
            cout << "     3 : MOST AFFORDABLE\n";
            cout << "     MY CHOICE : ";
            cin >> ask_package;
            if (ask_package == 1)
            {
                cout << endl;
                cout << "     Features :  \n";
                cout << endl;
                cout << "     6 Months\n";
                cout << "     Rs 229.65/mo\n";
                cout << "     Save 33%\n";
                cout << "     Rs 1,377.92\n";
                cout << "     Do you want to continue ? :\n";
                cout << "     1 ----> YES\n";
                cout << "     2 ----> NO\n";
                cout << "     ENTER : ";
                cin >> cont;
                if (cont == 1)
                {
                    complete_payment(1377.92);
                }
                else if (cont == 2)
                {
                    user_interface();
                }
                else
                {
                    cout << "ENTER VALID ANSWER\n";
                    goto ask_package_again;
                }
            }
            else if (ask_package == 2)
            {
                cout << "     Features :  \n";
                cout << endl;
                cout << "     12 Months\n";
                cout << "     Rs 217.65/mo\n";
                cout << "     Save 50%\n";
                cout << "     Rs 2,067.92\n";
                cout << "     Do you want to continue ? :\n";
                cout << "     1 ----> YES\n";
                cout << "     2 ----> NO\n";
                cout << "     ENTER : ";
                cin >> cont;
                if (cont == 1)
                {
                    complete_payment(2067.92);
                }
                else if (cont == 2)
                {
                    user_interface();
                }
                else
                {
                    cout << "     ENTER VALID ANSWER\n";
                    goto ask_package_again;
                }
            }
            else if (ask_package == 3)
            {
                cout << "     Features :  \n";
                cout << endl;
                cout << "     1 Months\n";
                cout << "     Rs 343.65/mo\n";
                cout << "     Rs 1343.91\n";
                cout << "     Do you want to continue ? :\n";
                cout << "     1 ----> YES\n";
                cout << "     2 ----> NO\n";
                cout << "     ENTER : ";
                cin >> cont;
                if (cont == 1)
                {
                    complete_payment(1343.91);
                }
                else if (cont == 2)
                {
                    user_interface();
                }
                else
                {
                    cout << "     ENTER VALID ANSWER\n";
                    goto ask_package_again;
                }
            }
            else
            {
                cout << "     ENTER VALID OPTION\n";
                cout << endl;
                goto ask_package_again;
            }
        }
        else if (ask_upgrade == 2)
        {
            user_interface(); // again call the member function
        }
        else
        {
            cout << "     ENTER VALID ANSWER !!\n";
            goto again_ask_about_package;
        }
    }

public:
    void complete_payment(float total) // for doing the payment
    {
        char cardholder_name[26];
        int card_number[16]; // this is the default size of the card holder number

        int card_number_counter = 0;
        int zip_code, cvv;
        char buy[8] = "BUY NOW";
        char ask_buy[8];
        int ask_buy_check;
        int cvv_counter = 0;

        cout << endl;
        cout << "     HI! Mate your total : " << total;
        cout << endl;
        cout << "     ENTER CARD HOLDER(NAME) : ";
        getchar();
        gets(cardholder_name);

        // /* put a condiiton to check the total digits in the card number
        // 1. If the total digits are more than 16 give error and return to enter card number
        // 2. If digits are 16 then continue */

    again_ask_card_number:
        cout << "     CARD HOLDER NUMBER: ";
        for (int i = 0; i < 16; i++)
        {
            cin >> card_number[i]; // took the input from user
        }

        // count total digits
        for (int i = 0; i < 16; i++)
        {
            if (card_number[i] != '\0')
            {
                card_number_counter++;
            }
        }

        if (card_number_counter > 16)
        {
            cout << "ENTER VALID CARD NUMBER !!";
            goto again_ask_card_number;
        }

    again_ask_zip_code:
        cout << "     ENTER ZIP CODE : ";
        cin >> zip_code;

        // put a condiiton on the zip code
        int zip_code_counter;
        while (zip_code)
        {
            zip_code = zip_code / 10;
            zip_code_counter++;
        }
        if (zip_code_counter > 6)
        {
            cout << "ENTER VALID ZIP CODE(YOU EXCEEDED LIMIT OF 6 DIGITS)";
            goto again_ask_zip_code;
        }

    again_enter_cvv:
        cout << "     ENTER CVV : ";
        cin >> cvv;

        // CVV ONLY 3 WORDS
        while (cvv > 0)
        {
            cvv = cvv / 10;
            cvv_counter++;
        }
        if (cvv_counter > 3)
        {
            cout << "ENTER VALID CVV NUMBER\n";
            goto again_enter_cvv;
        }
        cout << "     ENTER (BUY NOW) IF YOU WANT TO PROCEED : ";
        getchar();
        gets(ask_buy);

        // check if he entered or not
        ask_buy_check = strcmp(buy, ask_buy);
        if (ask_buy_check == 0)
        {
            cout << "     CONGRATULATIONS YOU HAVE BOUGHT PLUS PACKAGE\n";
            cout << "     *********************************************\n";
            user_interface();
        }
        else if (ask_buy_check == 1)
        {
            cout << "     YOU ARE BEING REDIRECTED TO THE MAIN PAGE !!!!\n";
            user_interface();
        }
    }

public:
    void account_settings()
    {
        int account_confirmation;
    again_account_confirmation:
        cout << endl;
        cout << "     1   ---->   MANAGE EMAIL\n";
        cout << "     2   ---->   PUSH NOTIFICATIONS\n";
        cout << "     MY CHOICE : ";
        cin >> account_confirmation;

        if (account_confirmation == 1)
        {
            int manage_email_ask;
        again_ask_manage_email:
            cout << endl;
            cout << endl;
            cout << "     ENTER THE NUMBER WHICH (NOTIFICATION) YOU WANT TO ACTIVE\n";
            cout << "     1  ---->  NEW MATCHES\n";
            cout << "     2  ---->  MESSAGES\n";
            cout << "     3  ---->  PROMOTIONS\n";
            cout << "     ENTER : ";
            cin >> manage_email_ask;
            if (manage_email_ask == 1)
            {
                cout << "     NEW MATHCES NOTIFICATION SWITTCHED ON !!\n";
                user_interface();
            }
            else if (manage_email_ask == 2)
            {
                cout << "     MESSAGES NOTIFICATION SWITTCHED ON !!\n";
                user_interface();
            }
            else if (manage_email_ask == 3)
            {
                cout << "     PROMOTIONS NOTIFICATION SWITTCHED ON !!\n";
                user_interface();
            }
            else
            {
                cout << "     ENTER VALID NUMBER !!\n";
                goto again_account_confirmation;
            }
        }

        else if (account_confirmation == 2)
        {
            int push_notifications_ask;
        again_ask_post_notification:
            cout << "     ENTER THE NUMBER WHICH (NOTIFICATION) YOU WANT TO ACTIVE\n";
            cout << "     1  ---->  NEW MATCHES\n";
            cout << "     2  ---->  MESSAGES\n";
            cout << "     3  ---->  MESSAGE LIKES\n";
            cout << "     4  ---->  SUPER LIKES\n";
            cout << "     ENTER : ";
            cin >> push_notifications_ask;
            if (push_notifications_ask == 1)
            {
                cout << "     NEW MATHCES NOTIFICATION SWITTCHED ON\n";
                user_interface();
            }
            else if (push_notifications_ask == 2)
            {
                cout << "     NEW MATHCES NOTIFICATION SWITTCHED ON\n";
                user_interface();
            }
            else if (push_notifications_ask == 3)
            {
                cout << "     NEW MATHCES NOTIFICATION SWITTCHED ON\n";
                user_interface();
            }
            else if (push_notifications_ask == 4)
            {
                cout << "     NEW MATHCES NOTIFICATION SWITTCHED ON\n";
                user_interface();
            }
            else
            {
                cout << "     ENTER VALID NUMBER !!\n";
                goto again_ask_post_notification;
            }
        }
        else
        {
            cout << "     ENTER VALID NUMBER !!\n";
            goto again_account_confirmation;
        }
    }

    // declaration of friend function
    // friend void common(Main_Page M, Account A);
};

// void common(Main_Page M, Account A)
// {
// }

int main()
{
    Account A;   // created an object of the Account class
    Main_Page M; // created an object of Main page class

    cout << endl;
    cout << endl;
    cout << "     WELCOME TO PLACE TO FIND THE ONE FOR YOU\n";
    cout << endl;

    int ask;
ask_again:
    cout << "     1  ------>   NEW USER\n";
    cout << "     2  ------>   ALREADY A USER\n";
    cout << "     ENTER : ";
    cin >> ask;

    if (ask == 1)
    {
        A.signup();         // new user
        M.user_interface(); // user interface
    }
    else if (ask == 2)
    {
        A.login();          // existing user
        M.user_interface(); // user interface
    }

    else
    {
        cout << "     !! KINDLY ENTER THE VALID NUMBER !!\n";
        goto ask_again;
    }
    return 0;
}
