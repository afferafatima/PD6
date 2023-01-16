#include <iostream>
using namespace std;
void status(int dif_time);
main()
{
    int hours, minutes, hr_arival, min_arival;
    cout << "Enter Exam starting time(hours) : ";
    cin >> hours;
    cout << "Enter Exam starting time(minutes) : ";
    cin >> minutes;
    cout << "Enter Student hour of arrival : ";
    cin >> hr_arival;
    cout << "Enter Student minutes of arrival : ";
    cin >> min_arival;
    int dif_time = ((hr_arival * 60) + (min_arival)) - ((hours * 60) + (minutes));

    status(dif_time);
}

void status(int dif_time)
{
    if (dif_time == 0)
    {
        cout << "ON TIME" << endl;
    }

    else if (dif_time <= 0 && dif_time > -30)
    {
        cout << "ON TIME" << endl;
        cout << (-1) * dif_time << " minutes early" << endl;
    }
    else if (dif_time <= 0 && dif_time > -60)
    {
        cout << "EARLY" << endl;
        cout << (-1) * dif_time << " minutes early" << endl;
    }

    else if (dif_time <= -60)
    {
        cout << "EARLY" << endl;

        dif_time = -dif_time;

        int hours = dif_time / 60;
        int minutes = dif_time - (hours * 60);

        cout << hours << " : " << minutes << " Hours before the start." << endl;
    }
    else
    {

        cout << "LATE" << endl;

        if (dif_time < 60)
        {
            cout << dif_time << " minutes late" << endl;
            return;
        }

        int hours = dif_time / 60;
        int minutes = dif_time - (hours * 60);

        cout << hours << " : " << minutes << " Hours after the start." << endl;
        ;
    }
}
