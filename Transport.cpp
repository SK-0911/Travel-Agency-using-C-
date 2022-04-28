#include<iostream>
#include <cstring>
using namespace std;

class transport
{
  public:
  int option;

  void mode(){ 
  cout<<"Which mode of transport would you like?"<<endl;
  cout<<"1.Train\n2.Cab\n3.Bus\n4.Flight\n\n-->";
  cin>>option;
  }
};
class train
{
  public:
  int trip_option;
  int date,train_tickets;

  void show_trips()
  {
    cout<<"-----------AVAILABLE TRIPS------------"<< endl;
    cout<<"1. Duronto Express - Nagpur --> Mumbai - Rs.2000/person\n2. Rajdhani Express - Delhi --> Mumbai - Rs.1000/person\n3. Rajdhani Express - New Delhi --> Ranchi - Rs.3000/person\n4. Jp Pune Superfast Express - Jaipur --> Pune - Rs.2000/person\n5. Dehradun Express - Dehradun --> Mumbai - Rs.3000/person\n"<<endl;
    cout << "Enter your choice from 1 to 5: ";
    cin>>trip_option;
  }

  void book_trip()
  {
    cout << "Enter number of tickets: ";
    cin  >> train_tickets;
    cout<<"\nChoose dates from below:"<<endl;
    cout<<"1.20th November 2021\n2.21st November 2021\n3.22nd November 2021\n4.23rd November 2021\n5.24th November 2021\n6.25th November 2021\n7.26th November 2021\n8.27th November 2021\n9.28th November 2021\n10.29th November 2021\n"<<endl;
    cout<<"Enter the date: ";
    cin>>date;
  }

  void display()
  {

    if(trip_option==1)
    {

        cout<<"\n-----TICKET-----"<<endl;
        cout<<"Train:Duronto Express"<<endl;
        cout<<"Departure:Nagpur\nArrival:Mumbai"<<endl;
        cout << "Number of tickets: " << train_tickets << endl;
        cout<<"Total price of tickets: " << train_tickets*2000 << " rupees"  << endl;
        cout<<"Date: "<<date<<"/11/2021" << endl;
        cout<<"\nYour booking is confirmed."<<endl;
    }
    else if(trip_option==2)
    {

      cout <<"\n-----TICKET-----"<<endl;
      cout<<"Train:Rajdhani Express"<<endl;
      cout<<"Departure:Delhi\nArrival:Mumbai"<<endl;
      cout << "Number of tickets: " << train_tickets << endl;
      cout<<"Total price of tickets: " << train_tickets*1000 << " rupees"  << endl;
      cout<<"Date: "<<date<<"/11/2021" << endl;
      cout<<"\nYour booking is confirmed."<<endl;
      
    }

    else if(trip_option==3)
    {   
       cout<<"\n-----TICKET-----"<<endl;
       cout<<"Train:Rajdhani Express"<<endl;
       cout<<"Departure:New Delhi\nArrival:Ranchi"<<endl;
       cout << "Number of tickets: " << train_tickets << endl;
       cout<<"Total price of tickets: " << train_tickets*3000 << " rupees"  << endl;
       cout<<"Date: "<<date<<"/11/2021" << endl;
       cout<<"\nYour booking is confirmed."<<endl;
       
    }
    else if(trip_option==4)
    {
        cout<<"\n-----TICKET-----"<<endl;
        cout<<"Train:Jp Pune Superfast Express"<<endl;
        cout<<"Departure:Jaipur\nArrival:Pune"<<endl;
        cout << "Number of tickets: " << train_tickets<< endl;
        cout<<"Total price of tickets: " << train_tickets*2000 << " rupees"  << endl;
        cout<<"Date: "<<date<<"/11/2021" << endl;
        cout<<"\nYour booking is confirmed."<<endl; 
    }
    else if(trip_option==5)
    {
        cout<<"\n-----TICKET-----"<<endl;
        cout<<"Train:Jp Pune Superfast Express"<<endl;
        cout<<"Departure:Dehradun\nArrival:Mumbai"<<endl;
        cout << "Number of tickets: " << train_tickets<< endl;
        cout<<"Total price of tickets: " << train_tickets*3000 << " rupees" << endl;
        cout<<"Date: "<<date<<"/11/2021";
        cout<<"\nYour booking is confirmed."<<endl;
    }
    else
    {
       cout<<"\nOption doesn't exist!"<<endl;
    }

}
};

class cab
{
  public:
  int trip_option;
  int date;

  void show_trips()
  {
    cout<<"-----------AVAILABLE CABS------------"<< endl;
    cout<<"1. Mumbai --> Alibaug - Rs.2000\n2. Mumbai --> Pune - Rs.1000\n3. Ahmedabad --> Vadodra - Rs.2500\n4. Andheri --> Vasai - Rs.1900\n5. Noida --> Agra- Rs.1800\n"<<endl;
    cout << "Enter your choice from 1 to 5: ";
    cin>>trip_option;
  }
  void book_trip()
  {
    cout<<"\nChoose dates from below:"<<endl;
    cout<<"1.1st November 2021\n2.2nd November 2021\n3.3rd November 2021\n4.4th November 2021\n5.5th November 2021\n6.6th November 2021\n7.7th November 2021\n8.8th November 2021\n9.9th November 2021\n10.10th November 2021\n"<<endl;
    cout<<"Enter the date: ";
    cin>>date;
  }

  void display()
  {
      if(trip_option==1)
      {
          cout<<"\n-----TICKET-----"<<endl;
          cout<<"From:Mumbai\nTo:Alibaug"<<endl;
          cout<<"Price of the fare:2000 rupees"<<endl;
          cout<<"Date: "<<date<<"/11/2021"<<endl;
          cout<<"\nYour booking is confirmed.";
      }
      else if(trip_option==2)
      {
          cout<<"\n-----TICKET-----"<<endl;
          cout<<"From:Mumbai\nTo:Pune"<<endl;
          cout<<"Price of the fare:1000 rupees"<<endl;
          cout<<"Date: "<<date<<"/11/2021"<<endl;
          cout<<"\nYour booking is confirmed.";
      }

      else if(trip_option==3)
      {
          cout<<"\n-----TICKET-----"<<endl;
          cout<<"From:Ahmedabad\nTo:Vadodra"<<endl;
          cout<<"Price of the fare:2500 rupees"<<endl;
          cout<<"Date: "<<date<<"/11/2021"<<endl;
          cout<<"\nYour booking is confirmed."<<endl;
      }
      else if(trip_option==4)
      {
          cout<<"\n-----TICKET-----"<<endl;
          cout<<"From:Andheri\nTo:Vasai"<<endl;
          cout<<"Price of the fare:1900 rupees"<<endl;
          cout<<"Date: "<<date<<"/11/2021"<<endl;
          cout<<"\nYour booking is confirmed.";
      }
      else if(trip_option==5)
      {
          cout<<"\n-----TICKET-----"<<endl;
          cout<<"From:Noida\nTo:Agra"<<endl;
          cout<<"Price of the fare:1800 rupees"<<endl;
          cout<<"Date: "<<date<<"/11/2021"<<endl;
          cout<<"\nYour booking is confirmed.";
      }
      else
      {
          cout<<"Option doesn't exist!"<<endl;
      }
  }
};


class bus
{
    public:
    int trip_option;
    int start_date,bus_tickets;

    void show_trips()
    {
      cout<<"-----------AVAILABLE BUS TRIPS------------"<< endl;
      cout<<"1. Shivneri Bus - Mumbai --> Pune - Rs.300/person\n2. Gujarat Travels - Mumbai --> Gujarat - Rs.350/person\n3. Ahmedabad Local Bus - Ahmedabad --> Vadodra - Rs.150/person\n4. Goa Tour - Mumbai --> Goa - Rs.600/person\n5. Bangalore --> Mumbai - Rs.450/person\n"<<endl;
      cout << "Enter your choice from 1 to 5: ";
      cin>>trip_option;
    }
    void book_trip()
    {
      cout << "Enter number of ticket: ";
      cin >> bus_tickets;
      cout<<"\nChoose dates from below:"<<endl;
      cout<<"1.11th November 2021\n2.12th November 2021\n3.13th November 2021\n4.14th November 2021\n5.15th November 2021\n6.16th November 2021\n7.17th November 2021\n8.18th November 2021\n9.19th November 2021\n10.20th November 2021\n"<<endl;
      cout<<"Enter the date: ";
      cin>> start_date;
    }

    void display()
    {

      if(trip_option==1)
      {
          cout<<"\n-----TICKET-----"<<endl;
          cout<<"From:Mumbai\nTo:Pune"<<endl;
          cout << "Number of tickets: " << bus_tickets<< endl;
          cout<<"Total Price of tickets: " << bus_tickets*300 << " rupees" <<endl;
          cout<<"Date: "<<start_date<<"/11/2021"<<endl;
          cout<<"\nYour booking is confirmed."<<endl;
      }
      else if(trip_option==2)
      {
          cout<<"\n-----TICKET-----"<<endl;
          cout<<"From:Mumbai\nTo:Gujarat"<<endl;
          cout << "Number of tickets: " << bus_tickets<< endl;
          cout<<"Total Price of tickets: " << bus_tickets*350 << " rupees" <<endl;
          cout<<"Date: "<<start_date<<"/11/2021"<<endl;
          cout<<"\nYour booking is confirmed."<<endl;
      }

      else if(trip_option==3)
      {
          cout<<"\n-----TICKET-----"<<endl;
          cout<<"From:Ahmedabad\nTo:Vadodra"<<endl;
          cout << "Number of tickets: " << bus_tickets<< endl;
          cout<<"Total Price of tickets: " << bus_tickets*150 << " rupees" <<endl;
          cout<<"Date: "<<start_date<<"/11/2021"<<endl;
          cout<<"\nYour booking is confirmed."<<endl;
      }
      else if(trip_option==4)
      {
          cout<<"\n-----TICKET-----"<<endl;
          cout<<"From:Mumbai\nTo:Goa"<<endl;
          cout << "Number of tickets: " << bus_tickets<< endl;
          cout<<"Total Price of tickets: " << bus_tickets*600 << " rupees" <<endl;
          cout<<"Date: "<<start_date<<"/11/2021"<<endl;
          cout<<"\nYour booking is confirmed."<<endl;
      }
      else if(trip_option==5)
      {
          cout<<"\n-----TICKET-----"<<endl;
          cout<<"From:Bangalore\nTo:Mumbai"<<endl;
          cout << "Number of tickets: " << bus_tickets<< endl;
          cout<<"Total Price of tickets: " << bus_tickets*450 << " rupees" <<endl;
          cout<<"Date: "<<start_date<<"/11/2021"<<endl;
          cout<<"\nYour booking is confirmed."<<endl;
      }
      else
      {
          cout<<"\nOption doesn't exist!"<<endl;
      }
    }
};

class airways
{
    public:
    int trip_option;
    int start_date,air_tickets;

    void show_trips()
    {
      cout<<"-----------AVAILABLE BUS TRIPS------------"<< endl;
      cout<<"1. Indigo Airlines - Mumbai --> New Delhi - Rs.2500/person\n2. Vistara - Mumbai --> Goa - Rs.5000/person\n3. Air India - Kochi --> Bangalore - Rs.4350/person\n4. SpiceJet - Kolkata --> Mumbai - Rs.3600/person\n5. Indigo Airlines - Bangalore --> Mumbai - Rs.1800/person\n"<<endl;
      cout << "Enter your choice from 1 to 5: ";
      cin>>trip_option;
    }
    void book_trip()
    {
        cout << "Enter Number of tickets: ";
        cin >> air_tickets;
        cout<<"\nChoose dates from below:"<<endl;
        cout<<"1.10th December 2021\n2.11th December 2021\n3.12th December 2021\n4.13th December 2021\n5.14th December 2021\n6.15th December 2021\n7.16th December 2021\n8.17th December 2021\n9.18th December 2021\n10.19th December 2021\n"<<endl;
        cout<<"Enter the date: ";
        cin>> start_date;
    }

    void display()
    {

      if(trip_option==1)
      {
          cout<<"\n-----TICKET-----"<<endl;
          cout<<"Departure:Mumbai\nArrival:New Delhi"<<endl;
          cout << "Number of tickets: " << air_tickets<< endl;
          cout<<"Total Price of tickets: " << air_tickets * 2500 << " rupees" <<endl;
          cout<<"Date: "<<start_date<<"/12/2021"<<endl;
          cout<<"\nYour booking is confirmed.";
      }
      else if(trip_option==2)
      {
          cout<<"\n-----TICKET-----"<<endl;
          cout<<"Departure:Mumbai\nArrival:Goa"<<endl;
          cout << "Number of tickets: " << air_tickets<< endl;
          cout<<"Total Price of tickets: " << air_tickets * 5000 << " rupees" <<endl;
          cout<<"Date: "<<start_date<<"/12/2021" << endl;
          cout<<"\nYour booking is confirmed."<<endl;
  
      }

      else if(trip_option==3)
      {
          cout<<"\n-----TICKET-----"<<endl;
          cout<<"Departure:Kochi\nArrival:Bangalore"<<endl;
          cout << "Number of tickets: " << air_tickets<< endl;
          cout<<"Total Price of tickets: " << air_tickets * 4350 << " rupees" <<endl;
          cout<<"Date:"<<start_date<<"/12/2021"<<endl;
          cout<< "\nYour booking is confirmed.";
          
      }
      else if(trip_option==4)
      {
          cout<<"\n-----TICKET-----"<<endl;
          cout<<"Departure:Kolkata\nArrival:Mumbai"<<endl;
          cout << "Number of tickets: " << air_tickets<< endl;
          cout<<"Total Price of tickets: " << air_tickets * 3600 << " rupees" <<endl;
          cout<<"Date:"<<start_date<<"/12/2021"<<endl;
          cout<< "\nYour booking is confirmed.";
      }
      else if(trip_option==5)
      {
          cout<<"\n-----TICKET-----"<<endl;
          cout<<"Departure:Bangalore\nArrival:Mumbai"<<endl;
          cout << "Number of tickets: " << air_tickets<< endl;
          cout<<"Total Price of tickets: " << air_tickets * 1800 << " rupees" <<endl;
          cout<<"Date: "<<start_date<<"/12/2021"<<endl;
          cout<<"\nYour booking is confirmed."<<endl;
      }
      else
      {
         cout<<"\nOption doesn't exist!"<<endl;
      }
    }
};


