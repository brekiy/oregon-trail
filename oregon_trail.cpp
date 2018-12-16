#include <iostream>
#include "oregon_trail.h"

// Wagon class

Wagon::Wagon() : oxen(0), food(0), ammo(0), 
                  clothing(0), misc_supplies(0), cash(0) {}

Wagon::Wagon(int o, int f, int a, int c1, int m, int c2) : 
              oxen(o), food(f), ammo(a), clothing(c), misc_supplies(m), cash(c) {}

void Wagon::print_inventory() {
  std::cout << "Oxen: " << oxen << ", ";
  std::cout << "Food: " << food << ", ";
  std::cout << "Ammo: " << ammo << "\n";
  std::cout << "Clothing: " << clothing << ", ";
  std::cout << "Misc. Supplies: " << misc_supplies << ", ";
  std::cout << "Cash: " << cash << "\n";
}









// helpers for main game

void print_intro() {
  // intro
  std::cout << "THIS PROGRAM SIMULATES A TRIP OVER THE OREGON TRAIL FROM "
            << "INDEPENDENCE, MISSOURI TO OREGON CITY, OREGON IN 1847.\n" 
            << "YOUR FAMILY OF FIVE WILL COVER THE 2000 MILE OREGON TRAIL "
            << "IN 5-6 MONTHS --- IF YOU MAKE IT ALIVE." << std::endl;
}

void print_intro_instructions() {
  // description of goods
  std::cout << "YOU HAD SAVED $900 TO SPEND FOR THE TRIP, AND YOU'VE JUST "
            << "PAID $200 FOR A WAGON.\n"
            << "YOU WILL NEED TO SPEND THE REST OF YOUR MONEY ON THE "
            << "FOLLOWING ITEMS:\n\n";
            << "OXEN - YOU CAN SPEND 200-300 ON YOUR TEAM, THE MORE YOU SPEND, "
            << "THE FASTER YOU'LL GO BECAUSE YOU'LL HAVE BETTER ANIMALS\n\n"
            << "FOOD - THE MORE YOU HAVE, THE LESS CHANCE THERE IS OF "
            << "GETTING SICK\n\n"
            << "AMMUNITION - $1 BUYS A BELT OF 50 BULLETS, YOU'LL NEED BULLETS "
            << "FOR ATTACKS BY ANIMALS AND BANDITS, AND FOR HUNTING FOOD\n\n"
            << "CLOTHING - THIS IS ESPECIALLY IMPORTANT FOR THE COLD WEATHER "
            << "YOU'LL ENCOUNTER WHEN CROSSIN THE MOUNTAINS\n\n"
            << "MISCELLANEOUS SUPPLIES - THIS INCLUDES MEDICINE AND OTHER "
            << "THINGS YOU WILL NEED FOR SICKNESS AND EMERGENCY REPAIRS\n\n";
  // description of spending
  std::cout << "YOU CAN SPEND ALL YOUR MONEY BEFORE YOU START YOUR TRIP - OR "
            << "YOU CAN SAVE SOME OF YOUR CASH TO SPEND AT FORTS ALONG THE WAY "
            << "WHEN YOU RUN LOW. HOWEVER, ITEMS COST MORE AT THE FORTS. "
            << "YOU CAN ALSO GO HUNTING ALONG THE WAY TO GET MORE FOOD.\n\n";
  // description of shooting
  std::cout << "WHENEVER YOU HAVE TO USE YOUR TRUSTY RIFLE ALONG THE WAY, "
            << "YOU WILL SEE THE WORDS: 'TYPE BANG'. THE FASTER YOU YPE IN "
            << "THE WORD 'BANG' AND HIT THE RETURN KEY, THE BETTER LUCK "
            << "YOU'LL HAVE WITH YOUR GUN.\n\n";
  std::cout << "GOOD LUCK!!!" << std::endl;
}

