# push_swap — Sorting Algorithm in C

> 42 Urduliz — Common Core project

Sorts a stack of integers using the minimum number of operations with only two stacks (`a` and `b`) and a limited set of instructions.

---

## Operations

| Op | Description |
|---|---|
| `sa` / `sb` | Swap top two elements of stack a/b |
| `pa` / `pb` | Push top of b to a / top of a to b |
| `ra` / `rb` | Rotate stack a/b upward |
| `rra` / `rrb` | Reverse rotate stack a/b |
| `ss` / `rr` / `rrr` | Combined operations |

## Build & Run

```bash
make
./push_swap 5 2 8 1 3
```

Check with the included tester:
```bash
python3 tester.py
```

## Algorithm

Uses a **quicksort-based approach** with optimization for small sets (≤5 elements handled with hardcoded optimal paths). For larger sets, recursively partitions using a pivot and moves chunks between stacks.

Performance targets:
- 3 numbers: ≤ 3 ops
- 5 numbers: ≤ 12 ops
- 100 numbers: ≤ 700 ops
- 500 numbers: ≤ 5500 ops

## Project Structure

```
push_swap/
├── algorithm/       # Quicksort and final sort logic
├── actions/         # push, swap, rotate, reverse_rotate
├── core/            # Argument validation, stack creation
├── utils/           # Free, atoi, helpers
├── printf/          # Embedded ft_printf
├── push_swap.h
└── Makefile
```

## Skills

`C` `Algorithms` `Data Structures` `Stack` `Sorting` `Optimization`

---

## Academic Integrity

This repository is shared for **educational and portfolio purposes only**.

**For 42 students:**
- Do not copy this code for your own project submissions
- Use it as a reference to understand concepts and approaches
- Write your own original solution — that is the only way to actually learn

*42's core values are learning through practice, peer collaboration, and genuine problem-solving.*

---

## License

MIT — see [LICENSE](LICENSE) for details.
Copyright (c) 2026 Eneko Muñoz Bordona