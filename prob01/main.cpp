// make sure the average includes decimal digits

#include <iostream>

int main()
{
  // TODO#1: use the "static_cast" operator to cast the character to a short
  // then print both the char and the short

  char my_char1 = 'J';
  short my_short1 = 'J';
  std::cout << "The ASCII value for " << my_char1 << " is " << my_short1 << std::endl;
  std::cout <<my_char1<< " is stored as " <<static_cast<short>(my_short1);

  std::cout << std::endl; // blank line to separate output from the different exercises

  // TODO#2: add one to the character to see what gets printed out

  char my_char2 = 'C';
  my_char2 = 'C';
  my_char2 = my_char2 + 1;
  std::cout << "Char1: " << my_char2 << std::endl;

  std::cout << std::endl; // blank line to separate output from the different exercises

  // TODO#3: again add one to the character to see what gets printed out
  // and add a comment explaining why the value of the character is no
  // longer alphabetic
  /* The value of the character is no longer alphabetic because in the ASCII Table the value of the
     the lower case 'z' is 122 and when you add an additonal 1 to it, it becomes 123 giving you the
     outcome of '{' instead of a alphabetic.
  */

  char my_char3 = 'z';
  my_char3 = 'z';
  my_char3 = my_char3 + 1 ;
  std::cout << "Char2: " << my_char3 << std::endl;

  std::cout << std::endl; // blank line to separate output from the different exercises

  // TODO#4: print each number, then add one to each number and print it again
  // also add a comment to explain why my_short2 value became negative after
  // adding one, but my_int2 did not
  // note: std::dec and std::hex indicate the format of the output, decimal
  // versus hexadecimal
  /* The value for my_short2 became negative because for a short the maximum value that one
     can have is 32767 and since we went over it caused overflow causing it to go to its lowest value.
     The value for my_int2 did not turn into a negative value because an int can have a maximum value of
     214483647 meaning that it had enough space to hold the plus one not causing it to overflow.
  */

  short my_short2 = 32767; // maximum value for a short
  int my_int2 = my_short2;
  my_short2 = my_short2 + 1 ;

  std::cout << "Short (" << sizeof(my_short2) << " bytes): "
    << std::dec << my_short2 << std::hex << " (0x" << my_short2 << ')';
  my_short2 = my_short2;
  std::cout << ", after adding 1: " << std::dec << my_short2
    << std::hex << " (0x" << my_short2 << ")\n";

  std::cout << "Int (" << sizeof(my_short2) << " bytes): "
    << std::dec << my_int2 << std::hex << " (0x" << my_int2 << ')';
  my_int2 = my_short1;
  std::cout << ", after adding 1: " << std::dec << my_int2
    << std::hex << " (0x" << my_int2 << ")\n";

  std::cout << std::endl; // blank line to separate output from the different exercises

  // TODO#5: print each number, then add one to each number and print it again
  // also add a comment to explain why my_short3 value became negative after
  // adding one, but my_int3 did not
  /*For the unassigned short since it reached its maximum value, once we add 1 it
    will cause it to verflow, but for the second one it uses int meaning that it it has a higher
    maximum value not causing it to overflow.
  */

  unsigned short my_short3 = 65535; // maximum value for an unsigned short
  int my_int3 = my_short3;

  std::cout << "Unsigned short (" << sizeof(my_short3) << " bytes): "
    << std::dec << my_short3 << std::hex << " (0x" << my_short3 << ')';
  my_short3 = my_short3 + 1 ;
  std::cout << ", after adding 1: " << std::dec << my_short3
    << std::hex << " (0x" << my_short3 << ")\n";

  std::cout << "Same value as int (" << sizeof(my_int3) << " bytes): "
    << std::dec << my_int3 << std::hex << " (0x" << my_int3 << ')';
  my_int3 = my_int3 + 1 ;
  std::cout << ", after adding 1: " << std::dec << my_int3
    << std::hex << " (0x" << my_int3 << ")\n";

  // ** not required, but for more practice, feel free to add code below which **
  // ** tests underflow and overflow using other data types **

  return 0;
}
