# ⚙️ C++ DSA Playground – macOS Setup + Patterns + STL

A personal C++ repository tailored for macOS users using **VS Code** and **g++**, structured for productivity, clarity, and hands-on learning with **Striver’s A2Z DSA Sheet**.

🔗 [Striver’s A2Z Sheet Reference](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)
- Input/output via terminal (debug-friendly)
- Pattern printing practice (`patterns.cpp`)
- STL learning with examples (`stl.cpp`)

---

## 📁 Folder Structure
```txt
├── patterns.cpp     # 22+ pattern problems (triangles, pyramids, etc.)
├── stl.cpp          # Practice programs for STL (vector, pair, set, map, etc.)
├── .vscode/
│   ├── tasks.json   # Compile with g++-15
│   └── launch.json  # Debug config (input from terminal)

```

---

## 🍎 macOS C++ Setup Guide (VS Code)

> Works best with Apple Silicon or Intel Macs + Homebrew + VS Code

### 1️⃣ Install Requirements

```bash
# Install Homebrew if not already installed
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

# Install latest GCC (e.g. g++-15)
brew install gcc

# Optional: Add include path to zshrc
echo 'export CPLUS_INCLUDE_PATH=/opt/homebrew/include' >> ~/.zshrc
```
## 2️⃣ VS Code Extensions

- [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) (by Microsoft)  
- [CodeLLDB](https://marketplace.visualstudio.com/items?itemName=vadimcn.vscode-lldb)

---

## ▶️ How to Use

### 🧱 Build & Run

Open `patterns.cpp` or `stl.cpp` and press:

- `Cmd + Shift + B` → **Build** using `g++-15`
- `F5` → **Debug** (gets terminal input working via `cin`)

---

## ✍️ What's Inside

### ✅ `patterns.cpp`

22+ classic C++ pattern problems, including:

- Star triangles (left/right-aligned)
- Number pyramids
- Inverted patterns
- Floyd’s triangle
- Pascal’s triangle
- Zig-zags and diamonds

---

### 📚 `stl.cpp`

C++ STL fundamentals with:

- `pair`, `vector`, `set`, `map`
- Nested containers
- Iterators, `sort`, `reverse`
- Frequency maps
- 2D vector logic

---

## 👨‍💻 Author

Made with ❤️ by [Pranjal Jamuar](https://github.com/Pranjal-Jamuar)  
This repo is part of my **75-day DSA + Frontend prep journey**


Using the StriversA2ZSheet - https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2
