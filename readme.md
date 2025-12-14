# Elevator Control System – Model-Based Design Project

## Tools & Platforms
**SCADE Suite, SCADE Architect, Arduino, TinkerCad**


## Project Overview
This project is a **model-based design and implementation** of an **Elevator Control System**, adapted from a reference laboratory exercise and extended as the Design and Evaluation of Embedded Real-Time Systems course project.

The main goal is to apply **model-based development using the V-model**, starting from requirements extraction to simulation, testing, and automatic code generation. The final system is simulated and implemented on an **Arduino-based embedded platform** using **TinkerCad**.

Unlike the reference lab, this project does **not directly implement logic on hardware first**. Instead, the system is:
1. Modeled in **SCADE**
2. Automatically translated into C code
3. Deployed and simulated on **Arduino**


## Objectives
- Apply **model-based design (MBD)** principles in a real embedded system
- Use **SCADE Lifecycle & Architect** for requirement-driven development
- Implement an elevator controller using **task-based architecture**
- Perform **simulation, testing, and validation** before deployment
- Generate and deploy code on an embedded platform


## System Description
The system models a **single elevator cabin** controlled via:
- Button inputs (floor requests)
- Position sensing using an encoder
- PWM-based motor control
- Runtime safety monitoring

> **Note:** The elevator door is controlled by an external unit. This system only controls the **elevator motor via PWM**.


## System Architecture
The elevator controller is decomposed into the following main modules:

### 1. Button Processor
- Reads button inputs
- Debounces signals
- Generates request events

### 2. Position Processor
- Estimates elevator position using encoder pulses
- Simulates pulse generation in SCADE
- Uses DC motor + encoder in TinkerCad

### 3. Planning Module
- Receives button requests and current position
- Decides movement direction and target floors

### 4️. Safety Module
- Continuously monitors safety assumptions
- Stops the elevator upon detecting abnormal conditions
- Implements runtime safety checks

### 5️. Motor Control Module
- Generates PWM signals
- Controls elevator motion


## Development Process (V-Model)
This project strictly follows the **V-model development lifecycle**:

### Requirement Engineering
- Extracted system and safety requirements
- Applied **Doer/Checker safety pattern**
- Allocated requirements to architectural components

### Architectural Design
- Designed system architecture using **SCADE Architect**
- Defined task priorities and execution structure

### Detailed Design & Implementation
- Implemented each module in **SCADE Suite**
- Used synchronous dataflow modeling

### Verification & Testing
- Simulated individual modules
- Integrated system-level simulation
- Tested multiple operational scenarios

### Code Generation & Deployment
- Generated C code using **SCADE Code Generator**
- Deployed code to **Arduino**
- Simulated hardware behavior in **TinkerCad**


## Simulation & Validation
- Full system simulation in **SCADE**
- Hardware-in-the-loop style simulation in **TinkerCad**
- Validation through multiple test scenarios
- Input/output signal plots collected for reporting

A short demonstration video of the system running in TinkerCad is provided.


## Tools & Technologies
- **SCADE Suite** – Model-based design & code generation
- **SCADE Architect & Lifecycle** – Requirements & architecture
- **Arduino** – Embedded target platform
- **TinkerCad Circuits** – Hardware simulation
- **C / Embedded C** – Generated implementation


## Project Structure
```text
├── archtect/          # SCADE system & component models
├── elevator_control_system/          # Extracted requirements & allocation
└── README.md
```


## Acknowledgment
Based on the reference laboratory material from:
Uppsala University – Embedded Systems Lab
http://www.it.uu.se/edu/course/homepage/pins/vt11/lab1

