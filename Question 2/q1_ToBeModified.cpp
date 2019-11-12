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
    char Disc[3][12] = {"Swimming", " Cylcing", " Running"};

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

}
