#pragma once

#include<iostream>
#include<exception>
#include"Dlist.h"
//一个数据库应当是一个容器，用于存储表，管理对象是表，因此其操作应该是对表的
//#include"container.h"
//#include< >--->>可能包含的库

//----------------------------------------------
//可能的准备工作：
/*变量定义
  名字空间引用
  模板定义
*/
//进行Database类的封装，该类继承dlist

//template<>--?可能用到
class database : public dlist<~> {
//----类型----------------------------------------
//----------------------------------公有的类型定义
public:

//----------------------------------私有属性
private:

//----------------------------------共有属性
public:

//----------------------------------类的构造函数和析构函数
    database() {

    }
    ~database() {

    }
//----------------------------------类的抽象方法
//继承dlist后要可能重写方法，也可能用的模板参数传入
    //作为数据库database，应该含有：
    /*1.Create_table--创建表

      2.drop_table--删除表

      3.search_table--查找表

      4.sort--将表名字按首字母排序，便于查找
    */
};
