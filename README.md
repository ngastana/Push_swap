# 🧩 Push_swap

**Push_swap** is a 42 project that challenges you to sort a stack of integers using a limited set of operations.  
The goal is simple: sort numbers with the smallest number of moves possible — but trust me, it’s anything *but* simple.

---

## 🧠 Project Overview

You’ll be building two programs:

1. **push_swap** — takes a list of integers as arguments and prints the shortest list of instructions to sort them.  
2. **checker** *(optional, for testing)* — takes the same list and a sequence of operations, then checks if the result is sorted.

Example:
```bash
./push_swap 2 1 3 6 5 8
```
Output (example):
sa
pb
pb
ra
pa
pa
These are the moves your program thinks will sort the list.
Each operation modifies the stacks — like a puzzle where you can only make certain moves.

## 🧱 The Rules
You start with:
    Stack A — contains all the numbers you need to sort.
    Stack B — empty at the beginning.
You can use these moves:
    sa	Swap the first 2 elements of A
    sb	Swap the first 2 elements of B
    ss	sa and sb at the same time
    pa	Push the top element of B onto A
    pb	Push the top element of A onto B
    ra	Rotate A (first element becomes last)
    rb	Rotate B
    rr	ra and rb at the same time
    rra	Reverse rotate A (last element becomes first)
    rrb	Reverse rotate B
    rrr	rra and rrb at the same time

## 🧰 Example
  🔨 Compilation
    make
  ▶️ Run example
    ./push_swap 3 2 1

## ⚙️ Allowed Functions
  write, read, malloc, free, exit


## 💥 Error Handling
    ❌ If there are duplicates → print Error
    ⚠️ If a number is not an integer → print Error
    🚫 If arguments are invalid → print Error
    🧹 Memory leaks are forbidden — free everything properly

