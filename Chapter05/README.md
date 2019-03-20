## README
### cin读取空白字符
在标准的流中，有一个`skipws`标记，默认是置位的，表明当读取空白字符时，会将它们丢弃。使用`std::noskipws`操纵符可以清除这个标记：
```c++
cin >> std::noskipws;
```
### 传统for语句
`for`后面的括号中的第一个语句可以定义变量，可以用逗号隔开定义多个变量，但这些变量的基础类型必须相同。同时还要注意，这个语句中定义的变量只在`for`语句中有效。
### break和continue
`break`负责中止离它最近的循环，或`switch`语句，并从这些语句之后的第一条语句开始执行。
`continue`只能用于循环，终止当前一次迭代，然后继续循环。
### 异常处理
#### throw表达式
抛出异常。
```c++
if (item1.isbn() != item2.isbn())
    throw runtime_error("Data must refer to same ISBN");
cout << item1 + item2 << endl;
```
`runtime_error`包含在<stdexcept>头文件中，是标准库异常类型的一种，需要用一个字符串初始化。
`runtime_error`和`string`、`vector`一样，都属于`std`名称空间，需要用`using`声明。
#### try语句块
```c++
try
{
    program-statements
}
catch (exception-declaration)
{
    handler-statements
}
// 下面是举例
catch (runtime_error err) // runtime_error类型变量err的声明
{
    cout << err.what() << endl; // 成员函数what()返回的是初始化runtime_error时所用的字符串
} // ...
```
