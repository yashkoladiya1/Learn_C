# Learn_C 🚀
> My step-by-step journey mastering the C programming language to become an **Embedded Software Engineer**.

---

## 🎯 Primary Objectives
- [ ] Master core C language syntax and low-level memory mechanics.
- [ ] Learn **bit manipulation** for reading/writing hardware registers.
- [ ] Write memory-safe code using pointers, memory layouts, and structs.
- [ ] Build bare-metal micro-projects simulating real embedded systems behavior.
- [ ] Transition from PC-based GCC execution to microcontroller platforms (e.g., STM32, ESP32, or AVR).

---

## 🗺️ Learning Roadmap

### Phase 1: Core Language & Fundamentals
*Focus: Getting comfortable writing, compiling, and running basic C programs on PC.*
- [x] VS Code + MinGW-w64 (MSYS2) Environment Setup
- [ ] Variables, Data Types, and Fixed-Width Integers (`stdint.h`: `uint8_t`, `uint32_t`)
- [ ] Control Flow (`if/else`, `switch-case`, `while`, `for`)
- [ ] Functions, Scope, and Storage Classes (`static`, `extern`, `volatile`)

### Phase 2: Memory & Bitwise Operations (Crucial for Hardware)
*Focus: Direct memory access, bit packing, and hardware control simulation.*
- [ ] Bitwise Operators (`&`, `|`, `^`, `~`, `<<`, `>>`)
- [ ] Bit Masking: Setting, Clearing, Toggling, and Reading specific bits
- [ ] Pointers, Memory Addresses, and Dereferencing
- [ ] Arrays, Strings, and Pointer Arithmetic
- [ ] Structs, Unions, Bitfields, and Memory Padding / Alignment

### Phase 3: Embedded Concepts (Bare-Metal Simulation)
*Focus: Writing C patterns used in real microcontrollers.*
- [ ] State Machines (FSM using `enum` and `switch-case`)
- [ ] Circular Buffers (Ring Buffers for serial data transmission)
- [ ] Dynamic Memory allocation vs Static Pre-allocation
- [ ] Hardware Interrupt simulation and `volatile` keyword usage

---

## 📂 Repository Structure

```text
Learn_C/
├── 01_Basics/          # Hello World, Data Types, Control Flow
├── 02_Bitwise/         # Bit manipulation practice, Bitmasking functions
├── 03_Pointers_Memory/ # Pointer arithmetic, Structs, Unions
├── 04_Embedded_C/      # Circular buffers, State machines, Register simulations
└── README.md           # Progress tracker & docs