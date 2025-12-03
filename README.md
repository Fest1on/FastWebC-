# FASTWEBCPP

**FASTWEBCPP** — This is a very simple tool to get free Windows.

---

## Features

* Simple interactive menu in the terminal.
* Each website is assigned a number in the menu.
* Cross‑platform opening of URLs.
* Lightweight and fast.
* Configuration stored in a small JSON file.

---

## Example

When you run the program, you see something like:

```
1) Google
2) GitHub
3) Stack Overflow

Select a website: 2
```

The selected website opens in your default browser.

---

## Installation

### Build from source

```bash
git clone https://github.com/<your-username>/FASTWEBCPP.git
cd FASTWEBCPP

g++ -std=c++17 -O2 -o fastwebcpp src/main.cpp
```

Move the executable to your PATH if needed.

---

## Usage

Just run:

```
fastwebcpp
```

The interactive menu will appear.

---
