#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <string.h>

int main() {
    
    std::string linha;
   
    //A função get line pega todo o texto.
    
    std::getline (std::cin, linha);
    long unsigned int n = linha.size();
    
    if(n <= 80)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
       
    return 0;
}
