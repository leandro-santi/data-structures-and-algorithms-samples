#include<bits/stdc++.h>

// HAS TO FINISH THIS

using namespace std;

typedef struct Date{
    int year;
    int month;
    int day;
    int hour;
    int minute;
} Date;

void insert_date(Date *date){
    int year, month, day, hour, minute;
    cin >> year >> month >> day >> hour >> minute;

    date->year = year;
    date->month = month;
    date->day = day;
    date->hour = hour;
    date->minute = minute;
}

// void verify_intersection(){

// }

int main(){
    Date date_1, date_2, date_3, date_4;

    insert_date(&date_1);
    insert_date(&date_2);
    insert_date(&date_3);
    insert_date(&date_4);

    return 0;
}