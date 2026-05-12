

# Variables 
Variables are pieces of data which can help describe the current state of an object. 

We define the name of the variable and data type first
``` cpp
    float temperature;  
```
then assign a value to it 
``` cpp
    temperature= 98.7.f;  
```

We can also do this together like 
``` cpp
    float temperature=98.7.f;
```
or 
``` cpp
    float temperature {98.7.f}; 
```




# Data Types

Data types define what kind of value a variable can store, how much memory it uses, and what operations can be performed on it.

---

## Boolean

```cpp
bool isRunning = true;
```

- Stores either `true` or `false`
- Typically uses 1 byte

---

## Integer Types

Used for whole numbers.

| Type | Typical Size | Example |
|---|---|---|
| `short` | 2 bytes | `short x = 10;` |
| `int` | 4 bytes | `int x = 10;` |
| `long` | 4 or 8 bytes | `long x = 10;` |
| `long long` | 8 bytes | `long long x = 10;` |

### Unsigned Integers

Unsigned types store only non-negative values and roughly double the positive range.

```cpp
unsigned int x = 42;
```

Example ranges:

| Type | Signed Range | Unsigned Range |
|---|---|---|
| `int` | ~ -2B to 2B | 0 to ~4B |

---

## Floating Point Types

Used for decimal numbers.

| Type | Typical Size | Precision |
|---|---|---|
| `float` | 4 bytes | ~7 digits |
| `double` | 8 bytes | ~15 digits |
| `long double` | 8–16 bytes | higher precision |

Examples:

```cpp
float x = 3.14f;
double y = 3.14;
long double z = 3.14L;
```

### Floating Point Literal Suffixes

Floating-point literals default to `double`.

```cpp
float x = 3.14;   // double literal converted to float
float y = 3.14f;  // already a float
```

Suffixes:

| Suffix | Type |
|---|---|
| `f` | `float` |
| none | `double` |
| `L` | `long double` |

Using `f` avoids an implicit conversion from `double` to `float`.

---

## Character Types

Used for storing characters and raw bytes.

| Type | Typical Size | Description |
|---|---|---|
| `char` | 1 byte | standard character |
| `signed char` | 1 byte | small signed integer |
| `unsigned char` | 1 byte | raw byte / small unsigned integer |
| `wchar_t` | 2–4 bytes | wide characters |
| `char16_t` | 2 bytes | UTF-16 character |
| `char32_t` | 4 bytes | UTF-32 character |

Example:

```cpp
char letter = 'A';
```

### `unsigned char`

`unsigned char` stores values from:

```text
0 to 255
```

Commonly used for:
- binary data
- image processing
- memory buffers

---

## Strings

A string is a collection of characters.

```cpp
std::string name = "Jack";
```

Requires:

```cpp
#include <string>
```

---

## Auto Type Deduction

`auto` lets the compiler automatically determine the variable type.

```cpp
auto x = 42;      // int
auto y = 3.14;    // double
```

Once deduced, the type is fixed.

---

## Void

`void` means “no value.”

Used for:
- functions that return nothing
- generic pointers

Example:

```cpp
void printMessage() {
}
```

---

# Type Conversion

We can explicitly convert between types using `static_cast`.

```cpp
static_cast<int>(2.5)
```

Example:

```cpp
int x = static_cast<int>(2.5);
```

Result:

```text
x == 2
```

The decimal portion is truncated.

---

# Important Notes

- C++ gives direct control over memory and precision
- Choosing the correct type matters for:
  - performance
  - memory usage
  - numerical accuracy
- Unlike Python, C++ types are explicit