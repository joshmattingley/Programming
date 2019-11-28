#include <iostream>
#include <ctime>
#include <fstream>
#include <cmath>
#include <stdio.h>


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
      //de claring the operations inside the function
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

    srand (time(0));


    //this array stores the decimal modifiers for swimming
    float Swimming_Technical_Time_Modifiers[6] = {0.81, 0.882, 1.215, 1.323, 1.44, 2.16};

    float uk_Time_Taken_Random_Distances[1000] = {};
    float k_Time_Taken_Random_Distances[1000] = {};


  int Random_Distances[1000] = {};

  for (int i = 0; i <= 1000; i++) {
    Random_Distances[i] = rand() % 20000 + 1000;
  }


  //  float Random_Run_Time[1000] = {};
//    float Random_Cycle_Time[1000] = {};


      float Random_Run_Time = time(10000, 18.3 * (0.88 * 0.7));
      float Random_Cycle_Time = time(40000, 52.8 * (0.95 * 0.92));


    float uk_Total_Rand_Time[1000];






    float n;

    for(int i = 0; i < 1000; i++) {
      uk_Time_Taken_Random_Distances[i] = time(Random_Distances[i], 6.2 * Swimming_Technical_Time_Modifiers[0]);
      k_Time_Taken_Random_Distances[i] = time(Random_Distances[i], 6.2 * Swimming_Technical_Time_Modifiers[5]);

      }


      for(int i = 0; i < 1000; i++) {
        uk_Total_Rand_Time[i] = Random_Run_Time + Random_Cycle_Time + uk_Time_Taken_Random_Distances[i];
      }

      for (int i = 0; i < 1000; i++) {
        std::cout << uk_Total_Rand_Time[i] << "\t" << k_Time_Taken_Random_Distances[i[] << std::endl;
      }










  //std::ofstream myFile;
  //myFile.open("Results.txt");

  //myFile << "Dist\t" << "Time:\n\n";

  //for(int i = 0; i <= 1000; i++) {
//    uk_Time_Taken_Random_Distances[i] = time(Random_Distances[i], 6.2 * Swimming_Technical_Time_Modifiers[5]);

    //myFile << "\t" << Random_Distances[i] << std::endl;
  //}

  //myFile.close();


  //  if(Time_Taken_Random_Distances[i] < )




}


//create 1000 numbers, calculate their time, if any numbers
//in that array is greater than cycling shoes and sunglasses [o] with [5]
