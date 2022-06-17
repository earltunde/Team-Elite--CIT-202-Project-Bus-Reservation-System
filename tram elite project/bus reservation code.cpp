// GROUP NAME: TEAM ELITE 
// PROJECT NAME: BUS BOOKING/RESERVATION SYSTEM 
// COURSE: CIT 202
// DEPARTMENT: COMPUER SCIENCE
#include <conio.h>

#include <cstdio>

#include <iostream>

#include <string.h>

#include <cstdlib>

using namespace std;

// decleration of static integer
static int t = 0;
// the class consist of arrays of all the options available
class a

{
// the [] represent the size of each of the array
  char bus_number[5], bus_driver[10], bus_arrival[5], bus_depart[5], b_from[10], b_to[10], bus_seat[8][4][10];
// decleration of all the functions in the class as public with no return type
public:

  void add_new_number_of_bus();

  void reservation();

  void empty();

  void view();

  void avail();

  void position(int i);

}
// decleration of the no of buses in available
bus[5];
// decleration to make some design
void bus_line(char ch)

{

  for (int x=80;x>0;x--)

  cout<<ch;

}
// decleration of the option1
void a::add_new_number_of_bus()

{
// input the bus you want to drive 
  cout<<"Enter Bus Number: ";

  cin>>bus[t].bus_number;
// input the name of the driver that wants to drive the bus
  cout<<"\nEnter Driver's Name: ";

  cin>>bus[t].bus_driver;
// input the time you intend to arive at your desination 
  cout<<"\nArrival Time: ";

  cin>>bus[t].bus_arrival;
// inout the time you intend to take off
  cout<<"\nDeparture Time: ";

  cin>>bus[t].bus_depart;
// input the location you want to take off from
  cout<<"\nFrom: \t\t\t";

  cin>>bus[t].b_from;
// input the location you are going to
  cout<<"\nTo: \t\t\t";

  cin>>bus[t].b_to;
  
// calling the empty function
  bus[t].empty();
//  output  success
  cout<<"\New Bus Added Successfully \t\t\t";
// increase in the number of objects
  t++;

}
// decleration of reservation function
void a::reservation()

{
// decleration of the bus seat 
  int bus_seat;
// number of busses available
  char no[5];
// label name
  top:
// input the bus number you want to take 
  cout<<"Bus Number: ";

  cin>>no;

  int y;
// to see if the bus no is available 
  for(y=0;y<=t;y++)

  {

    if(strcmp(bus[y].bus_number, no)==0)

    break;

  }
// while loop used to take the seat number 
// while the bus is available 
  while(y<=t)

  {
// input the seat number you want
    cout<<"\nSeat Number: ";

    cin>>bus_seat;
// if the seat number is greater than 32 
    if(bus_seat>32)

    {

      cout<<"\nThere are only 32 Seats Available in this Bus.";

    }

    else
// input the passenger name
    {

    if (strcmp(bus[y].bus_seat[bus_seat/4][(bus_seat%4)-1], "Empty")==0)

      {

        cout<<"Enter Passenger's Name: ";

        cin>>bus[y].bus_seat[bus_seat/4][(bus_seat%4)-1];

        break;

      }
// but if the passenger name is taken then it should output taken 
    else

      cout<<"The Seat Number. is Already Reserved.\n";

      }

      }
// if you enter bus no greater than availble busses
    if(y>t)

    {

      cout<<"Enter Correct Bus Number.\n";
// the code then goes back to where the "top" label is located
      goto top;

    }

  }

// decleration of the empty function
void a::empty()

{
// for loop allocates the number of times empty will be printed if no input is chosen 
// the 2 for loop simply meant thant empty will be printed 32 times
  for(int x=0; x<8;x++)
// repeat the first for loop 8 times 
  {

    for(int z=0;z<4;z++)
// repeat the 2nd for loop 4 times 
    {
// print empty 8*4 times
      strcpy(bus[t].bus_seat[x][z], "Empty");

    }

  }

}
// decleraing the function to show seat reservation 
void a::view()

{

  int m;
// decleration of the number of buses
  char number[5];

  cout<<"Enter Bus Number: ";

  cin>>number;

  for(m=0;m<=t;m++)

  {
//compare if the bus number are the same with input number
    if(strcmp(bus[m].bus_number, number)==0)

    break;

  }

while(m<=t)

{
// output decoration
  bus_line('*');
// out putut bus detail
  cout<<"\nBus Number: \t"<<bus[m].bus_number

  <<"\tDriver: \t"<<bus[m].bus_driver<<"\t\tArrival Time: \t"

  <<bus[m].bus_arrival<<"\nDeparture Time:"<<bus[m].bus_depart

  <<"\tFrom: \t\t"<<bus[m].b_from<<"\t\tTo: \t\t"<<

  bus[m].b_to<<"\n";
// page decoration
  bus_line('*');

  bus[0].position(m);
// decleration of the counter 
  int d=1;

  for (int x=0; x<8; x++)

  {

    for(int y=0;y<4;y++)

    {
// increase in the value of the counter 
      d++;
// if the bus number is not empty , then output the passenger name  
      if(strcmp(bus[m].bus_seat[x][y],"Empty")!=0)

      cout<<"\nThe Seat no "<<(d-1)<<" is Reserved for "<<bus[m].bus_seat[x][y]<<".";

    }

  }

  break;

  }

  if(m>t)

    cout<<"Enter Correct Bus Number: ";

}
// function for the position 
void a::position(int l)

{

  int r=0;t=0;

  for (int x =0; x<8;x++)

  {

    cout<<"\n";

    for (int z = 0;z<4; z++)

    {

      r++;

      if(strcmp(bus[l].bus_seat[x][z], "Empty")==0)

        {

          cout.width(5);

          cout.fill(' ');

          cout<<r<<".";

          cout.width(10);

          cout.fill(' ');

          cout<<bus[l].bus_seat[x][z];

          t++;

        }

        else

        {

        cout.width(5);

        cout.fill(' ');

        cout<<r<<".";

        cout.width(10);

        cout.fill(' ');

        cout<<bus[l].bus_seat[x][z];

        }

      }

    }

  cout<<"\n\nThere are "<<t<<" Seats Empty in Bus Number: "<<bus[l].bus_number;

  }
// function to show the buses available 
void a::avail()

{

// for loop shows the range of the number of buses available 
  for(int y=0;y<t;y++)

  {

    bus_line('*');
 

    cout<<"\nBus Number: \t"<<bus[y].bus_number<<"\tDriver: \t"<<bus[y].bus_driver

    <<"\nArrival Time: \t"<<bus[y].bus_arrival<<"\tDeparture Time: \t"

    <<bus[y].bus_depart<<"\nFrom: \t\t"<<bus[y].b_from<<"\tTo: \t\t\t"

    <<bus[y].b_to<<"\n";

    bus_line('*');

  }

}

int main()

{
// comand line to make the screen/terminal clear
system("cls");
// decleration of the option var
int w;
// decleration of a continuous loop(forever)
while(1)

{
	bus_line('*');
	cout<<"\n\n";
	cout<<"\t\t*** GROUP NAME: TEAM ELITE ***\n"<<"\t\t*** PROJECT NAME: BUS BOOKING/RESERVATION SYSTEM ***\n"
	<<"\t\t*** DEPARTMENT: COMPUTER SCIENCE***\n"<<"\t\t*** COURSE: CIT 202 ***\n";
	cout<<"\t\t\t*** LECTURERS: DR IBITOYE\n\t\t\t\t MRS AWONIRAN";


    //system("cls");
    cout<<"\n\n";
    cout<<"\t\t***SIMPLE BUS RESERVATION SYSTEM***";

  cout<<"\n\n";

  cout<<"\t\t\t1.Add New Bus Number\n\t\t\t"

  <<"2.Reservation\n\t\t\t"

  <<"3.Show Reservation\n\t\t\t"

  <<"4.Buses Available \n\t\t\t"

  <<"5.Exit";

  cout<<"\n\t\t\tEnter your Choice:- ";

  cin>>w;
// decleration of a switch condition statement
  switch(w)

  {
//
    case 1:  bus[t].add_new_number_of_bus();

      break;

    case 2:  bus[t].reservation();

      break;

    case 3:  bus[0].view();

      break;

    case 4:  bus[0].avail();

      break;

    case 5:  exit(0);

  }

}

return 0;

}

// code reference : sorcecodehero
