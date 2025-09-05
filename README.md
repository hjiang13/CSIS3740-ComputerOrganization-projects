# CSIS3740-ComputerOrganization-projects
Seven incremental project assignments for CSIS 3740 (Computer Organization).  Includes starter code, rubrics, and a summary PDF.  Projects 1–4 build a single-cycle CPU simulator; Projects 5–7 are advanced extensions.

# CSIS 3740 — Project Assignments

This repository contains **seven incremental projects** for **CSIS 3740: Computer Organization**.  
Projects are aligned with the course schedule. Together they build a simple **TinyRISC CPU simulator**, starting from data representation and Boolean logic, extending to assembly programming, pipelining, and cache design.

---

## 📂 Repository Structure
  ```
  CSIS3740_projects/
  assignments/ # Assignment briefs + grading rubrics (Markdown + CSV)
  CSIS3740_Assignments_Rubrics_Summary_v2.pdf # All-in-one summary (overview + rubrics)
  project1_data_representation/ # Project 1: ALU & converters
  project2_boolean_circuits/ # Project 2: Boolean algebra & circuits
  project3_basic_machine_org/ # Project 3: Single-cycle CPU
  project4_assembly_language/ # Project 4: Assembler
  project5_instruction_set_arch2/ # Project 5: Pipeline
  project6_memory_hierarchy/ # Project 6: Cache
  project7_alternative_arch/ # Project 7: Integration demo
```

---

## 🚀 Getting Started
1. Clone this repo:
   ```bash
   git clone https://github.com/hjiang13/CSIS3740_projects.git
   cd CSIS3740_projects
2. Pick a project folder, e.g. Project 1:

   ```bash

    cd project1_data_representation
    make           # build
    make run       # run the program
    make test      # run minimal tests (if provided)
3. Read the assignment brief in /assignments/ProjectX.md for tasks, deliverables, and rubric.

## 📝 Submissions
For each project, submit the following to Blackboard:

  - Source code (C++ files, Makefile, etc.)
  - REPORT.md / PDF summarizing your design and answers
  - Test results / output logs

Projects 1–4 are required and form the core CPU simulator.

Projects 5–7 are advanced extensions (bonus / challenge).

## 📖 Notes
Each project folder already includes starter code and a Makefile.

Do not push build artifacts (bin/, build/ folders) — already ignored by .gitignore.

See the summary PDF for a one-page overview of all projects and rubrics.
