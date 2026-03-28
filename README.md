# CP-Templates

A collection of competitive programming templates and VS Code snippets built over 2 years of competitive programming. All implementations are in C++ and designed for quick insertion during contests via VS Code snippet shortcuts.

## Contents

### Algorithms & Data Structures

| Snippet Trigger | Description |
|---|---|
| `oset` | Ordered Set (policy-based) |
| `segtree` | Segment Tree |
| `lazy_segtree` | Lazy Propagation Segment Tree |
| `sparseTable` | Sparse Table (RMQ) |
| `dsu` | Disjoint Set Union (Union-Find) |
| `binarysearch` | Binary Search template |
| `binary_lifting` | Binary Lifting (LCA / k-th ancestor) |
| `matexp` | Matrix Exponentiation |
| `mint` | Modular Integer class |
| `mod_inverse` | Modular Inverse |
| `extended_gcd` | Extended Euclidean Algorithm |
| `combination` | nCr with modular arithmetic |
| `permutation` | nPr with modular arithmetic |
| `l_to_rprime` | L to R Prime Queries |
| `sqrtprime` | Sqrt Decomposition with Primes |
| `tries` | Trie data structure |
| `string_matching` | String Matching (KMP / Z-function) |
| `string_hashing` | Polynomial String Hashing |
| `mo` | Mo's Algorithm |

### Utilities
- `Debug/` — Debug macros and helpers
- `StressTest/` — Stress testing framework to compare brute force vs optimized solutions
- `Template/` — Base contest template with fast I/O, common includes, and macros

## Usage

These are VS Code code snippets (`.code-snippets` format). To use them:

1. Copy the `.code-snippets` files into your VS Code user snippets directory:
   - **Windows**: `%APPDATA%\Code\User\snippets\`
   - **macOS/Linux**: `~/.config/Code/User/snippets/`
2. In any `.cpp` file, type the trigger keyword and press `Tab` to expand the snippet.
