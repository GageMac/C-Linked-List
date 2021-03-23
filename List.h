/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkList.h
 * Author: Gage Machado
 *
 * Created on January 22, 2021, 1:08 PM
 */

#ifndef LIST_H
#define LIST_H

class List{
private:
    typedef struct node{
        int data;
        node* next;
    }* nodePtr;
    
    nodePtr head;
    nodePtr curr;
    nodePtr temp;
    
public:
    List();
    void addNode(int addData);
    void deleteNode(int delData);
    void printList();
};


#endif /* LINKLIST_H */