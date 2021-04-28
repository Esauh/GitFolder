#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

string CaesarCipher(int,string);

int main() {
  int number;
  cout << "Type amount of times you want letters be be shifting by number" << endl;
  cin >> number;
 string input = "";
 cout << "Type message to be encrypted without adding spaces" << endl;
 cin >> input;
input = CaesarCipher(number, input);
cout << input;
}

string CaesarCipher(int shift, string text)
{
string result = " ";
remove(text.begin(), text.end(), ' ');



for(int i = 0; i < text.length(); i++)
{
result += toupper(text[i]);

}

string result2 = "";
for (int i =0; i < result.length(); i++)
{      
  result2 += char(int(result[i]+shift-65)%26 +65);
}

for (int i = 0; i < result2.size(); i++) {       
  if ((result2[i] < 'A' || result2[i] > 'Z') && (result2[i]< 'a' || result2[i] > 'z'))

 {   
result2.erase(i, 1); 
 i--;
}
}

string output = " ";


for( int i =0; i < result2.length(); i= i+5)
{
output += result2.substr(i, 5) + " "; 

}



return output;



}

