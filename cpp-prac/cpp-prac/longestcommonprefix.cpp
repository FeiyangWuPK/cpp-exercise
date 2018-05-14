//
//  longestcommonprefix.cpp
//  cpp-prac
//
//  Created by Feiyang Wu on 2018/5/14.
//  Copyright © 2018 Feiyang Wu. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
std::string longestCommonPrefix(std::vector<std::string>& strs){
    std::string str("");
    char chars=strs[1][0];
    bool flag=true;
    for (int i=0;i<strs[1].length();i++){
        chars=strs[1][i];
        for (int j=0; j<strs.size();j++){
            if (strs[j][i]!=chars){
                flag=false;
                break;
            }
            str+=chars;
        }
        if(!flag){break;}
    }
    return str;
}
