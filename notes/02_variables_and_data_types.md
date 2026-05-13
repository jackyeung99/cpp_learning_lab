# 2. Variables & Data Types

## Variables

Variables are pieces of data that store information in memory and help represent the current state of a program.

Example:

```cpp
int age = 25;
```

---

## Initialization

Variables must be declared with a type.

```cpp
float temperature;
```

Values can then be assigned later:

```cpp
temperature = 98.7f;
```

Variables can also be initialized immediately:

```cpp
float temperature = 98.7f;
```

Uniform initialization syntax:

```cpp
float temperature {98.7f};
```


## Type Inference (`auto`)

`auto` allows the compiler to automatically deduce the variable type.

```cpp
auto x = 42;      // int
auto y = 3.14;    // double
```

Once deduced, the type is fixed.


## Constants (`const`, `constexpr`)

Constants refer to the 


## Integer Types

Used for whole numbers.

| Type | Typical Size | Example |
|---|---|---|
| `short` | 2 bytes | `short x = 10;` |
| `int` | 4 bytes | `int x = 10;` |
| `long` | 4 or 8 bytes | `long x = 10;` |
| `long long` | 8 bytes | `long long x = 10;` |

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



## Boolean Type

```cpp
bool isRunning = true;
```
- Stores either `true` or `false`
- Typically uses 1 byte
- also can be represented using 1 or 0 



## Signed vs Unsigned

Unsigned types store only non-negative values and roughly double the positive range.

```cpp
unsigned int x = 42;
```

Example ranges:

| Type | Signed Range | Unsigned Range |
|---|---|---|
| `int` | ~ -2B to 2B | 0 to ~4B |

### `unsigned char`

`unsigned char` stores values from:

```text
0 to 255
```

Commonly used for:
- binary data
- image processing
- memory buffers


## Type Conversion

We can explicitly convert between types.

Example:

```cpp
int x = static_cast<int>(2.5);
```

Result:

```text
x == 2
```

The decimal portion is truncated.


## `static_cast`

```cpp
static_cast<int>(2.5)
```

Used for explicit type conversion.


## Type Sizes (`sizeof`)

sizeof(var) is a way to get the explicit size in memory


## Overflow & Underflow

These are errors for when you try to assign a value that is outside of the defined memory allocation. 


## Floating Point Precision

Floating-point numbers cannot precisely represent all decimal values in binary.

Example:

```cpp
float x = 0.1f;
```

Stored internally as an approximation.


## Literals & Suffixes

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



## Enumerations (`enum`)

a way to set up a data type with named constants which allows the code to be more readable

instead of doing 

``` cpp
enum Direction {
    LEFT,
    RIGHT,
    UP,
    DOWN
};

Direction direction = LEFT;

if (direction == LEFT) {
    cout << "Going left";
}
```

## Type Aliases (`typedef`, `using`)

Type aliases let you create a new name for an existing type.

```cpp
using PairList = std::vector<std::pair<int, std::string>>;

PairList data;

```

# Important Notes

- C++ gives direct control over memory and precision
- Choosing the correct type matters for:
  - performance
  - memory usage
  - numerical accuracy
- Unlike Python, C++ types are explicit