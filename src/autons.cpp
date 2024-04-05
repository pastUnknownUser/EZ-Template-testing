#include "autons.hpp"
#include "EZ-Template/drive/drive.hpp"
#include "EZ-Template/util.hpp"
#include "main.h"
#include "globals.h"
#include "pros/rtos.hpp"

/////
// For installation, upgrading, documentations and tutorials, check out our website!
// https://ez-robotics.github.io/EZ-Template/
/////

// These are out of 127
int DRIVE_SPEED = 110;  
int TURN_SPEED = 90;
int SWING_SPEED = 90;

///
// Constants
///
void default_constants() {
  chassis.pid_heading_constants_set(3, 0, 20);
  chassis.pid_drive_constants_set(10, 0, 100);
  chassis.pid_turn_constants_set(3, 0, 20);
  chassis.pid_swing_constants_set(5, 0, 30);

  chassis.pid_turn_exit_condition_set(300_ms, 3_deg, 175_ms, 7_deg, 750_ms, 750_ms);
  chassis.pid_swing_exit_condition_set(300_ms, 3_deg, 175_ms, 7_deg, 750_ms, 750_ms);
  chassis.pid_drive_exit_condition_set(300_ms, 1_in, 175_ms, 3_in, 750_ms, 750_ms);

  chassis.slew_drive_constants_set(7_in, 80);
}



void closeWP() {
  DRIVE_SPEED = 127;
  TURN_SPEED = 50;
  chassis.pid_drive_set(20, 62, false);
  
  /*
  chassis.pid_drive_set(59, 62, false);
  chassis.pid_wait();
  chassis.pid_turn_set(-90, TURN_SPEED, false);
  chassis.pid_wait();
  chassis.pid_drive_set(40, 62, false);
  chassis.pid_wait();
  Intake.move_voltage(6000); 
  chassis.pid_wait();
  pros::delay(2000);
  chassis.pid_drive_set(-40, 62, false);
  chassis.pid_wait();
  chassis.pid_turn_set(-180, TURN_SPEED, false);
  chassis.pid_wait();
  chassis.pid_drive_set(50, 62, false);
  chassis.pid_wait();
  Intake.move_voltage(-6000);
  chassis.pid_wait();
  pros::delay(2000);
  Intake.move_voltage(0);

  chassis.pid_turn_set(20_deg, TURN_SPEED, true);
  chassis.pid_wait();
  chassis.pid_drive_set(16_in, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_turn_set(-25_deg, TURN_SPEED, true);
  chassis.pid_wait();
  chassis.pid_drive_set(3_in, DRIVE_SPEED, true);
  chassis.pid_wait();
  backWings.set_value(true);
  chassis.pid_drive_set(16_in, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_turn_set(-68_deg, TURN_SPEED, true);
  chassis.pid_wait();
  backWings.set_value(false);
  intakeRelease.set_value(true);
  pros::delay(200);
  Intake.move_voltage(-12000); 
  chassis.pid_drive_set(37_in, DRIVE_SPEED, true); 
  chassis.pid_wait();*/
  
}

void closeRush() {
  DRIVE_SPEED = 127;
  TURN_SPEED = 127;
  

  /*
  chassis.pid_drive_set(38, 62, false);
  chassis.pid_wait();
  Intake.move_voltage(10000);
  pros::delay(2000);
  chassis.pid_drive_set(-20, 62, false);
  chassis.pid_wait();
  chassis.pid_turn_set(90, TURN_SPEED, false);
  chassis.pid_wait();
  chassis.pid_drive_set(68, 62, false);
  chassis.pid_wait();
  Intake.move_voltage(-10000);
  pros::delay(2000);
  Intake.move_voltage(0);
  chassis.pid_wait();
  chassis.pid_drive_set(-75, 62, false);
  chassis.pid_wait();
  chassis.pid_turn_set(0, TURN_SPEED, false);
  chassis.pid_wait();
  chassis.pid_drive_set(18, 62, false);
  chassis.pid_wait();
  Intake.move_voltage(10000);
  pros::delay(2000);
  chassis.pid_drive_set(-18, 62, false);
  chassis.pid_wait();
  chassis.pid_turn_set(90, TURN_SPEED, false);
  chassis.pid_wait();
  chassis.pid_drive_set(68, 62, false);
  chassis.pid_wait();
  Intake.move_voltage(-10000);
  pros::delay(2000);
  Intake.move_voltage(0);
  chassis.pid_wait();
  chassis.pid_drive_set(-82, 62, false);
  chassis.pid_wait();
  chassis.pid_turn_set(0, TURN_SPEED, false);
  chassis.pid_wait();
  chassis.pid_drive_set(-20, 62, false);
  chassis.pid_wait();
  chassis.pid_drive_set(-20, 62, false);
  */
}


void farSideRush() {
  DRIVE_SPEED = 127;
  TURN_SPEED = 127;
  Intake.move_voltage(12000);
  frontWings.set_value(true);
  pros::delay(100);
  frontWings.set_value(false);
  intakeRelease.set_value(true);
  chassis.pid_drive_set(57_in, DRIVE_SPEED);
  chassis.pid_wait();
  chassis.pid_turn_set(-52.5, 127, false);
  chassis.pid_wait();
  backWings.set_value(true);
  chassis.pid_drive_set(-31_in, DRIVE_SPEED, false);
  chassis.pid_wait();
  chassis.pid_drive_set(10_in, DRIVE_SPEED, false);
  backWings.set_value(false);
  chassis.pid_wait();
  chassis.pid_turn_set(-230, TURN_SPEED, false);
  chassis.pid_wait();
  Intake.move_voltage(-12000);
  chassis.pid_drive_set(12_in, DRIVE_SPEED, false);
  chassis.pid_wait();
  chassis.pid_drive_set(-21_in, DRIVE_SPEED, false);
  chassis.pid_wait();
  chassis.pid_turn_set(-110.59, TURN_SPEED, false);
  chassis.pid_wait();
  Intake.move_voltage(12000);
  chassis.pid_drive_set(15_in, DRIVE_SPEED, false);
  chassis.pid_wait();
  chassis.pid_turn_set(-10 , TURN_SPEED, false);
  chassis.pid_wait();
  chassis.pid_drive_set(-49_in, DRIVE_SPEED, false);
  chassis.pid_wait();
  chassis.pid_turn_set(75 , TURN_SPEED, false);
  chassis.pid_wait();
  backWings.set_value(true);
  chassis.pid_drive_set(18_in, DRIVE_SPEED, false);
  chassis.pid_wait();
  chassis.pid_turn_set(-10 , TURN_SPEED, false);
  chassis.pid_wait();
  chassis.pid_turn_set(50 , TURN_SPEED, false);
  chassis.pid_wait();
  chassis.pid_drive_set(-5_in, DRIVE_SPEED, false);
  chassis.pid_wait();
  Intake.move_voltage(-12000);
  backWings.set_value(false);
  chassis.pid_drive_set(23_in, DRIVE_SPEED, false);
  chassis.pid_wait();
  chassis.pid_drive_set(-6_in, DRIVE_SPEED, false);
  chassis.pid_wait();

}

void farSideWP() {


}

void farSide6Ball() {
  DRIVE_SPEED = 127;
  TURN_SPEED = 127;
  intakeRelease.set_value(true);
  Intake.move_voltage(12000);
  chassis.pid_drive_set(3_in, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_drive_set(-32_in, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_turn_set(-43 , TURN_SPEED, true);
  chassis.pid_wait();
  backWings.set_value(true);
  chassis.pid_drive_set(-15_in, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_turn_set(-75 , TURN_SPEED, true);
  chassis.pid_wait();
  chassis.pid_drive_set(-30_in, DRIVE_SPEED, true);
  chassis.pid_wait();
  backWings.set_value(false);
  chassis.pid_drive_set(23_in, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_turn_set(105 , TURN_SPEED, true);
  chassis.pid_wait();
  Intake.move_voltage(-12000);
  chassis.pid_drive_set(23_in, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_drive_set(-15_in, DRIVE_SPEED, true);
  chassis.pid_wait();
  chassis.pid_turn_set(40 , TURN_SPEED, true);
  chassis.pid_wait();
  Intake.move_voltage(12000);
  chassis.pid_drive_set(57_in, DRIVE_SPEED);
  chassis.pid_wait();

}


///
// Turn Example
///
void turn_example() {
  // The first parameter is target degrees
  // The second parameter is max speed the robot will drive at

  chassis.pid_turn_set(90_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_turn_set(45_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_turn_set(0_deg, TURN_SPEED);
  chassis.pid_wait();
}

///
// Combining Turn + Drive
///
void drive_and_turn() {
  chassis.pid_drive_set(24_in, DRIVE_SPEED, true);
  chassis.pid_wait();

  chassis.pid_turn_set(45_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_turn_set(-45_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_turn_set(0_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(-24_in, DRIVE_SPEED, true);
  chassis.pid_wait();
}

///
// Wait Until and Changing Max Speed
///
void wait_until_change_speed() {
  // pid_wait_until will wait until the robot gets to a desired position

  // When the robot gets to 6 inches, the robot will travel the remaining distance at a max speed of 30
  chassis.pid_drive_set(24_in, DRIVE_SPEED, true);
  chassis.pid_wait_until(6_in);
  chassis.pid_speed_max_set(30);  // After driving 6 inches at DRIVE_SPEED, the robot will go the remaining distance at 30 speed
  chassis.pid_wait();

  chassis.pid_turn_set(45_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_turn_set(-45_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_turn_set(0_deg, TURN_SPEED);
  chassis.pid_wait();

  // When the robot gets to -6 inches, the robot will travel the remaining distance at a max speed of 30
  chassis.pid_drive_set(-24_in, DRIVE_SPEED, true);
  chassis.pid_wait_until(-6_in);
  chassis.pid_speed_max_set(30);  // After driving 6 inches at DRIVE_SPEED, the robot will go the remaining distance at 30 speed
  chassis.pid_wait();
}

///
// Swing Example
///
void swing_example() {
  // The first parameter is ez::LEFT_SWING or ez::RIGHT_SWING
  // The second parameter is target degrees
  // The third parameter is speed of the moving side of the drive
  // The fourth parameter is the speed of the still side of the drive, this allows for wider arcs

  chassis.pid_swing_set(ez::LEFT_SWING, 45_deg, SWING_SPEED, 45);
  chassis.pid_wait();

  chassis.pid_swing_set(ez::RIGHT_SWING, 0_deg, SWING_SPEED, 45);
  chassis.pid_wait();

  chassis.pid_swing_set(ez::RIGHT_SWING, 45_deg, SWING_SPEED, 45);
  chassis.pid_wait();

  chassis.pid_swing_set(ez::LEFT_SWING, 0_deg, SWING_SPEED, 45);
  chassis.pid_wait();
}

///
// Auto that tests everything
///
void combining_movements() {
  chassis.pid_drive_set(24_in, DRIVE_SPEED, true);
  chassis.pid_wait();

  chassis.pid_turn_set(45_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_swing_set(ez::RIGHT_SWING, -45_deg, SWING_SPEED, 45);
  chassis.pid_wait();

  chassis.pid_turn_set(0_deg, TURN_SPEED);
  chassis.pid_wait();

  chassis.pid_drive_set(-24_in, DRIVE_SPEED, true);
  chassis.pid_wait();
}

///
// Interference example
///
void tug(int attempts) {
  for (int i = 0; i < attempts - 1; i++) {
    // Attempt to drive backwards
    printf("i - %i", i);
    chassis.pid_drive_set(-12_in, 127);
    chassis.pid_wait();

    // If failsafed...
    if (chassis.interfered) {
      chassis.drive_sensor_reset();
      chassis.pid_drive_set(-2_in, 20);
      pros::delay(1000);
    }
    // If robot successfully drove back, return
    else {
      return;
    }
  }
}

// If there is no interference, robot will drive forward and turn 90 degrees.
// If interfered, robot will drive forward and then attempt to drive backwards.
void interfered_example() {
  chassis.pid_drive_set(24_in, DRIVE_SPEED, true);
  chassis.pid_wait();

  if (chassis.interfered) {
    tug(3);
    return;
  }

  chassis.pid_turn_set(90_deg, TURN_SPEED);
  chassis.pid_wait();
}

// . . .
// Make your own autonomous functions here!
// . . .