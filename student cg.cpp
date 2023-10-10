#include <iostream>
using namespace std;
struct student{
   string id;
   int semester;
   int creditcomplete;
   float cgpa;
};
int main ()
{

student s[10];
s[1].id="22-4735-2";
s[1].semester=2;
s[1].creditcomplete=30;
s[1].cgpa=4.00;

s[2].id="22-4241-2";
s[2].semester=3;
s[2].creditcomplete=40;
s[2].cgpa=4.00;

s[3].id="22-4724-2";
s[3].semester=4;
s[3].creditcomplete=52;
s[3].cgpa=3.75;


s[4].id="22-2342-2";
s[4].semester=5;
s[4].creditcomplete=60;
s[4].cgpa=3.70;


s[5].id="22-4312-2";
s[5].semester=6;
s[5].creditcomplete=65;
s[5].cgpa=3.75;

s[6].id="22-2867-2";
s[6].semester=7;
s[6].creditcomplete=70;
s[6].cgpa=3.50;

s[7].id="23-2142-3";
s[7].semester=8;
s[7].creditcomplete=70;
s[7].cgpa=3.57;

s[8].id="23-2356-2";
s[8].semester=4;
s[8].creditcomplete=60;
s[8].cgpa=3.80;

s[9].id="22-2629-2";
s[9].semester=6;
s[9].creditcomplete=60;
s[9].cgpa=4.00;


for (int i = 0; i < 10; i++) {

 if (s[i].cgpa >= 3.75) {
   cout<< "student ID:" << s[i].id<<endl;
}
}
 for (int i=0; i < 10; i++)  {


 if (s[i].creditcomplete >=28 &&  s[i].semester >=2) {

     cout<< "schoolership student" << s[i].id<<endl;
 }
 }

 for (int i=0; i < 10; i++)  {


 if (s[i].creditcomplete >=50) {

     cout<< "student_ID" << s[i].id<<endl;
 }



 }


}
