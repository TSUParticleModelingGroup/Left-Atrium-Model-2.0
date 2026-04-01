#pragma once

void setNodesFromBlenderFile();
void checkNodes();
void setBachmannBundleFromBlenderFile();
void setMusclesFromBlenderFile();
void linkNodesToMuscles();
double croppedRandomNumber(double stddev, double left, double right);
void findRadiusAndMassOfLeftAtrium();
void setRemainingNodeAndMuscleAttributes();
void getNodesandMusclesFromPreviousRun();
void setRemainingParameters();
void hardCodedAblations();
void hardCodedPeriodicEctopicEvents();
void hardCodedIndividualMuscleAttributes();
void checkMuscle(int muscleId);
