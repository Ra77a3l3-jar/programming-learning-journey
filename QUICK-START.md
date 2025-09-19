# Quick Start Guide

## 🚀 First Steps (Next 30 minutes)

### 1. Verify Your Setup
```bash
# Check Python
python3 --version  # Should be 3.8+

# Check C compiler
gcc --version      # Should show GCC info

# Create a workspace
cd programming-learning-journey
```

### 2. Start Your First Project
```bash
cd python/beginner/01-calculator
cat exercise.md    # Read the full instructions
```

### 3. Create Your First Program
```python
# calculator.py - Start simple!
def add(a, b):
    return a + b

def main():
    print("Welcome to Calculator!")
    num1 = float(input("Enter first number: "))
    num2 = float(input("Enter second number: "))
    result = add(num1, num2)
    print(f"Result: {num1} + {num2} = {result}")

if __name__ == "__main__":
    main()
```

### 4. Test and Run
```bash
python3 calculator.py
```

### 5. Track Your Progress
Create a file called `PROGRESS.md` and update it daily:

```markdown
# My Progress

## Day 1 - [Today's Date]
- ✅ Set up development environment
- ✅ Started calculator project
- 🔄 Working on: Adding more operations

## Lessons Learned
- Functions make code organized
- Input validation is important

## Tomorrow's Goal
- Finish basic calculator
- Add error handling
```

## 🎯 Daily Routine (Suggested)

### 20-30 Minutes Per Day
1. **Open current project** (5 min)
2. **Read/review instructions** (5 min)
3. **Code one small feature** (15-20 min)
4. **Test and commit progress** (5 min)

### Weekly Goals
- **Week 1**: Complete calculator + start todo list
- **Week 2**: Finish todo list + file organizer  
- **Week 3**: Complete Python beginners + start C
- **Week 4**: C basics + first intermediate project

## 🚨 When You Get Stuck

### Debug Checklist
1. **Read the error message** - What does it actually say?
2. **Check syntax** - Missing colons, parentheses, semicolons?
3. **Print variables** - Are they what you expect?
4. **Google the exact error** - Someone else had this problem
5. **Take a break** - Come back with fresh eyes

### Common Beginner Mistakes

**Python:**
- Forgetting colons after if/for/def statements
- Indentation errors (use 4 spaces consistently)
- Mixing tabs and spaces
- Forgetting to convert input() to int/float

**C:**
- Missing semicolons at end of statements
- Forgetting to include necessary headers
- Not initializing variables
- Array index out of bounds

## 📱 Recommended Daily Practice

### Morning (Optional)
- Read one programming article/tutorial
- Review yesterday's code

### Main Session (20-30 min)
- Work on current project
- Focus on one small feature at a time

### Evening (Optional)
- Update progress log
- Plan tomorrow's task

## 🎉 Celebrate Small Wins!

- ✅ First program that runs without errors
- ✅ First successful compilation in C
- ✅ First time fixing a bug independently
- ✅ First complete project
- ✅ First use of a new concept (loops, functions, etc.)

Each small victory builds momentum. Keep going! 🚀