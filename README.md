# Circuit Simulator

## Project Overview
A basic circuit simulator written in C that reads a text-based description of a circuit and calculates the total resistance for series and parallel resistor networks.

## Features
- Read a circuit description from a file
- Calculate total series resistance
- Calculate total parallel resistance

## Agile Process
This project followed the Scrum framework with tasks planned in a sprint, daily stand-ups, a sprint review, and a sprint retrospective.

## Version Control
This project used Git for version control. The repository is available at `https://github.com/prashiv19/Circuit-Simulator-in-C.git`.

## How to Build and Run
1. Compile the program:
    ```sh
    gcc main.c circuit.c -o circuit_simulator
    ```
2. Run the program:
    ```sh
    ./circuit_simulator
    ```

## Circuit Description File Format
The circuit description file should contain lines with the following format:
