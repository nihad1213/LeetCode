#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* newNode(int val) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = val;
    node->next = NULL;
    return node;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode dummy;
    struct ListNode* current = &dummy;
    dummy.next = NULL;

    int carry = 0;
    while (l1 != NULL || l2 != NULL || carry > 0) {
        int x = (l1 != NULL) ? l1->val : 0;
        int y = (l2 != NULL) ? l2->val : 0;
        int sum = x + y + carry;

        carry = sum / 10;
        current->next = newNode(sum % 10);
        current = current->next;

        if (l1 != NULL) l1 = l1->next;
        if (l2 != NULL) l2 = l2->next;
    }

    return dummy.next;
}

struct ListNode* buildList(int arr[], int n) {
    struct ListNode dummy;
    struct ListNode* curr = &dummy;
    dummy.next = NULL;

    for (int i = 0; i < n; i++) {
        curr->next = newNode(arr[i]);
        curr = curr->next;
    }
    return dummy.next;
}

void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d", head->val);
        if (head->next != NULL) printf(" -> ");
        head = head->next;
    }
    printf("\n");
}

int main() {
    int a1[] = {9,9,9,9,9,9,9};
    int a2[] = {9,9,9,9};

    struct ListNode* l1 = buildList(a1, 7);
    struct ListNode* l2 = buildList(a2, 4);

    struct ListNode* result = addTwoNumbers(l1, l2);

    printList(result);
    return 0;
}
