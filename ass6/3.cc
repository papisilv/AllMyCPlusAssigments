#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class dayType{
    public:
        //string weekDays[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" ,"Saturday"};
        //static string weekDays[7];
        void print() const; /// Print the data                      !
        string nextDay() const; /// Get Next Day                    !!
        string prevDay() const;/// Get Previous Day                 !!
        void addDay(int nDays); /// Add days to get futher days     !!   
        void setDay(string d); //Set the Day                        !!
        string getDay() const;//Get the day                         !!
        dayType();   ///Empty/Default constructor                   !!
        dayType(string d); //Constructor                            !!
    private:
        string weekDay;
};

string weekDays[7]={"SUN","MON","TUE","WED","THU","FRI","SAT"};

void dayType::print() const{
    cout << "The current day now is " << weekDay;
    for (int i = 0; i < 7; i++){
        if(weekDay == weekDays[i]){
            cout << " yesterday was " << weekDays[(6+i)%7] << " and tomorrow is " << weekDays[(i+1)%7] << endl;
        }
    }  
}

string dayType::nextDay() const{
    string data;
    if(weekDay == weekDays[6]){
        data = weekDays[0];
    } else {
        for (int i=0; i < 6; i++){
            if (weekDay == weekDays[i]){
                data= weekDays[(i+1)%7];
                return data;
            }
        }
    }
    return data;
}

string dayType::prevDay() const{
    string data;
    if(weekDay == weekDays[0]){
        data = weekDays[6];
    } else {
        for (int i=1; i < 7; i++){
            if (weekDay == weekDays[i]){
                data= weekDays[(6+i)%7];
                return data;
            }
        }
    }
    return data;
}

void  dayType::addDay(int nDays){weekDay = weekDays[(6+nDays)%7];}

void dayType::setDay(string d){weekDay=d;}

string dayType::getDay() const{return weekDay;}

dayType::dayType(){weekDay="SUN";}

dayType::dayType(string d){weekDay=d;}


int main(){
    int nDays =-3;
    dayType day;
    cout << "Defaul day is set to " << day.getDay()<<endl;
    cout << "Yesterday was "<< day.prevDay()<< ". Today is " << day.getDay()<<". Tomorrow will be " << day.nextDay()<< ". " <<endl;
    day.setDay("MON");
    cout << "Yesterday was "<< day.prevDay()<< ". Today is " << day.getDay()<<". Tomorrow will be " << day.nextDay()<< ". " <<endl;
    day.setDay("TUE");
    cout << "Yesterday was "<< day.prevDay()<< ". Today is " << day.getDay()<<". Tomorrow will be " << day.nextDay()<< ". " <<endl;
    day.setDay("WED");
    cout << "Yesterday was "<< day.prevDay()<< ". Today is " << day.getDay()<<". Tomorrow will be " << day.nextDay()<< ". " <<endl;
    day.setDay("THU");
    cout << "Yesterday was "<< day.prevDay()<< ". Today is " << day.getDay()<<". Tomorrow will be " << day.nextDay()<< ". " <<endl;
    day.setDay("FRI");
    cout << "Yesterday was "<< day.prevDay()<< ". Today is " << day.getDay()<<". Tomorrow will be " << day.nextDay()<< ". " <<endl;
    day.setDay("SAT");
    cout << "Yesterday was "<< day.prevDay()<< ". Today is " << day.getDay()<<". Tomorrow will be " << day.nextDay()<< ". " <<endl;
    day.print();
    day.addDay(nDays);
    cout << "Plus "<< nDays<< " days is " << day.getDay()<< endl;   
    return 0;
}
