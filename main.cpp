//
//  main.cpp
//  competition
//
//  Created by fjh on 2018/6/25.
//  Copyright © 2018年 fjh. All rights reserved.
//

#include <iostream>


struct racer{
    char rac_name[20];//选手名字
    char rac_sex;//选手性别
    char rac_class[10];//选手班级
    int rac_number[10];//选手电话号码
    char rac_category;//节目类别
    char rac_proname;//节目名称
};
struct rater{
    char rat_name[20];//裁判名字
    char rat_sex;//裁判性别
    int rat_number[15];//裁判电话号码
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
