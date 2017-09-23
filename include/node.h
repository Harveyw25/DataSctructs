#ifndef NODE_H
#define NODE_H


class node
{
    public:
        int data;
        node* next;
        node(int);
        node(int, node*);
        virtual ~node();

    protected:

    private:

};

#endif // NODE_H
