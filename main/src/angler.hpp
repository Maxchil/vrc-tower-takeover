#pragma once
#include "main.h"
#include "config.hpp"

#include "fBar.hpp"
#include "drive.hpp"
#include "controller.hpp"
#include "logging.hpp"
#include "tracking.hpp"
#include <iostream>
#include <cmath>
#include <memory>
#include <vector>
using namespace std;
using namespace pros;
constexpr double ANGLER_TOP = 8000;
constexpr double ANGLER_MID = 4000;

enum class anglerStates {
  Idle,
  Mid,
  DriveAround,
  Push,
  CubeOutLast,
  BetweenTop,
  CubeOutFirst,
  Top
};


void intakeOn();
void intakeReverse();
void startDropOff();
void stopDropOff();
void dropOff(void *param);
void setAnglerState(anglerStates state);
void anglerCal();
void anglerHandle();
extern anglerStates anglerState ;
extern anglerStates anglerStateLast;
extern int anglerStateChangeTime;
