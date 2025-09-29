# Lesson 33 - Solve getline Problem  

In this lesson, we learn how to solve the common **getline() problem** in C++.  
When mixing `cin` with `getline()`, input can sometimes be skipped due to leftover newline characters in the input buffer. This lesson teaches how to handle it properly.

## Key Points
- **Problem** → Using `cin` before `getline()` can leave a newline (`\n`) in the buffer.  
- **Solution** → Use `cin.ignore()` to clear the newline before calling `getline()`.

## Code
👉 [View the source code here](./Lesson_33_Solve_getline_problem.cpp)  

---

✅ Learned under the supervision of **Dr. Mohammed Abu-Hadhoud**.  
📺 [Watch this lesson on YouTube](https://www.youtube.com/watch?v=kGcRQfr6DMc&list=PL3X--QIIK-OFIRbOHbOXbcfSAvw198lUy&index=39&pp=iAQB)