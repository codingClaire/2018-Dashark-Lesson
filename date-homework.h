#include<iostream>
using spacename std;

class Date {

public:

  Date(int y, int m, int d);

  ~Date();


  void nextDay();
  {
  	if (m==12&&d==31)
  	{
  		y++;m=1;d=1;
	}
	else if (m==2)
  }

  void previousDay();

  bool equal(Date other);

  void show();

private:

  int year;

  int month;

  int day;

};



int main() {

  Date today(2018,3,20);

  Date day(2018,3,20);

  day.show();

  for(int i=0;i<30;i++)

    day.nextDay();

  day.show();

  for(int i=0;i<30;i++)

    day.previousDay();

  day.show();

  if(day.equal(today))

    printf("Very Good!\n");

  else

    printf("Very Bad!\n");

  return 0;

}
