#pragma once

__device__ void turnOnNodeMusclesGPU(int nodeToTurnOn, int numberOfNodes, int musclesPerNode, muscleAttributesStructure *muscle, nodeAttributesStructure *node);
__global__ void getForces(muscleAttributesStructure *muscle, nodeAttributesStructure *node, float dt, int numberOfNodes, float4 centerOfSimulation, float muscleCompressionStopFraction, float radiusOfLeftAtrium, float diastolicPressureLA, float systolicPressureLA);
__global__ void updateNodes(nodeAttributesStructure *node, int numberOfNodes, int musclesPerNode, muscleAttributesStructure *muscle, float drag, float dt, float time, bool contractionIsOn);
__global__ void updateMuscles(muscleAttributesStructure *muscle, nodeAttributesStructure *node, int numberOfMuscles, int numberOfNodes, float dt, float4 readyColor, float4 depolarizingColor, float4 repolarizingColor, float4 relativeRepolarizingColor);
__global__ void recenter(nodeAttributesStructure *node, int numberOfNodes, float massOfLA, float4 centerOfSimulation);
void cudaErrorCheck(const char *file, int line);
void copyNodesMusclesToGPU();
void copyNodesMusclesFromGPU();
void copyNodesFromGPU();
void copyNodesToGPU();
