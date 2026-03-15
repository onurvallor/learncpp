# CHAPTER 1

## 1.1

- A function is a collection of statements that get executed sequentially

- Programs typically terminate (finish running) after the last statement inside function main has been executed (though programs may abort early in some circumstances, or do some cleanup afterwards).

- the name of a function (or object, type, template, etc…) is called its identifier.

- Computers have an additional type of character, called a “control character”. These are characters that have special meaning to the computer system, but either aren’t intended to be displayed, or display as something other than a single visible symbol.

- This #include preprocessor directive indicates that we would like to use the contents of the iostream library,

- every C++ program must have a main function or it will fail to link.

- yntax, which describes how the elements of your program must be written and arranged in order for the program to be considered valid

## 1.3

- In computing, data is any information that can be moved, processed, or stored by a computer.

- Values that are placed directly into the source code are called literals.

- Literals are read-only values, so their values can’t be modified.

- An object represents a region of storage (typically RAM or a CPU register) that can hold a value.

- a variable in our program, we need to tell the compiler that we want one. The most common way to do this is by use of a special kind of declaration statement called a definition

- At runtime (when the program is loaded into memory and run), each object is given an actual storage location (such as RAM, or a CPU register) that it can use to store values

- The process of reserving storage for an object’s use is called allocation.

- After a variable has been defined, you can give it a value (in a separate statement) using the = operator. This process is called assignment, and the = operator is called the assignment operator.

- By default, assignment copies the value on the right-hand side of the = operator to the variable on the left-hand side of the operator. This is called copy-assignment.

- The process of specifying an initial value for an object is called initialization, and the syntax used to initialize an object is called an initializer

- no initializer is provided (such as for variable a above), this is called default-initialization. In many cases, default-initialization performs no initialization, and leaves the variable with an indeterminate value (garbage value)

- When an initial value is provided after an equals sign, this is called copy-initialization. This form of initialization was inherited from the C language.

- Copy-initialization is also used whenever values are implicitly copied, such as when passing arguments to a function by value, returning from a function by value, or catching exceptions by value.

- Direct-initialization is also used when values are explicitly cast to another type (e.g. via static_cast).

- Additionally, list-initialization also provides a way to initialize objects with a list of values rather than a single value (which is why it is called “list-initialization”)

- One of the primary benefits of list-initialization for new C++ programmers is that “narrowing conversions” are disallowed.

- value-initialization (and default-initialization) may instead initialize the object to predefined default values, which may be non-zero.

- Initialize your variables upon creation.

- C++17 introduced the [[maybe_unused]] attribute, which allows us to tell the compiler that we’re okay with a variable being unused.

## 1.5

- Using std::endl is often inefficient, as it actually does two jobs: it outputs a newline (moving the cursor to the next line of the console), and it flushes the buffer (which is slow).
- If we output multiple lines of text ending with std::endl, we will get multiple flushes, which is slow and probably unnecessary.

- ‘\n’ is represented in source code as two symbols, it is treated by the compiler as a single linefeed (LF) character (with ASCII value 10),

- xtraction operator ‘>>’ removes characters from the front of the input buffer and converts them into a value that is assigned (via copy-assignment) to the associated variable.

## 1.6

- C/C++ does not automatically initialize most variables to a given value (such as zero)

- Undefined behavior (often abbreviated UB) is the result of executing code whose behavior is not well-defined by the C++ language.

- Behavior that is defined by the implementation is called implementation-defined behavior. Implementation-defined behavior must be documented and consistent for a given implementation.

- A literal (also known as a literal constant) is a fixed value that has been inserted directly into the source code.

- the value of a literal is fixed and cannot be changed. The literal 5 always has value 5.

## 1.9

- An operator (or function) that has some observable effect beyond producing a return value is said to have a side effect.

- Both operator= and operator<< (when used to output values to the console) return their left operand. Thus, x = 5 returns x, and std::cout << 5 returns std::cout. This is done so that these operators can be chained.

## 1.10
