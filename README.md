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
R <resistance_value> <connection_type>
Where:
- `R` denotes a resistor.
- `<resistance_value>` is the resistance in ohms.
- `<connection_type>` is `S` for series or `P` for parallel.

Example:
R 100 S
R 200 S
R 300 P

## Future Improvements
- Add support for more components (capacitors, inductors, etc.).
- Implement a graphical user interface.
- Enhance the file parser to handle more complex circuit descriptions.

Example Circuit Description File
Create a file named circuit.txt with the following content:
R 100 S
R 200 S
R 300 P
R 400 P
R 500 S
