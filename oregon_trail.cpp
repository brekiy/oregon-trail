#include <iostream>
#include <regex>
#include "oregon_trail.h"

const int WAGON_START_CASH = 900;
const int WAGON_COST = 200;

// Wagon class implementation
Wagon::Wagon() : oxen(0), food(0), ammo(0), 
                  clothing(0), misc_supplies(0), cash(WAGON_START_CASH) {}

Wagon::Wagon(int o, int f, int a, int c1, int m, int c2) : 
              oxen(o), food(f), ammo(a), clothing(c1), misc_supplies(m), cash(c2) {}

void Wagon::print_inventory() {
  std::cout << "Oxen: " << oxen << ", ";
  std::cout << "Food: " << food << ", ";
  std::cout << "Ammo: " << ammo << "\n";
  std::cout << "Clothing: " << clothing << ", ";
  std::cout << "Misc. Supplies: " << misc_supplies << ", ";
  std::cout << "Cash: " << cash << "\n";
}

int Wagon::get_oxen() { return oxen; }
int Wagon::get_food() { return food; }
int Wagon::get_ammo() { return ammo; }
int Wagon::get_clothing() { return clothing; }
int Wagon::get_misc_supplies() { return misc_supplies; }
int Wagon::get_cash() { return cash; }
void Wagon::set_oxen(int var) { oxen = var; }
void Wagon::set_food(int var) { food = var; }
void Wagon::set_ammo(int var) { ammo = var; }
void Wagon::set_clothing(int var) { clothing = var; }
void Wagon::set_misc_supplies(int var) { misc_supplies = var; }
void Wagon::set_cash(int var) { cash = var; }

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
  std::cout << "YOU HAD SAVED $" << WAGON_START_CASH << " TO SPEND FOR THE TRIP, "
            << "AND YOU'VE JUST PAID $" << WAGON_COST << " FOR A WAGON.\n"
            << "YOU WILL NEED TO SPEND THE REST OF YOUR MONEY ON THE "
            << "FOLLOWING ITEMS:\n\n"
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
            << "YOU WILL SEE THE WORDS: 'TYPE BANG'. THE FASTER YOU TYPE IN "
            << "THE WORD 'BANG' AND HIT THE RETURN KEY, THE BETTER LUCK "
            << "YOU'LL HAVE WITH YOUR GUN.\n\n";
  std::cout << "WHEN ASKED TO ENTER MONEY AMOUNTS, ENTER WHOLE NUMBERS AND "
            << "DON'T USE A '$'.\n\n";
  std::cout << "********GOOD LUCK!!!********" << std::endl;
}

void initial_purchases(Wagon wagon) {
  // subtract the cash for a wagon
  wagon.set_cash(wagon.get_cash() - WAGON_COST);
  int cash_spent = 0; int input;
  std::cout << "HOW MUCH DO YOU WANT TO SPEND ON YOUR OXEN TEAM? ";
  input = get_int_input(200, 300);
  cash_spent += input;
  wagon.set_oxen(input);
  std::cout << "YOU HAVE $" << wagon.get_cash() - cash_spent << " LEFT\n";
  
}

// returns user input of an integer between min and max
int get_int_input(int min, int max) {
  std::string input; int result;
  std::regex non_digit("(\\D+?)", std::regex::ECMAScript);
  while (true) {
    std::cin >> input;
    if (std::regex_match(input, non_digit)) {
      std::cout << "INVALID INPUT: ONLY INPUT WHOLE NUMBERS, TRY AGAIN ";
      std::cin.clear();
    } else {
      result = atoi(input.c_str());
      if (result > max || result < min) {
        std::cout << "INVALID INPUT: OUT OF RANGE " << min 
                  << " - " << max << ", TRY AGAIN ";
        std::cin.clear();
      } else return result;
    }
  }
}