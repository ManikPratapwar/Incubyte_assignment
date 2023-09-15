
README for Craft Control Git Repository
This Git repository contains a C++ program that simulates the movement of a craft in 3D space. The craft can move forward, backward, left, right, up, and down. This README file provides an overview of the program and instructions for running it.

Table of Contents
Introduction
Usage
Program Structure
License
Introduction
The program simulates the movement of a craft represented by the craft class. The craft has a 3D position with coordinates (x, y, z) and a direction (North, South, East, West, Up, Down) represented by a single character. You can control the craft by providing a sequence of commands, including:

f: Move the craft forward.
b: Move the craft backward.
l: Turn the craft left.
r: Turn the craft right.
u: Move the craft up.
d: Move the craft down.
The program takes a sequence of these commands as input and displays the craft's position and direction at each step, as well as the final position and direction.

Usage
To run the program, follow these steps:

Make sure you have a C++ compiler installed on your system.

Clone this Git repository to your local machine:

bash
Copy code
git clone <repository-url>
Navigate to the repository's directory:

bash
Copy code
cd <repository-directory>
Compile the program using your C++ compiler. For example:

bash
Copy code
g++ main.cpp -o craft_control
Run the program with a sequence of commands as input. For example:

bash
Copy code
./craft_control
Enter a sequence of commands (e.g., "fflbu") and press Enter.

The program will display the craft's position and direction at each step, as well as the final position and direction.

Experiment with different command sequences to explore the craft's movement in 3D space.

Program Structure
The program consists of a single C++ source file, main.cpp, which contains the following components:

A craft class that represents the craft's state and movement functions.
The main() function, where the craft is initialized and commands are processed.
Functions to move the craft (front(), back(), left(), right(), up(), down()).
Functions to print the craft's position and direction (PrintPosition(), pos(), FinalDirection()).
Feel free to explore and modify the code to experiment with different craft movements or to integrate it into your own projects.

License
This program is provided under the MIT License. You are free to use, modify, and distribute it as per the terms of the MIT License.

If you have any questions or encounter any issues, please feel free to [open an issue](<repository-url>/issues) in this repository. Thank you for using Craft Control!
