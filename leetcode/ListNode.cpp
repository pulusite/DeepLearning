//
// Created by Eric on 12/26/2017.
//
#ifndef NULL
#define NULL   ((void *) 0)
#endif

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
