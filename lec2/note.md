# Note 2
  
- Array
  - pointer nature
    - [][]与**一致 
    [][][] 指针的指针的指针
     可以巨多层 高兴就好
  - multi-dimension
    - [][]多维数组
    - main's argv
    本质上是数组的数组，指针的指针
        - argc -argument counter; 
          argv -argument vector
  - sizeof
    - 相当于python的len()
- Memory Address （是无符号整型）
  - layout内存布局 [坑1]
    - stack
    [向低地址扩展]
    - heap
    [向高地址扩展]
- Pointer
  - arithmetic 
  运算+-
    - 类型 char 1 int 4 
  - size
    - size_t 机器字长 32位 or 64位
  - reference
     - 指针本身存在的位置
  - dereference
    - 指针指向的地址上的<数据>
  - parameter
    - const reference [坑2]
  - function pointer
    - 指向一段可执行代码的指针
- Compilation 
    - 编译
  - pre-processing 
    - 预处理
  include define 
    - 去掉注释
  - compiling 
    - 编译为汇编代码
  - assembly
    - 汇编代码变成机器码
  - linking
    - 链接库文件/把所有的可执行函数连接到一起，顺序正确
- Assembly 汇编代码
  - "-g" debug flag - 调试flag
  - objdump - 反汇编工具
  - common opcode
    - push/pop
    堆栈操作 入栈出栈
    - mov
    数据传送指令
    - call/ret
    函数调用
    - add/sub （subtraction）
    加减
    - cmp
    compare
    - jmp/je/jne/jg/jl/jge/jle
    跳转指令/equal/not equal/greater/less/ge/le
    - shl/shr
    左移（考虑溢出）/右移 e.g.1001 —— 10010（shl） 1001 —— 0100（shr）
shift left/
    - lea
    load effective addr （dereference）
    - nop
    no operation
  - calling convention
  
## mkdir

create a new directory

## touch

create a new file