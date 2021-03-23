/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Gage Machado
 *
 * Created on January 22, 2021, 1:07 PM
 */

#include <cstdlib>
#include "List.h"

using namespace std;

/*
 * 
 */
int main() {
    
    List Gage;
    Gage.addNode(8);
    Gage.addNode(2);
    Gage.addNode(9);
    Gage.printList();
    Gage.deleteNode(2);
    Gage.printList();
}

