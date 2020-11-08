#include <iostream> // #include 头文件
// 使用cin和cout进行输入和输出的程序必须包含文件iostream
// iostream：包含文件(include file) 也叫做头文件
// io 表示输入（进入程序的信息）和输出（从程序中发送出的信息）
/**
 * C++ 的头文件没有扩展名
 */

int main()
{
    // C++注释以双斜杠（//）打头。注释可以位于单独的一行上，也可以和代码位于同一行。
    using namespace std;  // using 编译指令，
    using std::cout;
    using std::endl;
    using std::cin;
    // 如果想要使用iostream 中的其他名称，必须将它们分别加到using列表中
    cout << "Come up and C++ me some time.";// 用于输出的cout变量实际上是std::cout,而endl实际上是std::endl.
    // 因此可以省略编译指令using,用以下方式进行编码：
    std::cout << "Come up and C++ me some time.";
    std::cout << std::endl;
    // 使用cout进行C++输出

    cout << "Come up and C++ me some time.";
    // 双引号括起的部分是要打印的消息。在C++中，用双引号括起的一系列字符叫做字符串，由若干字符组合而成的。
    // <<符号表示该语句将把这个字符串发送给cout;该符号指出了信息流动的路径， 
    cout << endl;
    /**
     * 1. 控制符 endl
     * endl 是一个特殊的C++符号，表示重启一行
     * 控制符：诸如endl等对于cout来说有特殊含义的特殊符号被称为控制符，endl也是在头文件iostream中定义的，且位于名称空间std中。
     * 在打印字符串时，cout不会自动移到下一行，会留在输出字符串的后面，每条cout语句的输出从前一个输出的末尾开始。
     * 
     * 2. 换行符
     * "\n"
     * 显示字符串时，在字符串中包含换行符，而不是在末尾加上endl，可减少输入量。
     * 在C++中，空格和回车可以互换。
     * */ 
    /**
     * C++源代码风格
     * 1. 每条语句占一行。
     * 2. 每个函数都有一个开始花括号和一个结束花括号，这两个花括号各占一行。
     * 3. 函数中的语句都相对于花括号进行缩进。
     * 4. 与函数名称相关的圆括号周围没有空白。
     * 
     * 
     *  */
    
    return 0;
}
