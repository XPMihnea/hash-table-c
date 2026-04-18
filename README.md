# Hash Table in C

This project implements a hash table in C using **open addressing** with **linear probing** for collision resolution.

## Overview

The hash table stores elements of type `Masina`, a custom structure containing:
- `marca` - dynamically allocated string
- `pret` - integer key used for hashing
- `numar` - fixed-size registration number

The implementation uses:
- **division method** for the hash function
- **linear probing** for handling collisions
- **dynamic memory allocation** for managing custom data

## Project Structure

- `main.c` - example usage and testing
- `masina.h` / `masina.c` - structure definition and helper functions for `Masina`
- `hashtable.h` / `hashtable.c` - hash table implementation

## Features

- creation of a hash table with dynamic allocation
- insertion of elements using linear probing
- search by key
- display of the table content
- proper memory deallocation

## Technologies

- C
- Dynamic memory allocation
- Hash tables
- Modular programming

## Compilation

```bash
gcc main.c masina.c hashtable.c -o app
