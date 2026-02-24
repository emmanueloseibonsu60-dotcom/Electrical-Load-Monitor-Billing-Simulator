# Electrical Load Monitoring System

This project is a C++ console-based Electrical Load Monitoring System that helps users record electrical appliances, calculate energy consumption, and estimate electricity bills.  
The system uses file handling to store appliance data and billing summaries for later use.

## Features

- Register electrical appliances (name, power in watts, hours used per day)
- View all registered appliances in a formatted table
- Search appliances by name
- Calculate:
  - Daily energy consumption (kWh)
  - Estimated daily electricity cost
  - Estimated monthly electricity cost (30 days)
- Save appliance data to a file
- Save billing summaries with date and time

## Technologies Used

- C++
- File handling (fstream)
- Structures and vectors
- Menu-driven programming

## File Description

- main.cpp – Contains the full source code  
- appliances.txt – Stores appliance records  
- billing_summary.txt – Stores saved billing summaries  
- README.md – Project documentation  

## How the Program Works

1. On startup, the program loads appliance data from appliances.txt.
2. A menu is displayed for user interaction.
3. Users can add appliances, view or search existing appliances, and calculate electricity bills.
4. Appliance data and billing summaries are saved to text files.
5. Data remains available even after restarting the program.

## Energy and Cost Calculation

Daily Energy Consumption (kWh):
(Watts / 1000) × Hours Used Per Day

Daily Cost:
Total Daily kWh × Tariff per kWh

Monthly Cost:
Daily Cost × 30

## Compilation and Execution

Compile the program:
g++ main.cpp -o load_monitor

Run the program:
./load_monitor

## Notes

- Ensure the program has permission to read and write files in the directory.
- All data is stored in plain text files for simplicity.
- Monthly billing is estimated based on 30 days.

## Author
OSEI-BONSU EMMANUEL
This project was developed as a basic C++ application to demonstrate the use of structures, vectors, file handling, and menu-driven systems.