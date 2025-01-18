# Implementation of EDF in FreeRTOS for Dynamic Task Scheduling

This repository contains the implementation and documentation of my Bachelor's Final Year Project: "Implementation of Earliest Deadline First (EDF) in FreeRTOS for Dynamic Task Scheduling."

---

## Project Overview

**Abstract**  
The rise of embedded systems has transformed modern technology, introducing complexities that require efficient scheduling in real-time operating systems (RTOS). FreeRTOS, a lightweight RTOS, uses static Rate Monotonic Scheduling (RMS) as its default task scheduling algorithm. This project proposes and implements the dynamic Earliest Deadline First (EDF) scheduling algorithm to improve task scheduling efficiency in FreeRTOS. The implementation includes correctness verification and testing on an STM32F413H-DISCO evaluation board.

---

## Features

- **Dynamic Task Scheduling**: Introduces EDF, a dynamic priority-based scheduling algorithm in FreeRTOS.
- **Custom FreeRTOS Kernel**: Modifies FreeRTOS kernel for EDF functionality.
- **Embedded System Application**: Tested on an ARM Cortex M4-based STM32F413H-DISCO board.
- **Task Deadline Prioritization**: Tasks are dynamically reordered based on their deadlines to maximize CPU utilization.

---

## Project Components

1. **Dissertation**: Includes detailed research, analysis, and evaluation of EDF implementation in FreeRTOS.
2. **Source Code**: Custom FreeRTOS kernel with EDF scheduling support.
3. **Test Applications**: Demonstrations of task scheduling with real-time deadlines.
4. **Documentation**:
   - Setup guides for the STM32 environment.
   - Debugging configurations (including semihosting).

---

## Requirements

- **Hardware**: STM32F413H-DISCO Evaluation Board
  - ARM Cortex-M4 MCU
  - 1.5 MB Flash, 320 KB RAM
- **Development Tools**:
  - STM32CubeIDE (with GCC and ST-Link)
  - FreeRTOS LTS 202012.04

---

## How to Build and Run

1. **Setup FreeRTOS**: Ensure FreeRTOS is properly configured for the STM32F413H-DISCO board.
2. **Apply EDF Modifications**:
   - Modify `FreeRTOSConfig.h` for EDF scheduling.
   - Replace the native scheduler with the custom EDF-ready scheduler.
3. **Compile the Project**:
   - Use STM32CubeIDE or equivalent toolchain.
   - Address FPU warnings and enable semihosting as per the [Semihosting Notes](semihostingNotes.txt).
4. **Run on Hardware**:
   - Flash the compiled binary onto the STM32F413H-DISCO.
   - Observe task scheduling using log outputs and debug tools.

---

## Results and Evaluation

The EDF scheduler significantly improves dynamic scheduling capabilities:
- **Improved Deadline Handling**: Tasks with earlier deadlines are always prioritized.
- **Higher CPU Utilization**: Compared to RMS, EDF allows utilization up to 100%.
- **Scalability**: Demonstrates potential for complex real-time systems.

For detailed results, refer to the report: [Final Year Project Report](001049882_FYP_REPORT.pdf).

---

## Acknowledgments

- **Supervisor**: Dr. Atsushi Suzuki, University of Greenwich.
- **Inspiration**: Passion for low-level programming and operating systems.
- **Support**: Family, friends, and peers for their constant motivation.

---

## License

This project is open-source and licensed under the MIT License.

---

## Contact

For inquiries or contributions, reach out at pu.linked@gmail.com

