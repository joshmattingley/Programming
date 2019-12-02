#include <iostream>
#include <ctime>
#include <cmath>
#include <stdio.h>
#include <fstream>


int main()
{
	// Creating variable
int random_distances[1000], i, cycling_distance, running_distance;

	cycling_distance = 40;
	running_distance = 10;

	//Data order is Swim, Cycle, Run
	float speed[3];
	speed[0] = 6.2;
	speed[1] = 52.8;
	speed[2] = 18.3;

	// time_combination 0 = cycling time | time_combination 1 = running time for flippers and goggles
	// time_combination 2 = cycling time | time_combination 3 = running time for sunglasses and cycling shoes
	float time_combination[4];
	time_combination[0] = speed[1] * 0.935;
	time_combination[1] = speed[2] * 0.79;
	time_combination[2] = speed[1] * 1.1;
	time_combination[3] = speed[2] * 0.9;

    // time 0 = cycling time | time 1 = running time for flippers and goggles
	// time 2 = cycling time | time 3 = running time for sunglasses and cycling shoes
	float times[4];
	times[0] = cycling_distance / time_combination[0];
	times[1] = running_distance / time_combination[1];
	times[2] = cycling_distance / time_combination[2];
	times[3] = running_distance / time_combination[3];

	float full_time_fg[1000], full_time_cs[1000], swimming_time_fg[1000], swimming_time_cs[1000], speed_fg, speed_cs;

	speed_fg = (speed[0] * 1.475);
	speed_cs = (speed[0] * 0.9);

	srand(time(NULL));

	std::cout << "Swimming Distance       Time fg (hours) Time cs (hours)" << std::endl;

	// Creating 1000 random distances between 1 and 20km and outputting them
	for (i = 0; i < 1000; i++) {

		random_distances[i] = rand() % 20 + 1;
		swimming_time_fg[i] = (random_distances[i] / speed_fg);
		swimming_time_cs[i] = (random_distances[i] / speed_cs);
		full_time_fg[i] = (swimming_time_fg[i] + times[0] + times[1]);
		full_time_cs[i] = (swimming_time_cs[i] + times[2] + times[3]);
		std::cout << i + 1  << "\t" << random_distances[i] << "\t" << "\t" << "\t" << full_time_fg[i] << "\t" << "\t" << full_time_cs[i] << std::endl;

	}

  float faster_time[] = {};

  for(int i = 0; i < 1000; i++){
    if(full_time_fg[i] < full_time_cs[i])
    faster_time[i] = full_time_fg[i];
    std::cout << faster_time[i] << "\n";
  }


  std::ofstream myFile;
  myFile.open("Results2.txt");

  myFile << "Swimming Distance       Time fg (hours) Time cs (hours)" << std::endl;

  for (i = 0; i < 1000; i++) {

    random_distances[i] = rand() % 20 + 1;
    swimming_time_fg[i] = (random_distances[i] / speed_fg);
    swimming_time_cs[i] = (random_distances[i] / speed_cs);
    full_time_fg[i] = (swimming_time_fg[i] + times[0] + times[1]);
    full_time_cs[i] = (swimming_time_cs[i] + times[2] + times[3]);
    myFile << i + 1  << "\t" << random_distances[i] << "\t" << "\t" << "\t" << full_time_fg[i] << "\t" << "\t" << full_time_cs[i] << std::endl;

  }

//  float faster_time[] = {};

  for(int i = 0; i < 1000; i++){
    if(full_time_fg[i] < full_time_cs[i])
    faster_time[i] = full_time_fg[i];
    myFile << faster_time[i] << "\n";
  }


  myFile.close();


}
