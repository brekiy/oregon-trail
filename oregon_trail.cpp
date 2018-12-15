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