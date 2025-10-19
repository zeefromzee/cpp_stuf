#include <iostream>
using namespace std;

int main() {
  cout<<"===================================="<<endl;
  cout<<"Welcome to the Pet Simulator! (^▽^)/"<<endl;
  cout<<"===================================="<<endl;
  cout << "Select 1 to choose a new pet\nSelect 2 to play with your "
          "pet\nSelect 3 to feed your pet\nSelect 4 to put your pet to "
          "sleep\nSelect 5 to view your pet's stats\nSelect 6 to quit\n"
       << endl;
  int user_choice;
  cout << "What task will You like to perform for your pet today? ";
  cin >> user_choice;
  int tasks[6] = {1, 2, 3, 4, 5, 6};
  int pets[6] = {1, 2, 3, 4, 6, 5};

  if (user_choice == tasks[0]) {
    cout << "Alrighty Let's select a new pet (˵ •̀ ᴗ •́˵) ✧" << endl;
    cout << "Select 1 for a dog\nSelect 2 for a cat\nSelect 3 for a "
            "hamster\nSelect 4 for a capibara\nSelect 5 for a squirrel\nSelect "
            "6 for a bunny\n"
         << endl;

    int user_pet;
    cout << "Which pet would you like to select? (,,>ヮ<,,)! " << endl;
    cin >> user_pet;

    if (user_pet == pets[0]) {
      cout << "You have selected a dog ▼・ᴥ・▼ ♡" << endl;
    } else if (user_pet == pets[1]) {
      cout << "You have selected a cat (=^･ω･^=) ✧" << endl;
    } else if (user_pet == pets[2]) {
      cout << "You have selected a hamster ₍ᐢ•ﻌ•ᐢ₎ ♥" << endl;
    } else if (user_pet == pets[3]) {
      cout << "You have selected a capibara ʕ•ᴥ•ʔ ☆" << endl;
    } else if (user_pet == pets[4]) {
      cout << "You have selected a squirrel ʕ￫ᴥ￩ʔ ✿" << endl;
    } else if (user_pet == pets[5]) {
      cout << "You have selected a bunny (,,>ヮ<,,) ♡" << endl;
    } else {
      cout << "Invalid pet selection (｡•́︿•̀｡)" << endl;
    }
  } else if (user_choice == tasks[1]) {
    cout << "You have selected to play with your pet! ✧◝(⁰▿⁰)◜✧" << endl;
    cout << "What would you like to play with your pet with? " << endl;
    cout << "Select 1 for a yarn\nSelect 2 for a stuffed toy\nSelect 3 for a "
            "ball\nSelect 4 for a box\nSelect 5 for a stick\nSelect 6 for a "
            "frisbee\n"
         << endl;

    int play_choice;
    cout << "Choose your toy: " << endl;
    cin >> play_choice;

    if (play_choice == 1) {
      cout << "Your pet is playing with yarn! So cute! (ฅ^•ﻌ•^ฅ) ♥" << endl;
    } else if (play_choice == 2) {
      cout << "Your pet loves the stuffed toy! (◕‿◕) ✧" << endl;
    } else if (play_choice == 3) {
      cout << "Your pet is chasing the ball! ₍ᐢ•(ܫ)•ᐢ₎ " << endl;
    } else if (play_choice == 4) {
      cout << "Your pet jumped into the box! If I fits, I sits! (=^･ω･^=) "
           << endl;
    } else if (play_choice == 5) {
      cout << "Your pet is fetching the stick! Good job! ٩(◕‿◕｡)۶" << endl;
    } else if (play_choice == 6) {
      cout << "Your pet is catching the frisbee! Amazing! ╰(*°▽°*)╯ " << endl;
    } else {
      cout << "Invalid toy selection (｡•́︿•̀｡)" << endl;
    }
  } else if (user_choice == tasks[2]) {
    cout << "Time to feed your pet! (๑╹ڡ╹) ♡" << endl;
    cout << "What would you like to feed your pet? " << endl;
    cout << "Select 1 for kibble\nSelect 2 for treats\nSelect 3 for "
            "vegetables\nSelect 4 for meat\nSelect 5 for fish\nSelect 6 for "
            "berries\n"
         << endl;

    int food_choice;
    cout << "Choose the food: " << endl;
    cin >> food_choice;

    if (food_choice == 1) {
      cout << "Your pet is eating kibble! Nom nom nom! (っ˘ڡ˘ς)" << endl;
    } else if (food_choice == 2) {
      cout << "Your pet loves these treats! Yummy! (*^▽^*) ★" << endl;
    } else if (food_choice == 3) {
      cout << "Your pet is munching on vegetables! Healthy choice! ✧･ﾟ:* ✿"
           << endl;
    } else if (food_choice == 4) {
      cout << "Your pet is enjoying the meat! So delicious! (๑´ڡ`๑) ♥" << endl;
    } else if (food_choice == 5) {
      cout << "Your pet is eating fish! Fresh catch! ≧◡≦ " << endl;
    } else if (food_choice == 6) {
      cout << "Your pet is eating berries! Sweet and tasty! (｡♥‿♥｡) ☆" << endl;
    } else {
      cout << "Invalid food selection (｡•́︿•̀｡)" << endl;
    }
  } else if (user_choice == tasks[3]) {
    cout << "Time to put your pet to sleep! zzZ (ᴗ˳ᴗ)" << endl;
    cout << "Where would you like your pet to sleep? " << endl;
    cout
        << "Select 1 for a pet bed\nSelect 2 for a cozy blanket\nSelect 3 for "
           "a hammock\nSelect 4 for a cushion\nSelect 5 for a basket\nSelect 6 "
           "for your lap\n"
        << endl;

    int sleep_choice;
    cout << "Choose the sleeping spot: " << endl;
    cin >> sleep_choice;

    if (sleep_choice == 1) {
      cout << "Your pet is sleeping in their bed! Sweet dreams! (˘o˘)zzZ ☆"
           << endl;
    } else if (sleep_choice == 2) {
      cout << "Your pet is snuggled in a cozy blanket! So warm! (´ω`) ♡"
           << endl;
    } else if (sleep_choice == 3) {
      cout << "Your pet is swaying in the hammock! Peaceful! ( ˘ω˘ )zzz ✧"
           << endl;
    } else if (sleep_choice == 4) {
      cout << "Your pet is napping on a cushion! Comfy! (˘▽˘>ԅ( ˘⌣˘)" << endl;
    } else if (sleep_choice == 5) {
      cout << "Your pet is curled up in a basket! Adorable! ฅ(˘ω˘ )ฅ ♥" << endl;
    } else if (sleep_choice == 6) {
      cout << "Your pet is sleeping on your lap! You're the best! (｡♥‿♥｡) ★"
           << endl;
    } else {
      cout << "Invalid sleeping spot selection (｡•́︿•̀｡)" << endl;
    }
  } else if (user_choice == tasks[5]) {
    cout << "Thank you for taking care of your pet! Goodbye! (ﾉ◕ヮ◕)ﾉ*:･ﾟ✧"
         << endl;
  } else if (user_choice == tasks[4]) {
    cout << "=== Your Pet's Stats === ✧" << endl;
    cout << "Pet Type: Your chosen pet ♡" << endl;
    cout << "Happiness: ★★★★★ (5/5)" << endl;
    cout << "Hunger: ★★★☆☆ (3/5)" << endl;
    cout << "Energy  (4/5)" << endl;
    cout << "Love: ♥♥♥ 100% " << endl;
  } else {
    cout << "Invalid task selection! Please choose 1-6. (｡•́︿•̀｡)" << endl;
  }

  return 0;
}
