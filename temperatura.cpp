/*Temperature conversion 
solo learn program
*/

#include <iostream>
using namespace std;

int main()
{
int from , to;
float value;
string input_unit, output_unit= "";

string UnitString(int value);

cout<<"Temperature Conversion\n";
cout<<"\nEnter no of Unit to covert from : \n 1. Celsius\n 2. Farenheit\n 3. Kelvin";
cin>>from;
input_unit = UnitString(form);
cout<<"\nEnter no of Unit to covert to : \n 1. Celius\n 2. Farenheit\n 3. Kelvin";
cin>>to;
output_unit = UnitString(to);
cout<<"\nEnter The value to convert: ";
cin>>value;
cout << "You entered the value " << value << " in " << input_unit <<".\n";

/*converting given value from specified unit to Kelvin*/
switch(from) {
case 1:
value= value + 273.15; break;
case 2:
value= (value+459.67)*5/9; break;
case 3: break;
default: break;
}

/*converting value from Kelvin to specified unit*/
switch(to) {
case 1:
value= value-273.15; break;
case 2:
value= value*9/5-459.67; break;
case 3: break;
default: break;
}

cout<<"Converted Value :"<< value << " in " << output_unit << ".\n";
}

string UnitString(int value){
  string unit= "";
  switch(value) {
  case 1:
  unit = "Celsius";
   break;
  case 2:
  unit = "Farenheit";
   break;
  case 3: unit= "Kelvin";
   break;
  default: unit = "Unit not valid.\n";
  break;}
  return unit;
}
