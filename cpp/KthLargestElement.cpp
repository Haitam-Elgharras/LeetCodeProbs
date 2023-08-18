#include <iostream>
#include <assert.h>
#include <string.h>
#include <vector>

using namespace std;

// the event structure
struct event
{
    int priority;
};
// the pq structure
struct pqTree
{
    event e;
    pqTree *left, *right;
    int size = 0;
};

// primitive functions
pqTree *createNoeud(event e)
{
    pqTree *p = new pqTree;
    p->e = e;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void insert(pqTree **pq, event e) // insert an event in the priority queue
{
    if (*pq == NULL)
        *pq = createNoeud(e);
    else
        e.priority < (*pq)->e.priority ? insert(&(*pq)->left, e) : insert(&(*pq)->right, e);
    (*pq)->size++;
}

event getMinPriority(pqTree *pq) // get the event with the minimum priority
{
    // if the left child is null then the current node is the minimum
    return pq->left == NULL ? pq->e : getMinPriority(pq->left);
}

event remove(pqTree **pq) // remove the event with the minimum priority
{
    if ((*pq)->left == NULL) // if the left child is null then the current node is the minimum
    {
        event e = (*pq)->e;
        pqTree *tmp = *pq;
        (*pq)->size--;
        *pq = (*pq)->right;
        delete tmp;
        return e;
    }
    return remove(&(*pq)->left);
}

event searchKieme(pqTree *pq, int k) // we search for the k-th min priority
{

    event e;
    for (int i = 0; i < k - 1; i++)
    {
        if (pq != NULL)
        {
            e = remove(&pq);
        }
    }
    e = remove(&pq);
    return e;
}

class Solution
{
public:
    // Min Priority Queue ??
    int findKthLargest(vector<int> &nums, int k)
    {
        pqTree *pq = NULL;
        for (size_t i = 0; i < nums.size(); i++)
        {
            event e1;
            e1.priority = nums[i];
            insert(&pq, e1);
        }
        event e = searchKieme(pq, nums.size() - k + 1);
        return e.priority;
    }
};
