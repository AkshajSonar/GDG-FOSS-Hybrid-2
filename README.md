# GDG FOSS Wing: Medium Task

Welcome to the **FOSS** Section! 

## Problem Statement
The FOSS team needs to rent cloud servers. We need exactly $n$ hours of compute time. 
* Buying **1 hour** of compute costs $a$ dollars.
* Buying a **bundle of $m$ hours** costs $b$ dollars. 

What is the absolute minimum cost to get **at least** $n$ hours of compute time?

## Input Format
A single line containing four integers: $n$, $m$, $a$, $b$ ($1 \le n, m, a, b \le 1000$).

## Output Format
Print a single integer: the minimum cost.

## Example
**Input:**
```text
6 2 1 2
```
**Output:**
```text
6
```

## Your Mission (READ CAREFULLY)
You are assigned to the `feature-bonus` branch. You wrote some great logic to handle buying server bundles, but while you were working, the maintainers merged crucial updates into the `main` branch. 

Your branch is now out of date and has **Merge Conflicts**.

To pass this task:
1. Fetch the latest changes and switch to your branch
2. Rebase your branch against main
3. **Resolve the conflict in `solution2.cpp`.** (*Warning: Do not just blindly accept one branch's code. You must read the C++ logic from both branches and write a combined solution that covers all edge cases!*)
4. Finish the rebase
5. Force push your branch and submit a PR!