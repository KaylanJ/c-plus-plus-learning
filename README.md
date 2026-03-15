# C++ Learning Projects – README

A collection of small C++ programs written while learning the language, building toward a final showcase project.

---

## Hi.cpp – Hello World & Basic I/O

The starting point. Covers output formatting, tab characters, integer variables, and reading user input with `std::cin`.

**What it does:**
- Prints "Hello World!" and demonstrates `\t` (tab) and `\n` (newline) escape sequences
- Prints a number triangle pattern using spacing
- Prompts the user to enter a tip amount and echoes it back

**Concepts covered:** `std::cout`, `std::cin`, `int` variables, escape characters, single-line (`//`) and multi-line (`/* */`) comments

---

## Ftoc.cpp – Fahrenheit to Celsius Converter

A simple temperature converter that first runs the formula on a hardcoded value, then prompts for user input.

**What it does:**
- Converts a hardcoded 65°F to Celsius and prints the result
- Asks the user to enter a Fahrenheit temperature and converts it

**Formula:** `°C = (°F - 32) / 1.8`

**Concepts covered:** `double` variables, arithmetic expressions, sequential `std::cin`/`std::cout` usage

---

## Ifelse.cpp – D20 Dice Roll

Simulates a D20 dice roll (0–20) and reacts to the result with special cases for a natural 20 and a critical failure.

**What it does:**
- Seeds the random number generator with the current time
- Rolls a random number between 0 and 20
- Prints a special message for a roll of 20 (nat 20) or 1 (critical failure), and a default message otherwise

**Concepts covered:** `srand` / `rand`, `time(NULL)`, modulo operator, `if` / `else if` / `else`

---

## Space.cpp – Planetary Weight Calculator

An interactive program that calculates what your Earth weight would be on other planets in the solar system.

**What it does:**
- Asks the user for their Earth weight
- Presents a menu of 8 planets (plus quit)
- Repeatedly calculates and displays the equivalent weight on the chosen planet until the user selects quit

**Planet gravity multipliers used:**

| Planet | Multiplier |
|---|---|
| Mercury | 0.38 |
| Venus | 0.91 |
| Mars | 0.38 |
| Jupiter | 2.34 |
| Saturn | 1.06 |
| Uranus | 0.92 |
| Neptune | 1.19 |

**Concepts covered:** `double` input, `while` loops, `switch` / `case` statements, menu-driven programs

---

---

## combat.cpp – OOP Character Battle Simulation

An object-oriented combat simulator introducing classes, inheritance, and polymorphism through a turn-based fight between two characters.

**What it does:**
- Defines a base `Character` class with shared stats and behaviour
- Derives `Warrior` and `Mage` subclasses that each override base class methods
- Runs a turn-based fight loop between two characters until one is defeated

**Classes:**

`Character` (base)
- Holds `name`, `health`, and `attack`
- `takeDamage(int)` — reduces health by the given amount
- `dealDamage()` — returns the character's attack value
- `isAlive()`, `getName()`, `getHealth()` — utility accessors

`Warrior` (extends `Character`)
- Adds an `armor` stat
- Overrides `takeDamage` — subtracts armor from incoming damage before applying it, with a floor of 0

`Mage` (extends `Character`)
- Adds a `mana` stat
- Overrides `dealDamage` — if mana ≥ 10, spends 10 mana and returns double attack damage; otherwise falls back to base attack

**Fight setup in `main`:**

| Character | Type | HP | Attack | Extra |
|---|---|---|---|---|
| Brock | Warrior | 120 | 15 | 5 armor |
| Zara | Mage | 80 | 12 | 30 mana |

**Concepts covered:** classes, constructors, member initializer lists, `protected` vs `public`, inheritance, `virtual` functions, `override`, polymorphism via pointers, `std::max`, `using` declarations

---

*More projects will be added as the language learning continues, leading up to a final showcase project.*
