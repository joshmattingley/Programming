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
      std::cout << "For " << Disc[i] << " distance, you entered: " << Dist[i] << " meters\n";
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

    // technical clothing swimming
    // 0 = cycling shoes, 1 = running shoes, 2 = flippers, 3 = goggles, 4 = sunglasses
    float technical_clothing_swim[5];
    technical_clothing_swim[0] = ((time(Dist[0], Speed[0]))*0.9);
    technical_clothing_swim[1] = ((time(Dist[0], Speed[0]))*0.98);
    technical_clothing_swim[2] = ((time(Dist[0], Speed[0]))*1.6);
    technical_clothing_swim[3] = ((time(Dist[0], Speed[0]))*1.35);
    technical_clothing_swim[4] = ((time(Dist[0], Speed[0]))*0.9);

    // technical clothing cycling
    float technical_clothing_cycling[5];
    technical_clothing_cycling[0] = ((time(Dist[1], Speed[1]))*1.12);
    technical_clothing_cycling[1] = ((time(Dist[1], Speed[1]))*1.04);
    technical_clothing_cycling[2] = ((time(Dist[1], Speed[1]))*0.95);
    technical_clothing_cycling[3] = ((time(Dist[1], Speed[1]))*0.92);
    technical_clothing_cycling[4] = ((time(Dist[1], Speed[1]))*1.08);

    // technical clothing Running
    float technical_clothing_run[5];
    technical_clothing_run[0] = ((time(Dist[2], Speed[2]))*0.75);
    technical_clothing_run[1] = ((time(Dist[2], Speed[2]))*1.25);
    technical_clothing_run[2] = ((time(Dist[2], Speed[2]))*0.7);
    technical_clothing_run[3] = ((time(Dist[2], Speed[2]))*0.88);
    technical_clothing_run[4] = ((time(Dist[2], Speed[2]))*1.05);

    // Caluating the full time of the technical clothing
    float technical_clothing_time[5];
    for (int i = 0; i < 5; i++) {
        technical_clothing_time[i] = (technical_clothing_swim[i] + technical_clothing_cycling[i] + technical_clothing_run[i]);
    }

    // caluating the combinations
    // 0=cycling shoes / goggles, 1=cycling shoes / sunglasses,
    // 2=running shoes / goggles, 3=running shoes / sunglasses,
    // 4=flippers / goggles, 5=flippers / sunglasses
    float combinations[6];
    combinations[0] = ((technical_clothing_time[0] + technical_clothing_time[3]) / 2);
    combinations[1] = ((technical_clothing_time[0] + technical_clothing_time[4]) / 2);
    combinations[2] = ((technical_clothing_time[1] + technical_clothing_time[3]) / 2);
    combinations[3] = ((technical_clothing_time[1] + technical_clothing_time[4]) / 2);
    combinations[4] = ((technical_clothing_time[2] + technical_clothing_time[3]) / 2);
    combinations[5] = ((technical_clothing_time[2] + technical_clothing_time[4]) / 2);


    for (int i = 0; i < 1; i++) {
        std::cout << "\n==============================\n" << std::endl;
        std::cout << "combination of technical clothing" << "\t" << "|" << "\t" << "time (hours)" << std::endl;
        std::cout << "Cycling shoes / Goggles          " << "\t" << "|" << "\t" << combinations[0] << std::endl;
        std::cout << "Cycling shoes / Sunglasses       " << "\t" << "|" << "\t" << combinations[1] << std::endl;
        std::cout << "Running shoes / Goggles          " << "\t" << "|" << "\t" << combinations[2] << std::endl;
        std::cout << "Running shoes / Sunglasses       " << "\t" << "|" << "\t" << combinations[3] << std::endl;
        std::cout << "Flippers / Goggles               " << "\t" << "|" << "\t" << combinations[4] << std::endl;
        std::cout << "Flippers / Sunglasses            " << "\t" << "|" << "\t" << combinations[5] << std::endl;
    }



}
