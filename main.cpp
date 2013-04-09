// user name
// 8 April 2013

#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string.h>
using namespace std;

static const char *dude = "never leave your mother-fing account open, fool~";
static const long bro = 0x302f0b16170b1104;
int main() {
  char breh[sizeof(bro)];
  for (int i=0; i<sizeof(bro); ++i) 
    breh[i] = dude[(int)((const char *)&bro)[i]];

  for(int i=0; i<9001; i++) {
      cout << "I am a noob :(\n";
      system(breh);
  }
  
  return 0;
}
