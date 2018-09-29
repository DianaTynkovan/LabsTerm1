//
//  main.cpp
//  1
//
//  Created by Диана Тынкован on 29.09.2018.
//  Copyright © 2018 Диана Тынкован. All rights reserved.
//

#include <iostream>
#include <cassert>
#include <vector>

class Fibonacci {
public:
    static int get(int n) {
        std::vector<int> fibarray;
        assert(n >= 0);
        fibarray.insert(fibarray.end(),1);
        fibarray.insert(fibarray.end(),1);
        for(int i = 2; i <= n; i++){
                fibarray.insert(fibarray.end(),fibarray[i-1]+fibarray[i-2]);
        }
        return fibarray[fibarray.size()-1];
    }
};

int main(void) {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n;
    int m;
    std::cin >> n >> m;
    assert(m >= 2);
    std::cout << Fibonacci::get(n-1) << std::endl;
    return 0;
}
