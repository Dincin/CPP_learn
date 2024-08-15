# const含义

const是用来指定常类型的关键词，常类型的变量或者对象不能够更新，只占用一次内存，

在编译时的？？？

# const作用

- 定义常变量 -> <font color = red>常变量是做什么的关于常变量的信息?</font>
- 类型检查
  关于const与\#define宏定义的区别:
  const只有在定义类型为整型或枚举型，且表达式初始化了，才可以看做是常量表达式。其他情况是变量不要和常量混淆。？？？
  
- 防止修改，起到保护，提高健壮性
- 可以节省空间，避免不必要的内存分配
   ~~ #define定义的常量在运行时拷贝多份。？？？~~

# const对象属性（默认为文件局部变量）

非const对象默认是extern。其它文件可以extern正常访问，const，需要在定义的时候声明是extern，而且使用时还需要初始化，因为常量不能被修改所以定义时要初始化。
# 定义常量

# const与指针


const在`*` 左边，说明是常量的指针，const修饰的是指针指向的变量。
const在`*` 右边，指针是一个不可变的，指针指的变量可以变，const修饰的是指针本身。

## 1. 指向常量的指针
``` cpp
const char * a; //指向const对象的指针或者说指向常量的指针。
char const * a; //同上
char * const a; //指向类型对象的const指针。或者说常指针、const指针。
const char * const a; //指向const对象的const指针。

# 指向常量的指针
const int *ptr;

# ptr 是一个const int类型的指针 
*ptr = 10; //error
int value = 10;
ptr = &value
# ???
const int value = 10;
ptr = &value


```
<font color = red>允许把非const对象的地址赋给const对象的指针<br>
不允许反过来
不能使用void * 指针保存const对象的地址，必须使用const void * 类型的指针保存const对象的地址。

</font>


对于指向常量的指针，不能通过指针来修改对象的值。也不能使用void*指针保存const对象的地址，必须使用const void*类型的指针保存const对象的地址。允许把非const对象的地址赋值给const对象的指针，如果要修改指针所指向的对象值，必须通过其他方式修改，不能直接通过当前指针直接修改。
## 2.常指针

