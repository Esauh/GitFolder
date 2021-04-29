#include <iostream>
#include <string>
#include<algorithm>
using namespace std;


int main() {
string input;
 int shift, length, count;
 cout << "Type message to be encrypted" << endl;
 getline(cin, input);
 cout << "Type encryption shift amount" << endl;
cin >> shift;

length = input.length();

for(count = 0; count < length; count++)
{
    if (isalpha(input[count]))
    {
        input[count] = toupper(input[count]);
        for (int i = 0; i < shift; i++)
        {
            if(input[count] == 'Z')
              input[count] = 'A';
              else 
              input[count]++;
        }
    }
}

for (int i = 0; i < input.size(); i++) {       
  if ((input[i] < 'A' || input[i] > 'Z') && (input[i]< 'a' || input[i] > 'z'))

 {   
input.erase(i, 1); 
 i--;
}
}


string output;
int count2 = 0;

  for( int i =0; i < input.length(); i= i+5)
  {
  output += input.substr(i, 5) + " "; 
  count2++;
    if(count2 == 10)
    {
     output += "\n";
     count2 = count2-10;
    }
  }




cout << output;

}
