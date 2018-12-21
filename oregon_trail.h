#include <string>

// contains all the object and helper function definitions
/*
4900  REM ***IDENDIFICATION OF VARIABLES IN THE PROGRAM***
4902  REM A = AMOUNT SPENT ON ANIMALS
4904  REM B = AMOUNT SPENT ON AMMUNITION
4906  REM B1 = ACTUAL RESPONSE TIME FOR INPUTING 'BANG'
4908  REM B2 = MAXIMUM RESPONSE TIME FOR INPUTING 'BANG'
4910  REM C = AMOUNT SPENT ON CLOTHING
4912  REM C1 = FLAG FOR INSUFFICIENT CLOTHING IN COLD WEATHER
4914  REM C$ = YES/NO RESPONSE TO QUESTIONS
4916  REM D1 = COUNTER IN GENERATING EVENTS
4918  REM D3 = TURN NUMBER FOR SETTING DATE
4920  REM D4 = CURRENT DATE
4922  REM E = CHOICE OF EATING
4924  REM F = AMOUNT SPENT ON FOOD
4926  REM F1 = FLAG FOR CLEARING SOUTH PASS
4928  REM F2 = FLAG FOR CLEARING BLUE MOUNTAINS
4930  REM F9 = FRACTION OF 2 WEEKS TRAVELED ON FINAL TURN
4932  REM K8 = FLAG FOR INJURY
4934  REM L1 = FLAG FOR BLIZZARD
4936  REM M = TOTAL MILEAGE WHOLE TRIP
4938  REM M1 = AMOUNT SPENT ON MISCELLANEOUS SUPPLIES
4940  REM M2 = TOTAL MILEAGE UP THROUGH PREVIOUS TURN
4942  REM M9 = FLAG FOR CLEARING SOUTH PASS IN SETTING MILEAGE
4944  REM P = AMOUNT SPENT ON ITEMS AT FORT
4946  REM R1 = RANDOM NUMBER IN CHOOSING EVENTS
4948  REM S4 = FLAG FOR ILLNESS
4950  REM S5 = 'HOSTILITY OF RIDERS' FACTOR
4952  REM T = CASH LEFT OVER AFTER INITIAL PURCHASES
4954  REM T1 = CHOICE OF TACTICS WHEN ATTACKED
4956  REM X = CHOICE OF ACTION FOR EACH TURN
4958  REM X1 = FLAG FOR FORT OPTION
*/

// wagon stores all the supplies: food, bullets, clothes
class Wagon {
  int oxen;
  int food;
  int ammo;
  int clothing;
  int misc_supplies;
  int cash;

public:
  Wagon(); // default ctor: init to all 0
  Wagon(int o, int f, int a, int c1, int m, int c2); // initializer list

  void print_inventory();

  // getters and setters - probably a better way to do it
  int get_oxen();
  int get_food();
  int get_ammo();
  int get_clothing();
  int get_misc_supplies();
  int get_cash();
  void set_oxen(int var);
  void set_food(int var);
  void set_ammo(int var);
  void set_clothing(int var);
  void set_misc_supplies(int var);
  void set_cash(int var);
};

template <typename T>
void store_input(T var);
void game_loop();
void print_intro();
void print_intro_instructions();
void initial_purchases(Wagon wagon);
int get_int_input(int min, int max);