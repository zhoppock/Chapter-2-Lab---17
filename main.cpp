//Zachary Hoppock
//letterRearangement.cpp
//9/18/2020
//Take characters from an input string and create a new string with them
//Version #1
#include <iostream>

using namespace std;
int main()
{
  string input_string = "Four score and seven years ago our fathers";
  // output_string = "carefree and no tears"
  string letter_c = input_string.substr(6,1);
  string letter_a = input_string.substr(11,1);
  string letter_r = input_string.substr(3,1);
  string letter_e = input_string.substr(9,1);
  string letter_f = input_string.substr(35,1);
  string word_carefree = letter_c + letter_a + letter_r + letter_e + letter_f + letter_r + letter_e + letter_e;

  string word_and = input_string.substr(11,3);

  string letter_n = input_string.substr(12,1);
  string letter_o = input_string.substr(1,1);
  string word_no = letter_n + letter_o;

  string letter_t = input_string.substr(37,1);
  string letters_ears = input_string.substr(22,4);
  string word_tears = letter_t + letters_ears;

  string output_string = word_carefree + " " + word_and + " " + word_no + " " + word_tears;

  cout << output_string;
  return 0;
}