# 🎲 Dice Roller (C Project)

[![Made with C](https://img.shields.io/badge/Made%20with-C-blue)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Beginner Project](https://img.shields.io/badge/Project-Level%3A%20Beginner-brightgreen)]()
[![Nostalgia-Powered](https://img.shields.io/badge/Mood-Nostalgic-yellow)]()

This is a simple **Dice Rolling Simulator** written in C — my **first ever C project**!  
I made it just for fun while learning the basics of the C programming language. Now it's here, archived with love and nostalgia. 😊

---

## 📌 What it does

This program simulates rolling a six-sided die. When you run it, it generates and prints a random number between **1 and 6** — just like rolling a real dice!

---

## 🧠 What I learned

- Writing and compiling a basic C program
- Using `rand()` and `srand()` to generate random numbers
- Seeding randomness with `time(NULL)`
- Compiling C code with `gcc`
- Fighting antivirus false alarms on `.exe` files 😅

---

## 💻 How to Run

### ▶️ Compile (with GCC):

```bash
gcc dice-roll.c -o dice-roll
▶️ Run:
bash
Copy
Edit
./dice-roll
⚠️ On Windows, you might get a false positive from antivirus. Add an exclusion or run from a safe dev folder.

🧾 Sample Output
css
Copy
Edit
You rolled a 5 🎲
📄 Source Code
Here’s the complete program — less than 30 lines!

c
Copy
Edit
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // Seed random number generator with current time

    int roll = (rand() % 6) + 1; // Generate number between 1 and 6

    printf("You rolled a %d 🎲\n", roll);

    return 0;
}
🗂 File Structure
bash
Copy
Edit
📁 dice-roller/
├── dice-roll.c       # The source code
└── README.md         # This file!
🗓 Made with curiosity & caffeine in 2025
💬 “Every master was once a beginner.”
This project reminds me where I started. If you're learning C — keep going. You'll look back at your first program one day and smile. 😊
