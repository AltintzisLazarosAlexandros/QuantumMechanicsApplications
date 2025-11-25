# Quantum Mechanics Applications

Welcome!

This is a **learning-focused repository** where we explore Quantum Mechanics from the ground up. Whether you're a student, a curious developer, or someone new to quantum physics, you're welcome here!

## About This Project

This repository documents my journey as a Computer Science undergraduate learning Quantum Mechanics through hands-on mini-projects and practical implementations. The goal is to make quantum concepts accessible and fun by combining theory with code.

**Everyone is invited to join!** Whether you're:
- Just starting to learn about quantum mechanics
- Interested in quantum computing
- Curious about implementing quantum algorithms
- Looking to collaborate and learn together

Feel free to explore the projects, ask questions, and contribute your own ideas!

## Getting Started

To get started with this project, you'll need:
- A C++ compiler (g++, clang, or MSVC)
- [CMake](https://cmake.org/) (version 3.10+)
- [Eigen](https://eigen.tuxfamily.org/) library for linear algebra
- [Boost](https://www.boost.org/) libraries for numerical computations
- [GSL (GNU Scientific Library)](https://www.gnu.org/software/gsl/) for scientific functions
- [QuEST](https://github.com/QuEST-Kit/QuEST) for quantum circuit simulation (optional)
- Basic understanding of C++ (quantum knowledge not required!)

### Installation

**On Linux/WSL:**
```bash
sudo apt-get install libboost-all-dev libgsl-dev libgsl27 libgslcblas0
```

**Eigen (choose one option):**

*Option 1: Package manager (easier)*
```bash
sudo apt-get install libeigen3-dev
```

*Option 2: From source (recommended for learning)*
```bash
cd ~
git clone https://gitlab.com/libeigen/eigen.git
cd eigen && mkdir build && cd build
cmake .. && sudo cmake --install .
```

**QuEST (optional):**
```bash
cd ~
git clone https://github.com/QuEST-Kit/QuEST.git
cd QuEST && mkdir build && cd build
cmake .. && cmake --build .
```

## Current Projects

- `test_eigen.cpp` - Introduction to Eigen library for quantum computations
- `quantum_chaos/` - Quantum Chaos and Semiclassical Limits (coming soon)

## Build Instructions

```bash
mkdir build
cd build
cmake ..
cmake --build .
```

The executable will be created in the `build/bin/` directory.

## Contributing

Have ideas for quantum projects? Found bugs? Want to add features? All contributions are welcome! Feel free to:
- Submit issues and suggestions
- Create pull requests with improvements
- Share your own quantum mechanics implementations

## Author

Created by **Altintzis Lazaros Alexandros** - On a mission to understand quantum mechanics, one project at a time!

---

*Join me on this quantum adventure!* 🚀