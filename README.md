# Hash Table Text Generator

## Overview
This project implements a hash-based text generation system using word-pair frequency modeling. It explores multiple hashing strategies for efficient storage and retrieval of word relationships.

## Features
- Word-pair frequency analysis
- Text generation based on probabilistic transitions
- Multiple hash table implementations:
  - Separate Chaining
  - Linear Probing
  - Cuckoo Hashing
- Custom word stream processing and parsing
- Performance comparison across different hashing strategies

## Dataset
The project includes multiple sample text corpora for testing:
- big.txt
- if.txt
- ripple.txt
- BlowinWind.txt
- Colours.txt

## Build Instructions
```bash
mkdir build
cd build
cmake ..
make
