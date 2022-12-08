//
//  main.cpp
//  c++
//
//  Created by 李育腾 on 2022/12/7.
//

#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <map>
#include <vector>
int main(int argc, const char * argv[]) {
    std::unordered_map<int, int> hashTable;
    hashTable[7] = 4;
    hashTable[3] = 3;
    std::vector<int> ans;
    ans.push_back(1);
    std:: cout << hashTable.count(7);
    // 遍历
//    for (auto i = hashTable.begin(); i != hashTable.end(); i++) {
//        std::cout << i -> second << "\n";
//    }
//     查询 1
//    if (hashTable.find(4) != hashTable.end()) {
        // 删除
//        hashTable.erase(7);
//        std:: cout << "找到并删除" << "\n";
//    } else {
//        std::cout << "查找元素失败" << "\n";
//    }
//    // 查询 2
//    if (hashTable.count(4) == 1) {
//
//    } else {
//        std::cout << "查找元素失败";
//    }
//
//    // 删除全部键值对
//
//    hashTable.clear();
    
    
//    Set
    // 排序但不去重
//    std:: unordered_set<int> hashSet;
//    hashSet.insert(1);
//    hashSet.insert(5);
//    hashSet.insert(3);
//    hashSet.insert(2);
//    hashSet.insert(3);
//    hashSet.insert(3);
//    hashSet.insert(4);
//    // 遍历
//    // c++   for语法
//
//    for (auto e : hashSet)
//    {
//        std:: cout << e << "\n";
//        e++;
//    }
////    std:: cout << hashSet.size();
//    //排序＋去重
//
//        std:: set <int> s;
//        s.insert(3);
//        s.insert(1);
//        s.insert(8);
//        s.insert(2);
//        s.insert(5);
//        s.insert(5);
//        s.insert(5);
//
//        //set<int>::iterator it = s.begin();
//        auto it = s.begin();
//        while (it != s.end())
//        {
//            std:: cout << *it << " ";
//            it++;
//        }
//    std:: cout << std :: endl;
//
//
}

