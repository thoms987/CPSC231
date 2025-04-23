/************************************
 * Edge.h
 * Written by Faith Thomson
 ************************************/

#include <iostream>
#include <string>
using namespace std;

class edge
{
    friend class graph;
    friend class node;
    public:
        edge(node* source, node* target, int distance);         // constructor, need values to pass in
    private:
        node* source;                                           // pointer to the source node
        node* target;                                           // pointer to the target node
        int weight;                                             // distance to the target node
};

class node
{
    public:
        node();
};
