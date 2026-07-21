<div align="center">

# 🧠 DSA-Practice

### Data Structures & Algorithms — in C

*A structured, ongoing log of how I'm learning to think in code — one data structure at a time.*

![C](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Status](https://img.shields.io/badge/Status-Actively%20Learning-brightgreen?style=for-the-badge)
![University](https://img.shields.io/badge/B.Sc.-CSE-blue?style=for-the-badge)
![Last Commit](https://img.shields.io/github/last-commit/USERNAME/DSA-Practice?style=for-the-badge)

</div>

---

## 📑 Table of Contents

- [Why This Repository Exists](#-why-this-repository-exists)
- [Repository Structure](#-repository-structure)
- [Topics Covered](#-topics-covered)
- [Learning Roadmap](#-learning-roadmap)
- [Progress Tracker](#-progress-tracker)
- [Coding Standards](#-coding-standards)
- [How I Work](#-how-i-work)
- [Author](#-author)

---

## 💡 Why This Repository Exists

Most student DSA repos are dumped assignment folders — code that was written once for a grade and never touched again.

This one is different by design. Every folder here is something I've *rebuilt from understanding*, not just submitted. Some of it started as university coursework; the rest is me going back and asking "do I actually understand why this works, or did I just make the compiler happy?"

The plan is simple: keep adding structures, keep the code readable enough that I could explain it to someone else, and use this as my own reference when interview prep season comes.

---

## 📂 Repository Structure

```
DSA-Practice
│
├── Factorial/
│   └── Factorial.c
│
├── Fibonacci/
│   └── Fibonacci_Recursive.c
│
├── Sum-AP/
│   └── Sum-AP.c
│
├── Stack/
│   ├── Stack-Using-Array/
│   └── Stack-Using-Linked-List/
│
├── Queue/
│   ├── Queue-Using-Array/
│   └── Circular-Queue-Using-Array/
│
├── Linked-List/
│   ├── Singly-Linked-List/
│   ├── Doubly-Linked-List/
│   └── Circular-Linked-List/
│
├── Tree/
│   ├── Tree-Traversal/
│   ├── Tree-Operations/
│   └── AVL-Tree/
│
├── tests/
│   └── outputs/
│
└── More being added as I progress...
```

> 📌 Folder naming follows `Title-Case-With-Hyphens` throughout — no mixed conventions.

---

## 📚 Topics Covered

| Category | Concepts |
|---|---|
| **Programming Fundamentals** | Recursion, Factorial, Fibonacci, Sum of AP |
| **Linear Data Structures** | Stack (Array & Linked List), Queue (Linear & Circular) |
| **Dynamic Structures** | Singly / Doubly / Circular Linked Lists |
| **Non-Linear Structures** | Binary Trees, Tree Traversal, Tree Operations, AVL Trees (self-balancing) |
| **Testing** | Dedicated `tests/` folder for verifying outputs |

---

## 🧭 Learning Roadmap

**Completed**
- [x] Recursive Programming (Factorial, Fibonacci, Sum-AP)
- [x] Stack (Array & Linked List)
- [x] Queue (Linear & Circular)
- [x] Linked List (Singly, Doubly, Circular)
- [x] Tree Traversal & Operations
- [x] AVL Tree (self-balancing BST)

**In Progress / Up Next**
- [ ] Heap & Heap Sort
- [ ] Graph (BFS, DFS)
- [ ] Hash Table
- [ ] Trie
- [ ] Dynamic Programming
- [ ] Greedy Algorithms
- [ ] Disjoint Set Union
- [ ] Segment Tree / Fenwick Tree

---

## 📈 Progress Tracker

```
Recursion & Fundamentals   ██████████ 100%
Stack                      ██████████ 100%
Queue                      ██████████ 100%
Linked List                ██████████ 100%
Trees                      ████████░░  80%
Advanced Trees (AVL)       ███████░░░  70%
Graphs                     ░░░░░░░░░░   0%
Dynamic Programming        ░░░░░░░░░░   0%
```

*(Updated as new topics are added — not a one-time snapshot.)*

---

## 📜 Coding Standards

- Written in **C**, compiled and tested before commit
- Functions are modular — one responsibility per function
- Variable and function names describe intent, not just type
- Input-driven where relevant, so structures can be tested interactively
- No compiled binaries (`.exe`, `.o`) committed — source only
- Consistent folder naming (`Title-Case-With-Hyphens`)

---

## 🛠 How I Work

Each topic typically goes through three passes before it lands here:

1. **First pass** — implement it the way it's taught (often for a university assignment)
2. **Second pass** — rebuild it without notes, to check I actually understand it
3. **Third pass** — clean up naming, edge cases, and comments before committing

If a folder looks simple, it's usually because the complexity got refactored away, not because the topic was skipped.

---

## 👨‍💻 Author

**Dipro**
B.Sc. in Computer Science & Engineering

Interested in Data Structures, Algorithms, and how both connect to AI/ML systems down the line.

<div align="center">

*"Great software engineers aren't built overnight. They're built one algorithm at a time."*

⭐ If this repo is useful as a reference, a star is appreciated.

</div>