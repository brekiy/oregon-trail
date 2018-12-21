#include <iostream>
#include "oregon_trail.h"

int main() {
  print_intro();
  print_intro_instructions();
  Wagon player_wagon;
  initial_purchases(player_wagon);
  player_wagon.get_oxen();
}