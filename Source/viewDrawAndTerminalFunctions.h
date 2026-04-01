#pragma once

void renderSphere(float radius, int slices, int stacks);
void createSphereVBO(float radius, int slices, int stacks);
void renderSphereVBO();
void orthogonalView();
void frustumView();
float4 findCenterOfMass();
void centerObject();
void rotateXAxis(float angle);
void rotateYAxis(float angle);
void rotateZAxis(float angle);
void ReferenceView();
void PAView();
void APView();
void setView(int view);
void drawPicture();
void createGUI();
