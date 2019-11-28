#include <iostream>
#include <fstream>
#include <ctime>
#include <stdio.h>

//function to calculate time
float time(float d, float s) {
    float result;
    //declaring the operations inside the function
    result = d / s;
    return(result);
}

int main() {

    srand(time(NULL));

    int Min, Max;

    std::cout << "Enter a Minimum Distance: ";
    std::cin >> Min;

    std::cout << "Enter a Maximum Distance: ";
    std::cin >> Max;

    float Random_Distances[1000] = {};

    for (int i = 0; i < 1000; i++) {
      Random_Distances[i] = rand() % Max + Min;
    }

    float swimming_g_f, swimming_cs_sg;


    //===================Goggles and Flppers==============

    swimming_g_f = 0.81;

    float Random_g_f_Times[1000] = {};

    float g_f_Run_Time, g_f_Cycle_Time;

    g_f_Run_Time = time(10000, 18.3 * (0.7 * 0.88));
    g_f_Cycle_Time = time(40000, 52.8 * (0.95 * 0.92));

    float largest = Random_g_f_Times[0];


  for (int i = 0; i < 1000; i++) {
      Random_g_f_Times[i] = time(Random_Distances[i], 6.2 * swimming_g_f) + g_f_Run_Time + g_f_Cycle_Time;
    //  std::cout << Random_g_f_Times[i] << std::endl;
  }

//====================sunflasses and cycling shoes=====================#

    swimming_cs_sg = 2.16;

    float Random_cs_sg_TImes[1000] = {};

    float cs_sg_Run_Time, cs_sg_Cycle_Time;

    cs_sg_Run_Time = time(10000, 18.3 * (0.75 * 1.05));
    cs_sg_Cycle_Time = time(40000, 52.8 * (1.12 * 1.08));

    for (int i = 0; i < 1000; i++) {
      Random_cs_sg_TImes[i] = time(Random_Distances[i], 6.2 * swimming_cs_sg) + cs_sg_Run_Time + cs_sg_Cycle_Time;
      }

      float m;


      for (int i = 0; i < 1000; i++) {
        if(Random_g_f_Times[i] < Random_cs_sg_TImes[i]) {
          m = Random_g_f_Times[i];
          std::cout << m << "\n";
        }
      }

      //if(m > 0) {
      //  std::cout << m << "\n";
      //}
      //else{
    //    std::cout << "There is no faster time";
  //    }


      std::ofstream myFile;
      myFile.open("Results.txt");

      myFile << "G_F" << "CS_SG\n";

      for(int i = 0; i < 1000; i++) {
        myFile << Random_g_f_Times[i] << "\t\t" << Random_cs_sg_TImes[i] << std::endl;
        }


    //  myFile << "\t" << Random_Distances[i] << std::endl;


      myFile.close();

}
