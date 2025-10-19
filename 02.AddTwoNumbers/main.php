<?php

class ListNode {
	public $val = 0;
	public $next = null;

	function __construct($val = 0, $next = null) {
		$this->val = $val;
		$this->next = $next;
	}
}

class Solution {
	/**
	 * @param ListNode $l1
	 * @param ListNode $l2
	 * @return ListNode
	 */
	function addTwoNumbers($l1, $l2) {
		$init = new ListNode(0);
		$current = $init;
		$carry = 0;

		while ($l1 !== null || $l2 !== null || $carry > 0) {
			$x = ($l1 !== null) ? $l1->val : 0;
			$y = ($l2 !== null) ? $l2->val : 0;

			$sum = $x + $y + $carry;
			$carry = intdiv($sum, 10);

			$current->next = new ListNode($sum % 10);
			$current = $current->next;

			if ($l1 !== null) $l1 = $l1->next;
			if ($l2 !== null) $l2 = $l2->next;	
		}

		return $init->next;
	}	
}

function buildLinkedList(array $values) {
    $dummy = new ListNode();
    $current = $dummy;
    foreach ($values as $val) {
        $current->next = new ListNode($val);
        $current = $current->next;
    }
    return $dummy->next;
}

function linkedListToArray(?ListNode $node) {
    $result = [];
    while ($node !== null) {
        $result[] = $node->val;
        $node = $node->next;
    }
    return $result;
}

$s = new Solution();

$l1 = buildLinkedList([2,4,3]);
$l2 = buildLinkedList([5,6,4]);
print_r(linkedListToArray($s->addTwoNumbers($l1, $l2)));

$l1 = buildLinkedList([0]);
$l2 = buildLinkedList([0]);
print_r(linkedListToArray($s->addTwoNumbers($l1, $l2)));

$l1 = buildLinkedList([9,9,9,9]);
$l2 = buildLinkedList([9,9,9,9]);
print_r(linkedListToArray($s->addTwoNumbers($l1, $l2)));
