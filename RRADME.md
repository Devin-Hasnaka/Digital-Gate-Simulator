File Structure

digital_gate_simulator/
├── build/              # Compiled binaries and object files (gitignored)
├── include/            # Header files (.h or .hpp)
│   ├── Node.hpp        
│   ├── Gate.hpp        # Base class
│   ├── Gates.hpp       # Derived classes (AndGate, OrGate, etc.)
│   └── Circuit.hpp     
├── src/                # Implementation files (.cpp)
│   ├── Gate.cpp        
│   ├── Gates.cpp       
│   ├── Circuit.cpp     
│   └── main.cpp        # Entry point and CLI logic
├── tests/              # Small scripts or main files to test logic
│   └── test_adder.cpp  
├── Makefile            # Build instructions
└── README.md           # Documentation (Project overview & how to run)
