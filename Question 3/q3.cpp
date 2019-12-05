#include <iostream>
#include <iomanip>
#include <cmath>

  void line() {
    std::cout << "========================================================================================================\n";
  }

  float time(float d, float s) {
      float result;
      result = s / d;

      return(result);
  }

int main () {

    //These 2 lines set the decimal places throughout the project.
    std::cout << std::fixed;
    std::cout << std::setprecision(0);
    //Data order is Swim, Cycle, Run
    float Speed[] = {6.2, 52.8, 18.3};
    //Defining the array of disciplines
    char Disc[3][12] = { "Swimming", "Cylcing", "Running"};
    //Distance variables
    float Swim_Dist, Cyc_Dist, Run_Dist, Swim_Dist2, Cyc_Dist2, Run_Dist2, Swim_Dist3, Cyc_Dist3, Run_Dist3;
    //Defining race no.
    char race[3][12] = { "1st", "2nd", "3rd"};
    //Defining my array of variables
    float Dist[] = {Swim_Dist, Cyc_Dist, Run_Dist, Swim_Dist2, Cyc_Dist2, Run_Dist2, Swim_Dist3, Cyc_Dist3, Run_Dist3};

    //Loop that collects the data for each discipline, and each race, storing in variables
    for(int i = 0, n = -1, c = 0; i < 9; i++) {
  if (i % 3 == 0){
    if (i > 0){
      std::cout << "\n";
    }
    n = n + 1;
    c = 0;
    std::cout << race[n] << " Race:-\n";
  }
  std::cout << "Please insert a distance for " << Disc[c] << " in kilometers: ";
  std::cin >> Dist[i];
  c = c + 1;

  }

//Table showing distances for each disipline and total distance for each race.
std::cout << "\nRace\t|Swimming disatance\t|Cycling distance\t|Running Distance\t|Total Distance\n";
    line();
  for (int i = 0, n = 0; i < 10; i++){
    if (i > 0){
      if (i % 3 == 0){
        int Total = Dist[i-3] + Dist[i-2] + Dist[i-1];
        std::cout << Total << " Kilimeters\n";
      }}
if (i < 9){
  if (i % 3 == 0){
    std::cout << race[n] << "\t|";
    n = n + 1;
  }
  std::cout << Dist[i] << " Kilometers\t\t| ";
}}

// Calculations of times of each portion of each race.
std::cout << std::setprecision(2);
float Time[] = {Dist[0]/Speed[0], Dist[1]/Speed[1], Dist[2]/Speed[2], Dist[3]/Speed[0], Dist[4]/Speed[1], Dist[5]/Speed[2], Dist[6]/Speed[0], Dist[7]/Speed[1], Dist[8]/Speed[2]};


// Table showing times for each disipline and total time for each race.
std::cout << "\nRace\t|Swimming time\t\t|Cycling time\t\t|Running time\t\t|Total time\n";
    line();

    for (int i = 0, n = 0; i < 10; i++){
      if (i > 0){
        if (i % 3 == 0){
          float Total = (Time[i-3] + Time[i-2] + Time[i-1]);
          std::cout << Total << " Hours\n";
        }}
  if (i < 9){
    if (i % 3 == 0){
      std::cout << race[n] << "\t|";
      n = n + 1;
    }
    std::cout << Time[i] * 60 << " Minutes\t\t| ";
  }}



//=====================================Q2=======================================


// SWIMMING________________________________

  //Creating a variable for original Swim time

float New_Swim_Time[3] = {Time[0], Time[3], Time[6]};
 //In order: Cycling Shoes, Running Shoes, Flippers, Goggles and Sunglasses
 float Technical_Swim_Modifiers[5] = {0.9, 0.98, 1.6, 1.35, 0.9};
 //Creating an array to hold the information of the new times for the swimming
 float technical_clothing_swim[15];
 //Defining the new times taken to swim with the technical clothing (filling the array)

//calculating the times taken for each swimming portion of the race with each combination of clothing items.
 for(int i = 0, n = 0, c = 0; i < 15; i++) {
  if (i > 0){
   if (i % 5 == 0){
     n = n + 1;
     c = 0;
   }}
   technical_clothing_swim[i] = Technical_Swim_Modifiers[c] * New_Swim_Time[n];
   c = c + 1;
 }
std::cout << "\n";



// CYCLING_________________________________

//Creating a variable for original cycle time
  float New_Cycling_Time[3] = {Time[1], Time[4], Time[7]};

//In order: Cycling Shoes, Running Shoes, Flippers, Goggles and Sunglasses
float Technical_Cycling_Modifiers[5] = {1.12, 1.04, 0.95, 0.92, 1.08};
//Creating an array to hold the information of the new times for the cycling
float technical_clothing_cycling[15];
//Defining the new times taken to cycle with the technical clothing (filling the array)

//calculating the times taken for each cycling portion of the race with each combination of clothing items.
for(int i = 0, n = 0, c = 0; i < 15; i++) {
if (i > 0){
 if (i % 5 == 0){
   n = n + 1;
   c = 0;
 }}
 technical_clothing_cycling[i] = Technical_Cycling_Modifiers[c] * New_Cycling_Time[n];
 c = c + 1;
}
std::cout << "\n";



//RUNNING____________________________________

//Creating a variable for original cycle time
  float New_Run_Time[3] = {Time[2], Time[5], Time[8]};

//In order: Cycling Shoes, Running Shoes, Flippers, Goggles and Sunglasses
float Technical_Run_Modifiers[5] = {0.75, 1.25, 0.70, 0.88, 1.05};
//Creating an array to hold the information of the new times for the Running
float technical_clothing_run[15];
//Defining the new times taken to run with the technical clothing (filling the array)

//calculating the times taken for each running portion of the race with each combination of clothing items.
for(int i = 0, n = 0, c = 0; i < 15; i++) {
if (i > 0){
 if (i % 5 == 0){
   n = n + 1;
   c = 0;
 }}
 technical_clothing_run[i] = Technical_Run_Modifiers[c] * New_Run_Time[n];
 c = c + 1;
}

// Combinations_________________________________________________________________________________

// Caluating the full time of the technical clothing
float technical_clothing_time[14];
for (int i = 0; i < 15; i++) {
    technical_clothing_time[i] = (technical_clothing_swim[i] + technical_clothing_cycling[i] + technical_clothing_run[i]);
}

// caluating the combinations
float combinations[18];
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

// Second Race

combinations[6] = ((technical_clothing_time[5] + technical_clothing_time[8]) / 2);
//Cycling Shoes and Sunglasses
combinations[7] = ((technical_clothing_time[5] + technical_clothing_time[9]) / 2);
//Running Shoes and Goggles
combinations[8] = ((technical_clothing_time[6] + technical_clothing_time[8]) / 2);
//Running Shoes and Sunglasses
combinations[9] = ((technical_clothing_time[6] + technical_clothing_time[9]) / 2);
//Flippers and Goggles
combinations[10] = ((technical_clothing_time[7] + technical_clothing_time[8]) / 2);
//Flippers and Sunglasses
combinations[11] = ((technical_clothing_time[7] + technical_clothing_time[9]) / 2);

//Third Race

combinations[12] = ((technical_clothing_time[10] + technical_clothing_time[13]) / 2);
//Cycling Shoes and Sunglasses
combinations[13] = ((technical_clothing_time[10] + technical_clothing_time[14]) / 2);
//Running Shoes and Goggles
combinations[14] = ((technical_clothing_time[11] + technical_clothing_time[13]) / 2);
//Running Shoes and Sunglasses
combinations[15] = ((technical_clothing_time[11] + technical_clothing_time[14]) / 2);
//Flippers and Goggles
combinations[16] = ((technical_clothing_time[12] + technical_clothing_time[13]) / 2);
//Flippers and Sunglasses
combinations[17] = ((technical_clothing_time[12] + technical_clothing_time[14]) / 2);


char Equipment[6][15] = {"Cycling Shoes", "Goggles", "Sunglasses", "Running Shoes", "Flippers"};

//Tables showing the time taken for each combination to complete each race, given the distance inputted.

std::cout << "Race\t"<<"combination of technical clothing\t" << "|\ttime (hours)" << std::endl;
for (int i = 0, n = 0; i < 3; i++) {
  std::cout << "======================================================================" << std::endl;
    std::cout << race[i] <<"\t|Cycling shoes / Goggles          " << "\t" << "|" << "\t" << combinations[n] << std::endl;
    std::cout << "\t|Cycling shoes / Sunglasses       " << "\t" << "|" << "\t" << combinations[n+1] << std::endl;
    std::cout << "\t|Running shoes / Goggles          " << "\t" << "|" << "\t" << combinations[n+2] << std::endl;
    std::cout << "\t|Running shoes / Sunglasses       " << "\t" << "|" << "\t" << combinations[n+3] << std::endl;
    std::cout << "\t|Flippers / Goggles               " << "\t" << "|" << "\t" << combinations[n+4] << std::endl;
    std::cout << "\t|Flippers / Sunglasses            " << "\t" << "|" << "\t" << combinations[n+5] << std::endl;
    n = n + 6;
}
 // space for a new line
std::cout << "\n";

//Short description stating which combination of clothing items gives the fastest times for each of the races and displaying the time it it takes to complete (in hours)
for (int i = 0, n = 0; i < 18; i = i + 6){
if (combinations[i] < combinations[i+1] && combinations[i] < combinations[i+2] && combinations[i] < combinations[i+3] && combinations[i] < combinations[i+4] && combinations[i] < combinations[i+5]){
  std::cout << "For the " << race[n] <<" race the use of cycling shoes and goggles are the best combination of clothing items as they allow Johnny Redknees to complete the race the fastest possible time; being: "<< combinations[i] << " hours.\n\n";
}
if (combinations[i+1] < combinations[i] && combinations[i+1] < combinations[i+2] && combinations[i+1] < combinations[i+3] && combinations[i+1] < combinations[i+4] && combinations[i+1] < combinations[i+5]){
  std::cout << "For the " << race[n] <<" race the use of cycling shoes and sunglasses are the best combination of clothing items as they allow Johnny Redknees to complete the race the fastest possible time; being: "<< combinations[i+1] << " hours.\n\n";
}
if (combinations[i+2] < combinations[i] && combinations[i+2] < combinations[i+1] && combinations[i+2] < combinations[i+3] && combinations[i+2] < combinations[i+4] && combinations[i+2] < combinations[i+5]){
  std::cout << "For the " << race[n] <<" race the use of running shoes and goggles are the best combination of clothing items as they allow Johnny Redknees to complete the race the fastest possible time; being: "<< combinations[i+2] << " hours.\n\n";
}
if (combinations[i+3] < combinations[i] && combinations[i+3] < combinations[i+1] && combinations[i+3] < combinations[i+2] && combinations[i+3] < combinations[i+4] && combinations[i+3] < combinations[i+5]){
  std::cout << "For the " << race[n] <<" race the use of running shoes and sunglasses are the best combination of clothing items as they allow Johnny Redknees to complete the race the fastest possible time; being: "<< combinations[i+3] << " hours.\n\n";
}
if (combinations[i+4] < combinations[i] && combinations[i+4] < combinations[i+1] && combinations[i+4] < combinations[i+2] && combinations[i+4] < combinations[i+3] && combinations[i+4] < combinations[i+5]){
  std::cout << "For the " << race[n] <<" race the use of flippers and goggles are the best combination of clothing items as they allow Johnny Redknees to complete the race the fastest possible time; being: "<< combinations[i+4] << " hours.\n\n";
}
if (combinations[i+5] < combinations[i] && combinations[i+5] < combinations[i+1] && combinations[i+5] < combinations[i+2] && combinations[i+5] < combinations[i+3] && combinations[i+5] < combinations[i+4]){
  std::cout << "For the " << race[n] <<" race the use of flippers and sunglasses are the best combination of clothing items as they allow Johnny Redknees to complete the race the fastest possible time; being: "<< combinations[i+4] << " hours.\n\n";
}
n = n + 1;
}}
