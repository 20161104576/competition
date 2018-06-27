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
using namespace std;


int main()

using namespace std;


int main()

{
    int i;
    double score[5];
    double max = -1;
    double min = 200;
    double sum = 0.0;
    double x = 0.0;
    cin>>score[0]>>score[1]>>score[2]>>score[3]>>score[4];
    for (i = 0; i< 5; i++)
    {
        sum = sum + score[i];
        if (score[i] > max)
        {
            max = score[i];
        }
        if (score[i] < min)
        {
            min = score[i];
        }
    }
    sum = sum - max - min;
    x = sum / 3 ;
    cout << "该选手的最后得分:" << x << endl;
    // 写文件
    ofstream outFile;
    outFile.open("data.csv", ios::out); // 打开模式可省略
    outFile << "name" << ',' << "age" << ',' << "hobby" << endl;
    outFile << "Mike" << ',' << 18 << ',' << "paiting" << endl;
    outFile << "Tom" << ',' << 25 << ',' << "football" << endl;
    outFile << "Jack" << ',' << 21 << ',' << "music" << endl;
    outFile.close();
    
    // 读文件
    ifstream inFile("data.csv", ios::in);
    string lineStr;
    vector<vector<string>> strArray;
    while (getline(inFile, lineStr))
    {
        // 打印整行字符串
        cout << lineStr << endl;
        // 存成二维表结构
        stringstream ss(lineStr);
        string str;
        vector<string> lineArray;
        // 按照逗号分隔
        while (getline(ss, str, ','))
            lineArray.push_back(str);
        strArray.push_back(lineArray);
    }
    
    getchar();
    return 0;
}


































