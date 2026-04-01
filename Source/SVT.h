#pragma once

void nBody(double dt);
void setupCudaEnvironment();
void readBasicSimulationSetupParameters();
void readIntermediateSimulationSetupParameters();
void readAdvancedSimulationSetupParameters();
void setup();
int main(int argc, char** argv);
