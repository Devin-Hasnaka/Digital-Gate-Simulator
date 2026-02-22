# Digital-Gate-Simulator
C++ simulation which can use for digital logic simulation in gate level


## Project Structure

```text
LogicSimulator/
├── include/            # Header files (.hpp)
│   ├── Node.hpp        # Data structure for wires/connections
│   ├── Gate.hpp        # Abstract base class for logic gates
│   ├── Gates.hpp       # Specific implementations (And, Or, Not, etc.)
│   └── Circuit.hpp     # Manager class to handle the gate collection
├── src/                # Implementation files (.cpp)
│   ├── Gate.cpp        # Base class logic
│   ├── Gates.cpp       # Logic for specific gates
│   ├── Circuit.cpp     # Circuit simulation logic
│   └── main.cpp        # Main entry point and CLI interface
├── build/              # Compiled binaries (excluded from Git)
├── Makefile            # Build automation script
└── README.md           # Project documentation
