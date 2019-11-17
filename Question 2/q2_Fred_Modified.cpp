#include <iostream>
#include <iomanip>
#include <cmath>

  void line() {
    std::cout << "==============================\n";
  }

  float time(float d, float s) {
      float result;
      //declaring the operations inside the function
      result = d / s;
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
      std::cout << "For " << Disc[i] << " distance, you entered: " << Dist[i] << " kilometers.\n";
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
        line();

        //This loop outputs our discipline and the accompanying time taken, it also sets the decimal places
        for (int i = 0; i < 3; i++) {
            std::cout << std::setprecision(3);
            std::cout << Disc[i] << " \t" << time(Dist[i], Speed[i]) * pow(60, 2) <<"\n";
              }
        }

    //This tells the user the total time
    std::cout << "\n" << std::setprecision(2);
    //This outputs the total time
    std::cout << "Therefore, the total time would be " << total << " Hours";

    //===================================== Q2 ========================================

    //Creating a variable for original Swim time
    float New_Swim_Time = time(Dist[0], Speed[0]);

    //In order: Cycling Shoes, Running Shoes, Flippers, Goggles and Sunglasses
    float Technical_Swim_Modifiers[5] = {0.9, 0.98, 1.6, 1.35, 0.9};

    //Creating an array to hold the information of the new times for the swimming
    float technical_clothing_swim[5];

    //Defining the new times taken to swim with the technical clothing (filling the array)
    for(int i = 0; i < 6; i++) {
      technical_clothing_swim[i] = Technical_Swim_Modifiers[i] * New_Swim_Time;
    }

    //Creating an array to hold the information of the new times for cycling
    float New_Cycling_Time = time(Dist[1], Speed[1]);

    //In order: Cycling Shoes, Running Shoes, Flippers, Goggles and Sunglasses
    float Technical_Cycling_Modifiers[5] = {1.12, 1.04, 0.95, 0.92, 1.08};

    //Creating an array to hold the information of the new times for the cycling
    float technical_clothing_cycling[5];

    //Defining the new times taken to swim with the technical clothing (filling the array)
    for(int i = 0; i < 6; i++) {
    technical_clothing_cycling[i] = Technical_Cycling_Modifiers[i] * New_Cycling_Time;
  }


  //Creating an array to hold the information of the new times for cycling
    float New_Run_Time = time(Dist[2], Speed[2]);

      //In order: Cycling Shoes, Running Shoes, Flippers, Goggles and Sunglasses
    float Technical_Run_Modifiers[5] = {0.75, 1.25, 0.70, 0.88, 1.05};

    //Creating an array to hold the information of the new times for the running
    float technical_clothing_run[5];

    //Defining the new times taken to swim with the technical clothing (filling the array)
    for(int i = 0; i < 6; i++) {
    technical_clothing_run[i] = Technical_Run_Modifiers[i] * New_Run_Time;
  }

    // Caluating the full time of the technical clothing
    float technical_clothing_time[5];
    for (int i = 0; i < 5; i++) {
        technical_clothing_time[i] = (technical_clothing_swim[i] + technical_clothing_cycling[i] + technical_clothing_run[i]);
    }

    // caluating the combinations
    float combinations[6];
    //Cycling Shoes and Goggles
    combinations[0] = ((technical_clothing_time[0] + technical_clothing_time[3]) / 2);
    //Cycling Shoes and Sunglasses
    combinations[1] = ((technical_clothing_time[0] + technical_clothing_time[4]) / 2);
    //Running Shoes and Goggles
    combinations[2] = ((technical_clothing_time[1] + technical_clothing_time[3]) / 2);
    //Running Shoes and Sunglasses
    combinations[3] = ((technical_clothing_time[1] + technical_clothing_time[4]) / 2);
    //Flippers and Goggles
    combinations[4] = ((technical_clothing_time[2] + technical_clothing_time[3]) / 2);
    //Flippers and Sunglasses
    combinations[5] = ((technical_clothing_time[2] + technical_clothing_time[4]) / 2);


  // for (int i = 0; i < 1; i++) {
        std::cout << "\n==============================================\n" << std::endl;
        std::cout << "combination of technical clothing" << "\t" << "|" << "\t" << "time (hours)" << std::endl;
        std::cout << "Cycling shoes / Goggles          " << "\t" << "|" << "\t" << combinations[0] << std::endl;
        std::cout << "Cycling shoes / Sunglasses       " << "\t" << "|" << "\t" << combinations[1] << std::endl;
        std::cout << "Running shoes / Goggles          " << "\t" << "|" << "\t" << combinations[2] << std::endl;
        std::cout << "Running shoes / Sunglasses       " << "\t" << "|" << "\t" << combinations[3] << std::endl;
        std::cout << "Flippers / Goggles               " << "\t" << "|" << "\t" << combinations[4] << std::endl;
        std::cout << "Flippers / Sunglasses            " << "\t" << "|" << "\t" << combinations[5] << std::endl;
  //  }



}
