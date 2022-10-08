#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <cstdlib>

//terminal > run build task to compile
int main(){
  std::string cont;
  std::cout << "Welcome to 'Can You Cook?' This is a small, snarky adventure in the kitchen to try and make something simple without screwing up, or screwing up on purpose to see what happens. To begin, press any key and then press 'Enter'.\n\n";
  std::cin >> cont;
  std::cout << "\n\n";
  std::cout << "It's about time to eat something, and you completely spaced on doing the food shopping.\n";
  std::cout << "Unfortunately some crazy circumstance has you unable to make it to the supermarket right now\n";
  std::cout << "(let's be honest, you're just too lazy at the moment), so your kitchen is looking pretty bare.\n\n";
  //variable for what path player is choosing (breakfast, lunch, dinner)
  std::string meal = " ";
  /*std::cout << "Is it breakfast, lunch, or dinner time?\n";
  std::cin >> meal;*/
  while((meal != "breakfast") and (meal != "lunch") and (meal != "dinner")){
    std::cout << "Is it breakfast, lunch, or dinner time?\n";
    std::cin >> meal;
  if(meal == "breakfast"){
    std::cout << "Alright, it's breakfast time. Looks like you really only have eggs to make, so you decide on that\n\n";
  }
  else if(meal == "lunch"){
    std::cout << "Alright, it's lunch time. Man, you really need to go shopping. PB&J isn't that filling, but it's all you got, so you decide on that.\n\n";
  }
  else if(meal == "dinner"){
    std::cout << "Alright, it's dinner time. You've only got a box of pasta left, but it should at least last you a day or two, so you decide on that.\n\n";
  }
  else{
    std::cout << "Please choose a valid mealtime (yes, I'm aware snacks exist but let's pretend you don't have those ;) )\n";
  }
  }
  if (meal == "breakfast"){
    std::string eggType = " ";
    std::cout << "Time to decide on how to make these eggs. The quick and simple 'over-easy' style, or the slightly messier, but probably more consistent 'scrambled' style.\n";
    /*std::cout << "Which kind are you going to make?\n";
    std::cout << "1) Over-easy\n";
    std::cout << "2) Scrambled\n";
    std::cin >> eggType;*/
    
    while((eggType != "1") and (eggType != "over-easy") and (eggType != "2") and (eggType != "scrambled")){
    std::cout << "Which kind are you going to make?\n";
    std::cout << "1) Over-easy\n";
    std::cout << "2) Scrambled\n";
    std::cin >> eggType;
    std::cout << "\n";
    
    if(eggType == "1" or eggType =="over-easy"){
        std::cout << "Over-easy it is.\n\n";
        std::cout << "You go to the fridge and get the eggs, cracking them directly into the frying pan.\n";
        std::cout << "After a minute or so of waiting for the eggwhites to, well, turn white. It's time to flip them over.\n";
        std::cout << "Flip the eggs? Y/N \n";
        std::string flipEggs = " ";
        int flipCount = 2;
        std::cin >> flipEggs;
      while(flipCount > 0){
        if((flipEggs == "y" or flipEggs == "Y")){
          if (flipCount != 0)
          {
            std::cout << "You flip the eggs, finding you'll need to flip them maybe " << flipCount - 1 <<" more times for them to be done \n";
            flipCount--;
            std::cout << "Flip the eggs? Y/N \n";
            std::cin >> flipEggs;
          }
        else{
          std::cout << "Please pick a valid option. Your options are 'Y' or 'N'\n\n";
          std::cout << "Flip the eggs? Y/N \n";
          std::cin >> flipEggs;
        }
      }
      else if (flipEggs == "n" or flipEggs == "N")
      {
          std::cout << "You let the eggs sit.\n";
          std::cout << "and sit...\n";
          std::cout << "and sit...\n";
          std::cout << "until the eggs burn.\n\n";
          std::string gameOver1 = " ";
          std::cout << "Well, you tried I guess. At least you found some stale cereal you can eat dry for now. Quit and try again.\n\n";
          std::cin >> gameOver1;
          return 0;
      }
      else{
          std::cout << "Please pick a valid option. Your options are 'Y' or 'N'\n\n";
          std::cout << "Flip the eggs? Y/N \n";
          std::cin >> flipEggs;
        }     
    }  
    while (flipCount == 0)
    {
      if (flipEggs == "y" or flipEggs == "Y")
      {
            std::cout << "You continue to flip the eggs past the point where they should be done. Luckily making sure not to burn them.\n";
            std::cout << "Once\n";
            std::cout << "Twice\n";
            std::cout << "Three times.\n\n";
            std::cout << "It feel like you might've flipped the eggs a bit too high when it takes a moment or two for them to come back down.\n";
            std::cout << "You start to wonder where they went. That is, until they come flying back down, landing right smack in the middle of your forehead.\n";
            std::cout << "Talk about egg on your face.\n";
            std::string gameOver2 = " ";
            std::cout << "Next time try not to get so into the moment that you forget what you're doing. Quit and try again.\n\n";
            std::cin >> gameOver2;
            return 0;
      }
      else if (flipEggs == "n" or flipEggs == "N")
      {
        std::cout << "You flip the eggs twice, making sure that the yolk is still a little runny, maybe slightly browned on the edges.\n";
        std::cout << "Congratulations, you've successfully managed to make yourself some eggs over-easy to sate yourself this morning.\n";
        std::string success1 = " ";
        std::cout << "Feel free to go back and try another path. Press any key to close this window.\n";
        std::cin >> success1;
        return 0;
      }
      else
      {
        std::cout << "Please pick a valid option. Your options are 'Y' or 'N'\n\n";
        std::cout << "Flip the eggs? Y/N \n";
        std::cin >> flipEggs;
      }
    }
  }
  else if(eggType == "2" or eggType == "scrambled"){
        std::cout << "Scrambled like my thoughts.\n\n";
        std::cout << "You go to the fridge and get some eggs, cracking them into a bowl and pouring in a small amount of milk to\n";
        std::cout << "make them fluffier when poured into the pan.\n\n";
        std::cout << "You chop up and scramble the eggs around in the pan, waiting for them to finish cooking.\n";
        int eggCounter = 0;
        std::cout << "About how long do you mess around with the eggs for while waiting? (In minutes)\n";
        std::cin >> eggCounter;
        switch (eggCounter)
        {
        case 1 ... 9:{
          std::cout << "You don't wait very long to try out the eggs. Unfortunately, they're still very watery and undercooked.\n";
          std::cout << "If you were in a rush, it might've just been better to put em in a mug and microwave em.\n";
          std::string gameOver3 = " ";
          std::cout << "Give it another shot, eggs come in cartons of 12 after all. Exit and try again.\n";
          std::cin >> gameOver3;
          return 0;
        }
          case 10 ... 25:{
          std::cout << "You give the eggs some time to cook, making sure they're done if a little bit juicy, and transfer them from the pan to a plate or bowl.\n";
          std::cout << "Don't forget to throw a little salt on them, maybe some pepper and whatever you'd use as a topping. Like ketchup.\n";
          std::string success2 = " ";
          std::cout << "Good job! You've made some scrambled eggs and have a decent hot breakfast. Go ahead and try some of the other paths.\n";
          std::cout << "To exit, press any key\n";
          std::cin >> success2;
          return 0;
          }
          case 26 ... 45:{
          std::cout << "You keep tossing the eggs around in the pan, getting a bit lost in the action as time passes.\n";
          std::cout << "The eggs go from watery, to done, to well done, to burnt.\n";
          std::cout << "They're looking a little more like gristle than eggs at this point, but I guess they're still edible?\n";
          std::string gameOver4 = " ";
          std::cout << "You could try to eat em, but maybe it'd be better to just give it another go. Press any key to exit and start over.\n";
          std::cin >> gameOver4;
          return 0;
          }
        default:{
        std::cout << "Numbers only, please. Preferrably between 1 and 45.\n";
        std::cin >> eggCounter;
          break;
        }
        }
    }
    else{
        std::cout << "Make a valid selection. These are your options.\n";
    }
}
  
  //return 0;
}
else if (meal == "lunch")
{
  std::cout << "PB&J, simple, fairly tasty, something to tide you over for now. Not really too many ways to mess it up either.\n";
  std::cout << "You get the bread, peanut-butter, and jelly/jam/preserves/whatever it is you prefer, out of the pantry.\n";
  std::cout << "I guess the only real question here is, do you toast your bread? (Y/N)\n";
  std::string toastChoice = " ";
  std::cin >> toastChoice;
  if (toastChoice == "Y" or toastChoice == "y")
  {
    std::cout << "Ok, so you eat your sandwiches on toast. Guess it's pretty decent, especially if the bread is starting to get stale anyway.\n";
    std::cout << "You take a couple slices out of the bag, seal it back up, and put the slices in the toaster (or toaster oven, whichever).\n\n";
    std::cout << "While it's nice to have bread toasted, you remember you're still low on groceries, so you gotta make it count.\n";
    std::cout << "Also you just don't want burnt bread. It tastes terrible.\n";
    int toastTimer = 0;
    std::cout << "Anyway, the bread is in the toaster. How long do you put it in for? (in # of minutes)\n";
    std::cin >> toastTimer;
    std::cout << "\n";
    switch (toastTimer)
        {
        case 0 ... 2:{
          std::cout << "After about " << toastTimer << " minutes, the toaster dings and you grab your bread.\n";
          std::cout << "It's barely even toasted and is pretty much just stale bread still.\n";
          std::cout << "Could probably have put it in a little longer, I mean, if you wanted stale bread, you could've just let it sit out for an hour or so.\n";
          std::cout << "Better go back and give it another shot.\n";
          std::string gameOver5 = " ";
          std::cout << "Exit and try again.\n";
          std::cin >> gameOver5;
          return 0;
        }
          case 3 ... 5:{
          std::cout << "The toaster goes off after " << toastTimer << " minutes, popping the somewhat browned and toasted bread out.\n";
          std::cout << "Looking good! It's more than stale bread and it's not burnt.\n";
          std::string success3 = " ";
          std::cout << "You slap the bread on a plate, carelessly getting crumbs everywhere. I hope you cleaned that up, because that's how you get ants.\n";
          std::cout << "The peanut-butter spreads farely easily on the still warm bread, melting a little bit with the jelly going right on top, followed by the 2nd toasted slice.\n";
          std::cout << "Good job! You made lunch! Now go food shopping, you need it. Press any key to exit\n";
          std::cin >> success3;
          return 0;
          }
          case 6 ... 8:{
          std::cout << toastTimer << " minutes huh, guess you like your toast pretty dark.\n";
          std::cout << "Either way, the toast comes out just fine. Not lightly toasted, but not charred either, maybe at most you scrape off some with your knife.\n";
          std::cout << "You finish making your sandwich, spreading the jelly on one slice, peanut-butter on the other. Toast makes it a lot easier too if you like it crunchy.\n";
          std::string success4 = " ";
          std::cout << "BUT, you did it. You made your lunch. Sure, you probably made a bit of a mess, but you'll get to that later.\n";
          std::cout << "It's now later. Press any key to exit and go clean up your mess.\n";
          std::cin >> success4;
          return 0;
          }
          case 9 ... 20:{
          std::cout << "Ohh boy. A long time passes, but the toaster finally pops your bread out. IF it can still be called bread at this point.\n";
          std::cout << "It's entirely blackened and charred, and starts falling apart in your hand as you try to pick it up.\n";
          std::cout << "Not even scraping it with a knife is gonna save it this time. You may as well throw it in your BBQ grill if you have one.\n";
          std::string gameOver6 = " ";
          std::cout << "Only thing you can really do at this point is grab a couple more pieces of bread and start over.\n";
          std::cout << "So press any key to exit, and do just that.\n";
          std::cin >> gameOver6;
          return 0;
          }
        default:{
        std::cout << "Numbers between 1 and 20 only. That is, unless you feel like burning your kitchen down.\n";
        std::cin >> toastTimer;
          break;
        }
        }
  }
  else if (toastChoice == "N" or toastChoice == "n")
  {
    std::cout << "The raw bread type, eh? Either way works. Sometimes you just want a soft sandwich.\n";
    std::cout << "Just be careful not to press too hard while spreading, especially if you're using crunchy peanut-butter. You'll tear the bread.\n\n";
    std::cout << "You put a couple slices of bread on a plate, and open the jars of peanut-butter and jelly.\n";
    std::cout << "The peanut-butter spreads on just fine, if stretching the bread a bit.\n";
    std::cout << "Now the jelly. It can be kinda hard to spread sometimes, so you might opt to just throw more on so you don't have to.\n";
    std::string twiceJelly = " ";
    std::cout << "Do you double the jelly on the sandwich? It might make the bread soggy. (Y/N)\n";
    std::cin >> twiceJelly;
    std::cout << "\n";
    if (twiceJelly == "y" or twiceJelly == "Y")
    {
      std::cout << "You throw more jelly on the sandwich. And more. And more. Making sure the peanut-butter is entirely covered.\n";
      std::cout << "I think you might've used a bit too much, because before you know it, you're out of jelly.\n";
      std::cout << "Also the peanut-butter is entirely covered. And your bread is soggy.\n";
      std::cout << "I mean, you COULD still eat it, it's not inedible, but you have more of a PB&J soup than a sandwich right now.\n";
      std::cout << "You're probably better off starting over. Press any key to exit and do so.\n";
      std::string gameOver7 = " ";
      std::cin >> gameOver7;
      return 0;
    }
    else if (twiceJelly == "n" or twiceJelly == "N")
    {
      std::cout << "No extra jelly, got it. Probably for the best, it'd have most likely made your sandwich into more of a soup instead.\n\n";
      std::cout << "You put a moderate amount of jelly onto the sandwich, spreading it out over the opposite piece of bread and sticking the slices together.\n";
      std::cout << "Congratulations you made an edible sandwich! Be proud!\n";
      std::string success5 = "";
      std::cout << "Now make sure you have some milk to wash it down with. Unless you're lactose intolerant of course, then don't do that.\n";
      std::cout << "Press any key to close the game.\n";
      std::cin >> success5;
      return 0;
    }
    else {
      std::cout << "Yes or No answers only for this one, you broke it. Try again.\n";
      std::string exit1 = "";
      std::cin >> exit1;
      return 0;
    }
  }
}
else if (meal == "dinner")
{
  std::cout << "Pasta Pasta Pasta, a box of Rigatoni.\n";
  std::cout << "Okay, this one is REALLY hard to mess up. Like, I actually had trouble thinking of much for this one.\n\n";
  std::cout << "You pull out the box of pasta, all it needs is some water, maybe a little salt to taste, and a pot for it to boil in.\n";
  std::cout << "As per the directions, you run the pot under your kitchen tap to fill it.\n";
  int cupsOfWater = 0;
  std::cout << "How many cups of water do you fill the pot with? (Numbers between 1 and 10 please)\n";
  std::cin >> cupsOfWater;
  std::cout << "\n";
  switch (cupsOfWater)
        {
        case 0 ... 3:{
          std::cout << "You run the pot under the water, but don't really give it enough time to fill.\n";
          std::cout << "In fact, it's not even enough water to cover the pasta entirely.\n";
          std::cout << "You TRY to boil it over the stove, but really you just end up with a bunch of steam and some burnt pasta.\n";
          std::cout << "I'd say give this one another go, with a bit more water this time.\n";
          std::string gameOver7 = " ";
          std::cout << "Press a button to exit and try again.\n";
          std::cin >> gameOver7;
          return 0;
        }
          case 4 ... 6:{
          std::cout << "The pot fills about halfway to 3/4 full under the tap. Plenty of water for the pasta to cook in.\n";
          std::cout << "You put the pot on the stove, shake some salt in to help it boil, and once it does, pour the pasta in.\n";
          std::string success5 = " ";
          std::cout << "After about 7 or 8 minutes of it cooking to make sure it's 'al-dente', you take it off the heat and drain it.\n";
          std::cout << "Looks like it's cooked pretty well! All it needs now is some sauce, which you may or may not have.\n";
          std::cout << "What matters is that it's done, cooked, and edible for a quick dinner. All that's really left now is to clean the dishes.\n";
          std::cout << "So get to it. Press any key to exit and go clean up.\n";
          std::cin >> success5;
          return 0;
          }
          case 7 ... 10:{
          std::cout << "I don't really know if the pot was just forgotten about, or something else caught your attention, but the pot nearly overfills with water.\n";
          std::cout << "In fact, it pretty much does, water spilling over the sides into the sink. You try and cook the pasta in it anyway though.\n";
          std::cout << "As it starts to boil, more water spills over the sides, creating a lot of steam. Although I wouldn't recommend putting in the pasta at this point, you do it anyway.\n";
          std::string gameOver8 = " ";
          std::cout << "Just like would be expected, the starch gets everywhere, making a huge mess, getting the stove wet and sticky and leaving the pasta undercooked.\n";
          std::cout << "You really just made a mess more than you made dinner. Ah well, time to get to cleaning. At least you're going food shopping soon, right?\n";
          std::cout << "Press any key to quit and try again\n";
          std::cin >> gameOver8;
          return 0;
          }
        default:{
        std::cout << "Numbers between 1 and 10 only please. I don't think anyone has a pot THAT big.\n";
        std::cin >> cupsOfWater;
          break;
        }
        }
}
}