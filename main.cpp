#include <iostream>
#include <fstream>
#include "color.h"
#include "Transport.cpp"
using namespace std;
Color::Modifier def(Color::FG_DEFAULT);
Color::Modifier red(Color::FG_RED);
Color::Modifier green(Color::FG_GREEN);

class user
{
  public:
  string  login_name;
  string signup_name;
  char  pass[100];
  char temp;
  string  confirm_pass;
  string email;
  long long int ph;
  fstream f;
  bool flag =  false;  

  void login()
  {
    cout<<green<<"***WELCOME***\n\n"<<def;
    cout<<"USER NAME: ";
    cin>>login_name;
    cout<<"PASSWORD: ";
    cin>>pass;
    if(login_name == signup_name && pass == confirm_pass)
    {
      flag = true;
    }
    else
    {
      cout<<red<<"Wrong Username or Password\n\n"<<def;
      login();
    }
  }
  void encry()  //Encrytping the password
  {
    //fstream f;
    f.open("encrypted.txt", ios::out);
    for(int i = 0; pass[i] != '\0'; ++i){
    temp = pass[i];
    //If the message to be encypted is in lower case
    if(temp >= 'a' && temp <= '|')
    {
      temp = temp + 1;
      
      if(temp > 'z')
      {
        temp = temp - 'z' + 'a' - 1;
      }
      
      pass[i] = temp;
    }

    //If the message to be encypted is in upper case
    else if(temp >= 'A' && temp <= 'Z'){
      temp = temp + 5;
      
      if(temp > 'Z'){
        temp = temp - 'Z' + 'A' - 1;
      }
      pass[i] = temp;
    }
  }
  f << "Encrypted password: " << pass <<endl;
  f.close();
  }
  void decry()  //Decrytping the password
  {
    //fstream f;
    f.open("decrypted.txt", ios::out);
    for(int i = 0; pass[i] != '\0'; ++i){
    temp = pass[i];
    //If the message to be encypted is in lower case
    if(temp >= 'a' && temp <= '|'){
      temp = temp - 1;
      
      if(temp > 'z'){
        temp = temp + 'z' + 'a' - 1;
      }
      
      pass[i] = temp;
    }
  
    //If the message to be encypted is in upper case
    else if(temp >= 'A' && temp <= 'Z'){
      temp = temp - 5;
      
      if(temp > 'Z'){
        temp = temp + 'Z' + 'A' - 1;
      }
      
      pass[i] = temp;
    }
  }
  f << "Decrypted passowrd: " << pass <<endl;
  f.close();
  }
  void signup()
  {
    cout<<green<<"****SETUP YOUR ACCOUNT****\n\n"<<def;
    cout<<"USER NAME: ";
    cin>>signup_name;
    cout<<"EMAIL: ";
    cin>>email;
    cout<<"Phone No.: ";
    cin>>ph;
    cout<<"PASSWORD: ";
    cin>>pass;
    cout<<"CONFIRM PASSWORD: ";
    cin>>confirm_pass;
    if(pass != confirm_pass)
    {
      cout<<red<<"Password do not match\nTRY AGAIN!\n\n"<<def; 
      signup();   
    }
    encry();
    decry();
  }
  /*void show()
  {
    cout<<pass;
  }*/
};

class admin: public user
{
  public:
  string name;
  string password;
  bool flag =  false;
  void login()   
  {
    cout<<green<<"***WELCOME***\n\n"<<def;
    cout<<"USER NAME: ";
    cin>>name;
    cout<<"PASSWORD: ";
    cin>>password;
    if(name == "Shubham" && password == "hello")
    {
      flag = true;
    }
    else
    {
      cout<<red<<"Wrong Username or Password\nTRY AGAIN!\n\n"<<def;
      login();
    }
  }
  
};

void ty() //Thank You animation
{
  cout<<green<<"\n\n";
	     cout<<"	         _/_/_/_/_/  _/                            _/            \n";
	     cout<<"	            _/      _/_/_/      _/_/_/  _/_/_/    _/  _/         \n";
	     cout<<"	           _/      _/    _/  _/    _/  _/    _/  _/_/            \n";
	     cout<<"	          _/      _/    _/  _/    _/  _/    _/  _/  _/           \n";
	     cout<<"	         _/      _/    _/    _/_/_/  _/    _/  _/    _/          \n";
	     cout<<"                                                                  \n";
	     cout<<"                                                                  \n";
	     cout<<"                                                                  \n";
	     cout<<"		         _/     _/                                       \n";
	     cout<<"		          _/  _/    _/_/    _/    _/                     \n";
	     cout<<"		            _/    _/    _/  _/    _/                     \n";
	     cout<<"		            _/    _/    _/  _/    _/                     \n";
	     cout<<"		           _/      _/_/      _/_/_/                     \n\n"<<def;
}

int main() {
  user u;
  admin a;
 transport t;
  train tr;
  cab c;
  bus b;
  airways fl;
  int ch_scr1;
  screen1:
  main_page: 
    cout<<green<<"*****TRAVEL AGENCY*****\n\n"<<def<<"1)LOGIN\n2)SIGNUP\n\n-->";
    cin>>ch_scr1;
    cout<<"\033[2J\033[0;0H"; //This is for clearing the output screen
  switch(ch_scr1)
  {
    case 1:
    a.login();
    cout<<"\033[2J\033[0;0H";
    if (a.flag == true)
    {
      t.mode();
      cout<<"\033[2J\033[0;0H";
      switch(t.option)
      {
        case 1:
        tr.show_trips();
        cout<<"\033[2J\033[0;0H";
        tr.book_trip();
        cout<<"\033[2J\033[0;0H";
        tr.display();
        ty();
        break;
        case 2:
        c.show_trips();
        cout<<"\033[2J\033[0;0H";
        c.book_trip();
        cout<<"\033[2J\033[0;0H";
        c.display();
        ty();
        break;
        case 3:
        b.show_trips();
        cout<<"\033[2J\033[0;0H";
        b.book_trip();
        cout<<"\033[2J\033[0;0H";
        b.display();
        ty();
        break;
        case 4:
        fl.show_trips();
        cout<<"\033[2J\033[0;0H";
        fl.book_trip();
        cout<<"\033[2J\033[0;0H";
        fl.display();
        ty();
        break;
      }
    }
    break;
    case 2:
    u.signup();
    cout<<"\033[2J\033[0;0H";
    u.login();
    cout<<"\033[2J\033[0;0H";
    if (u.flag == true)
    {
      t.mode();
      cout<<"\033[2J\033[0;0H";
      switch(t.option)
      {
        case 1:
        tr.show_trips();
        cout<<"\033[2J\033[0;0H";
        tr.book_trip();
        cout<<"\033[2J\033[0;0H";
        tr.display();
        ty();
        break;
        case 2:
        c.show_trips();
        cout<<"\033[2J\033[0;0H";
        c.book_trip();
        cout<<"\033[2J\033[0;0H";
        c.display();
        ty();
        break;
        case 3:
        b.show_trips();
        cout<<"\033[2J\033[0;0H";
        b.book_trip();
        cout<<"\033[2J\033[0;0H";
        b.display();
        ty();
        break;
        case 4:
        fl.show_trips();
        cout<<"\033[2J\033[0;0H";
        fl.book_trip();
        cout<<"\033[2J\033[0;0H";
        fl.display();
        ty();
        break;
      }
    }
    break;
  }
}