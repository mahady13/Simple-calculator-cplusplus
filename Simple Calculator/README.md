# Simple C++ Calculator

A lightweight, console-based interactive calculator application written in C++ using a loop structure and `switch` statements. It allows users to perform continuous basic arithmetic calculations until manually terminated.

## Features
- **Continuous Execution:** Runs inside an infinite loop, allowing multiple calculations without restarting the program.
- **Robust Error Handling:** Checks for zero division errors (`Divider cannot be 0`).
- **Input Validation:** Identifies invalid operator inputs and prompts the user to try again.

## Supported Operations
- Addition (`+`)
- Subtraction (`-`)
- Multiplication (`*`)
- Division (`/`)

## Prerequisites
To compile and run this project, you need:
- A C++ compiler supporting C++17 or higher (e.g., GCC/MinGW, Clang, or MSVC)
- **CMake** (version 3.10 or higher)

## How to Build and Run

### Using CMake (Recommended)
1. Open your terminal in the project directory.
2. Create a build directory and navigate into it:
   ```bash
   mkdir build && cd build
   ```
3. Generate the build files:
   ```bash
   cmake ..
   ```
4. Build the executable:
   ```bash
   cmake --build .
   ```
5. Run the application:
   - **Windows:** `.\CalculatorApp.exe`
   - **Linux/Mac:** `./CalculatorApp`

### Using standard G++ Compiler directly
If you don't want to use CMake, you can compile it directly using `g++`:
```bash
g++ calculator.cpp -o CalculatorApp
./CalculatorApp
```
