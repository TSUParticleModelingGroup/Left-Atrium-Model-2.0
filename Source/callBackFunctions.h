#pragma once

void reshape(GLFWwindow* window, int width, int height);
void mouseFunctionsOff();
void mouseAblateMode();
void mouseEctopicBeatMode();
void mouseEctopicEventMode();
void mouseAdjustMusclesAreaMode();
void mouseAdjustMusclesLineMode();
void mouseIdentifyNodeMode();
void setEctopicBeat(int nodeId);
void clearStdin();
string getTimeStamp();
void movieOn();
void movieOff();
void screenShot();
void saveSettings();
void saveState();
void loadState();
void findNodes();
void KeyPressed(GLFWwindow* window, int key, int scancode, int action, int mods);
void keyHeld(GLFWwindow* window);
void mousePassiveMotionCallback(GLFWwindow* window, double x, double y);
void myMouse(GLFWwindow* window, int button, int action, int mods);
void scrollWheel(GLFWwindow* window, double xoffset, double yoffset);
