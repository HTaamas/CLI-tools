# 🛠️ Utility Toolkit (CLI-Based)

A simple command-line toolset written in C++ that provides a variety of small utilities, including number conversions, Morse code translations, and subnet calculations.

## 🚀 Features

This program currently supports the following tools:

1. **Subnet Calculator**
2. **Binary to Decimal Converter**
3. **Decimal to Binary Converter**
4. **Text to Morse Code Converter**
5. **Morse Code to Text Converter**
6. **Alphabetical to Numerical Converter**

   * Example: one → 1, two → 2, ..., twentysix → 26
7. **Numerical to Alphabetical Converter**

   * Example: 1 → one, 2 → two, ..., 26 → twentysix

<!-- 8. **Port Scanner** *(coming soon)* -->

## 🧪 How to Use

1. **Compile the program** using a C++ compiler like `g++`:

   ```bash
   g++ -o toolkit main.cpp your_header_implementation.cpp
   ```

2. **Run the program**:

   ```bash
   ./toolkit
   ```

3. **Follow the prompts** to choose from the list of available tools.

## 📁 File Structure

* `main.cpp`: The main entry point and menu logic.
* `header.h`: Function declarations for the utilities.
* `*.cpp`: Function definitions for each tool (you should create these if not already).

## 📦 Planned Features

* [ ] Port Scanner (currently commented out for future development)

## 🤝 Contributing

Feel free to fork this repo and submit a pull request if you want to improve the tools or add more!

## 📄 License

This project is released under the [MIT License](LICENSE).
