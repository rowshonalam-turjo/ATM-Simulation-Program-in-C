# 🏧 ATM Simulation Program (Advanced Version)

A console-based ATM Simulation Program written in C.  
This project simulates basic ATM banking operations with secure PIN authentication and identity verification.

---

## 🔐 Security Features

- 3 PIN attempts limit
- PIN required for:
  - Checking balance
  - Depositing money
  - Withdrawing money
- ID & Mobile number verification for forgotten PIN
- Option to reset PIN securely

---

## 📌 Features

- 💰 Check Account Balance
- ➕ Deposit Money (PIN Protected)
- ➖ Withdraw Money (PIN Protected)
- 🔄 Change PIN
- 🆔 ID & Mobile Verification System
- 🚪 Exit Option
- 🖥️ Console-based user interface

---

## 🛠️ Technologies Used

- C Programming Language
- Standard Libraries:
  - `stdio.h`
  - `string.h`
  - `windows.h`

---

## 🧠 Program Logic

### 1️⃣ PIN Authentication
- User gets 3 attempts.
- If failed:
  - Option to verify identity using ID and Mobile number.
  - Can reset PIN after successful verification.

### 2️⃣ Deposit & Withdraw
- User must enter correct PIN.
- Validates:
  - Deposit amount > 0
  - Withdrawal amount ≤ current balance

### 3️⃣ PIN Recovery
- Requires:
  - Correct ID number
  - Correct Mobile number
- Allows secure PIN reset.

---

## ▶️ How to Run

### 💻 Using CodeBlocks / Dev-C++
1. Open the source file.
2. Compile.
3. Run the program.

### 🖥️ Using GCC (Windows)

```bash
gcc atm.c -o atm
atm
```

⚠️ Note: This project uses `windows.h` and `system("cls")`, so it works only on Windows OS.

---

## 📷 Main Menu

```
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Change PIN
5. Exit
```

---

## 🎯 Learning Outcomes

This project demonstrates:

- Functions in C
- Global variables
- String comparison using `strcmp()`
- Loop control with `for`
- Conditional statements
- Basic authentication logic
- Console UI formatting
- Simple security flow implementation

---


## 👨‍💻 Author

* Md. Rowshon Alam
* Beginner C Programmer.  
* ATM Simulation Project.
* Date: 24/02/2026
