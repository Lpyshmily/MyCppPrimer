## Chapter 06
### 数组的引用作为形参
C++允许定义**数组的引用**
```c++
void print(int (&arr)[10])
{
    for (auto elem : arr)
        cout << elem << endl;
}
```
通过数组引用定义的形参，数组个数固定，不能传入其他个数的数组。

注意数组引用的定义形式，必须有小括号，否则意义改变，`int &arr[10]`意思是10个整形引用构成的数组。
### 传递二维数组
```c++
void print(int (*matrix)[10], int rowsize);
void print(int matrix[][10], int rowsize);
```
### 传递可变数量的形参
#### initializer_list实参
如果函数的实参数量未知，但是全部实参的类型相同，可以使用`initializer_list`类型的形参。

`initializer_list`使用方法和`vector`基本相同，可以使用迭代器和范围`for`语句，但`initializer_list`对象中的元素永远是常量值。如果在范围`for`语句需要用到引用时，定义的变量类型一定要用`const`，或者直接使用`auto`。

`initializer_list`类型定义在同名的头文件中。

向`initializer_list`形参中传递多个实参时，需要用花括号，然后再放在圆括号里面。
```c++
int sum(std::initializer_list<int> items)
{
    int result = 0;
    for (auto &item : items) // 这里的auto应该是const int
        result += item;
    return result;
}
int main()
{
    std::cout << sum({1, 3, 8}) << std::endl;
    return 0;
}
```
### 返回语句
* 返回类型为`void`的函数可以用`return;`来提前结束。
* 不能返回局部对象的引用或指针。
* C++11新标准，可以返回花括号包围的值的列表，用来对返回值类型的临时变量进行初始化。
### 返回数组指针
* 传统方法
```c++
Type (*function(parameter_list)) [dimension]
// 类似于指向数组的指针的声明
int (*p)[10];
// 举例
int (*func(int i)) [10];
```
* 使用类型别名
* 使用尾置返回类型
```c++
auto func(int i) -> int(*)[10];
```
* 使用`decltype()`
```c++
int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};
decltype(odd) *arrPtr(int i)
{
    return (i % 2) ? &odd : &even;
}
```
### 函数重载
函数重载时形参区分底层`const`，不区分顶层`const`。
### 程序调试
`__FILE__`存放文件名的字符串字面值。
`__LINE__`存放当前行号的整型字面值。
`__TIME__`存放文件编译时间的字符串字面值。
`__DATE__`存放文件编译日期的字符串字面值。
### 函数指针
* 声明
```c++
// 函数声明
bool length_compare(const string &, const string &);
// 函数指针的声明，圆括号必不可少
bool (*pf) (const string &, const string &);
```
* 赋值
两种都可以，取地址符可有可无。
```c++
pf = length_compare;
pf = &length_compare;
```
* 调用
两种都可以，解引用可有可无。
```c++
bool b1 = pf("hello", "goodbye");
bool b2 = (*pf)("hello", "goodbye");
```
* 重载函数的指针
涉及到重载函数时，函数指针的形参和返回值必须与其中一个完全相同。
* 形参
下面两种方法等价，无论形参里有没有声明为指针，传进来的函数名都当做指针处理
```c++
void useBigger(const string &s1, const string &s2, bool pf(const string &, const string &));
void useBigger(const string &s1, const string &s2, bool (*pf)(const string &, const string &));
```
* 别名
前两个是函数别名，后两个是函数指针别名。
```c++
typedef bool Func(onst string &, onst string &);
typedef decltype(length_compare) Func2;

typedef bool (*FuncP)(onst string &, onst string &);
typedef decltype(length_compare) *FuncP2;
```
* 返回函数指针
返回类型必须定义成函数指针，不能是函数
```c++
using F = int(int*, int);
using PF = int(*)(int*, int);

PF f1(int);
F f1(int); // 错误，必须返回指针类型
F *f1(int);
// 直接返回
int (*fi(int)) (int*, int);
// 尾置返回类型
auto f1(int) -> int (*)(int*, int);
