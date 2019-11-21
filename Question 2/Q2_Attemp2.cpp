#include <iostream>
#include <iomanip>
#include <cmath>
#include <bits/stdc++.h>

  void line_small() {
    std::cout << "==============================\n";
  }

  void line_big() {
    std::cout << "\n===============================================\n" << std::endl;
  }

  //function to calculate time
  float time(float d, float s) {
      float result;
      //declaring the operations inside the function
      result = d / s;
      return(result);
  }

  //function to convert kilometers to meters
  float Kilo(float n) {
    float result;
    //declaring the operations inside the function
    result = n * 10000;
    return(result);
  }

  //function to convert hours to seconds
  float seconds(float n) {
    float result;
    //declaring the operations inside the function
    result = n * pow(60, 2);
    return(result);
  }

int main () {

    //These 2 lines set the decimal places throughout the project.
    std::cout << std::fixed;
    std::cout << std::setprecision(0);

    //Data order is Swim, Cycle, Run
    float Speed[] = {6.2, 52.8, 18.3};

    //Defining the array of disciplines
    char Disc[3][12] = {"Swimming", " Cycling", " Running"};

    //Distance variables
    float Swim_Dist, Cyc_Dist, Run_Dist;

    //Defining my array of variables
    float Dist[] = {Swim_Dist, Cyc_Dist, Run_Dist};

    //Loop that collects the data for each discipline, storing in variables
    for(int i = 0; i < 3; i++) {
      std::cout << "Please insert a distance for " << Disc[i] << " in kilometers: ";
      std::cin >> Dist[i];
    }

    //Adding a gap (makes it tidy)
    std::cout << std::endl;

    //This is the friendly message, output to the user recalling their values.
    for (int i = 0; i < 3; i++) {
      std::cout << "For " << Disc[i] << " distance, you entered: " << Kilo(Dist[i]) << " meters.\n";
    }

    //This sums up the times to complete each section.
    float total = time(Dist[0], Speed[0]) + time(Dist[1], Speed[1]) + time(Dist[2], Speed[2]);


    //This if statement forces the user to enter positive integers for the distances
    if (Dist[0] < 0 || Dist[1] < 0 || Dist [2] < 0){
      std::cout << "Please enter positive distances!";
    }
      else {
        //Setting up heading of the title
        std::cout << "\n" << "Discipline\t" << "Time Taken (s)\n";
        line_small();

        //This loop outputs our discipline and the accompanying time taken, it also sets the decimal places
        for (int i = 0; i < 3; i++) {
            std::cout << std::setprecision(3);
            std::cout << Disc[i] << " \t" << seconds(time(Dist[i], Speed[i])) <<"\n";
              }
        }

    //This tells the user the total time
    std::cout << "\n" << std::setprecision(2);
    //This outputs the total time
    std::cout << "Therefore, the total time would be " << total << " hours.";

    std::cout << "\n\n";

// Q2 ========================================================================================

//We are working out the Speed change for each piece of clothing for each

    //How the Cycling Shoes and Sunglasses effect The speed:
      float Cycling_Technical_Time_Modifiers[6] = {1.2096, 1.1232, 1.0304, 0.9568, 1.026, 0.874};

      float Cycling_Technical_Time[6];

      for (int i = 0; i < 6; i++) {
        Cycling_Technical_Time[i] = time(Dist[1], Speed[1]) * Cycling_Technical_Time_Modifiers[i];
      }

//=========================================== Running =====================================

    float Running_Technical_Time_Modifiers[6] = {0.7875, 1.3125, 0.66, 1.1, 0.735, 0.616};

    float Running_Technical_Time[6];

    for(int i = 0; i < 6; i++) {
      Running_Technical_Time[i] = time(Dist[2], Speed[2]) * Running_Technical_Time_Modifiers[i];
    }

//=========================================== Swimming =====================================


  float Swimming_Technical_Time_Modifiers[6] = {0.81, 0.882, 1.215, 1.323, 1.44, 2.16};

  float Swimming_Technical_Time[6];

  for(int i = 0; i < 6; i++) {
    Swimming_Technical_Time[i] = time(Dist[0], Speed[0]) * Swimming_Technical_Time_Modifiers[i];
  }




      for (int i = 0; i < 6; i++) {
        std::cout << "Discipline\t" << "Time taken\n";

        line_small();

        std::cout << "Cycling time\t" << Cycling_Technical_Time[i] << std::endl;
        std::cout << "Swimming time\t" << Swimming_Technical_Time[i] << std::endl;
        std::cout << "Running time\t" << Running_Technical_Time[i] << std::endl << std::endl;
      }










  }
