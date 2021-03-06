 ## README

[TOC]

### 初始化的特殊情况

1. 使用拷贝初始化时，只能提供一个初始值。
2. 提供类内初始值时， 只能使用拷贝初始化或者花括号进行初始化，不能使用圆括号。
3. 如果提供的是初始元素值的列表，只能用花括号，不能用圆括号。

### 标准库类型string

#### 初始化

```c++
string s1;           // 默认初始化，一个空字符串
string s2(s1);
string s2 = s1;
string s3("value");
string s3 = "value";
string s4(n, 'C');   // 连续n个字符C组成的串
```

拷贝初始化：使用等号的初始化方式，**只能提供一个初始值**。

直接初始化：不使用等号的初始化方式。

使用`+`拼接字符串时，`+`左右两侧至少有一个是`string`对象，另一个可以是`string`对象，也可以是字符字面值、字符串字面值或字符数组。

#### 成员函数

* []下标运算符
* `size()`、`empty()`。`size()`的返回值类型为`string::size_type`

### 范围for语句

```c++
for (declaration : expression)
    statement
```

遍历给定序列expression的每一个元素，并执行某种操作statement。

expression是一个对象，表示一个序列。declaration定义一个变量，每次迭代的时候，会被初始化为expression的下一个元素。**注意：这里是拷贝，如果想改变序列中的值，应该用引用或指针。**

### 模板

模板包括类模板和函数模板。根据模板创建类或函数的过程称为**实例化**。

实例化时需要提供信息，紧跟在模板后面用尖括号括起来。

### 标准库类型vector

`vector`是一个类模板。

#### 初始化

|                              | 含义                                                         |
| ---------------------------- | ------------------------------------------------------------ |
| vector<T>  v1                | v1 是一个空vector。它潜在的元素是T类型的，执行默认初始化     |
| vector<T>  v2(v1)            | v2 中包含有v1所有元素的副本                                  |
| vector<T>  v2 = v1           | 等价于v2 (v1) , v2 中包含有v1 所有元素的副本                 |
| vector<T>  v3(n, val)        | v3 包含了n 个重复的元素，每个元素的值都是val。在不产生歧义的情况下，可以使用花括号代替小括号 |
| vector<T>  v4(n)             | v4 包含了n 个重复地执行了值初始化的对象                      |
| vector<T>  v5{a, b, c...}    | v5 包含了初始值个数的元素，每个元素被赋予相应的初始值        |
| vector<T>  v5 = {a, b, c...} | 等价于v5{a ，b ，c . . . }                                   |

花括号一般用来进行列表初始化，如果无法执行列表初始化，会进行与圆括号相同的初始化操作。

```c++
vector<string> v1{10, "Hi!"}; // 10个字符串
```

* 允许用数组来初始化`vector`对象

  ```c++
  int int_arr[] = {0, 1, 2, 3, 4, 5};
  vector<int> ivec(begin(int_arr), end(int_arr));
  ```

  

#### 成员函数

* `push_back()`添加成员

  ```c++
  vector<int> v2;
  for (int i = 0; i != 100; ++i)
      v2.push_back(i);
  ```

* `empty()`、`size()`、关系运算符、赋值运算符。`size()`返回值类型为`vector<T>::size_type`

* []下标运算符，只能用来访问已经存在的元素，不能用不存在的下标添加元素

### 迭代器

所有标准库容器都可以使用迭代器，但只有少数几种支持下标运算符。

`string`对象不属于容器类型，但支持很多与容器类型类似的操作，支持迭代器。

`vector`属于容器类型，支持下标运算符。

有迭代器的类型同时拥有返回迭代器的成员，`begin()`和`end()`。`begin()`返回指向第一个元素的迭代器，`end()`返回指向对象尾元素的下一位置。如果对象为空，两者相同，都是尾后迭代器。

迭代器类型一般用`auto`声明。

**使用迭代器的循环内，不要向容器中添加元素，可能会使迭代器失效。**

#### 对象类型

迭代器对象的类型有两种，`iterator`和`const_iterator`，两者的区别和`const`对引用的影响相同。

```c++
vector<T>::iterator it1;
string::iterator it2;

vector<T>::const_iterator it3;
string::const_iterator it4;
```

`begin()`和`end()`的返回值类型由容器对象是否是常量决定。

如果想要得到`const_iterator`类型的迭代器，可以使用`cbegin()`和`cend()`代替。

#### 迭代器运算符

| 运算符                           | 含义                                                     |
| -------------------------------- | -------------------------------------------------------- |
| *iter                            | 返回迭代器iter所指元素的引用                             |
| iter->mem                        | 解引用iter并获取该元素的名为mem的成员，等价于(*iter).mem |
| ++iter                           | 令iter指向容器中的下一个元素                             |
| --iter                           | 令iter指向容器中的上一个元素                             |
| iter1 == iter2或者iter1 != iter2 | 判断两个迭代器是否相等                                   |

两个迭代器不能相加

```c++
mid = beg + (end - beg) / 2;
mid = (beg + end) / 2; // 错误
```

### 数组

```c++
int *ptrs[10];              // ptrs 是含有10 个整型指针的数组
int &refs[10] = /* ?* /;    // 错误：不存在引用的数组
int (*Parray)[10] = &arr;   // Parray 指向一个含有10个整数的数组
int (&arrRef)[10] = arr;    // arrRef 引用一个含有10个整数的数组
```

数组长度必须用常量表达式，在有的编译器可能用变量也可以。

数组类型必须指定，不能使用`auto`由初始值推断。

数组作为`auto`变量的初始值时，得到的是指针类型，而不是数组。

对数组使用`decltype()`函数时，得到的是数组类型。

数组支持范围`for`语句。

如果指针指向的是数组中的元素，那么这个指针也可以使用下标进行运算，下标可以是负值。

#### 数组下标

数组下标是`size_t`类型，该类型定义在`cstddef`头文件中。

#### begin和end

C++11新标准引入了`begin()`和`end()`函数。它们不是成员函数，而要把数组作为参数，返回指针。

这两个函数也包含在`std`名称空间内，需要用`::`解析符。

```c++
int ia[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int *beg = begin(ia);
int *last = end(ia);
```

#### 多维数组

使用范围`for`语句处理多维数组时，除了最内层的循环之外，其他循环的控制变量都应该是引用类型，避免数组被自动转成指针类型。

使用类型别名简化多维数组

```c++
using int_array = int[4];
typedef int int_array[4]; // 这两种声明方式等价

int ia[3][4] = {...};
for (int_array *p = ia; p != ia + 3; ++p)
{
    for (int *q = *p; q != *p + 4; ++q)
        cout << *q << ' ';
    cout << endl;
}
```

本节习题详细解释了使用范围引用、下标、指针访问二维数组。

[s03e43.cpp](.\s03e43.cpp) [s03e44.cpp](.\s03e44.cpp) [s03e45.cpp](.\s03e45.cpp)

