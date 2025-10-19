# Definition for singly-linked list.
# class ListNode
#     attr_accessor :val, :next
#     def initialize(val = 0, _next = nil)
#         @val = val
#         @next = _next
#     end
# end
def add_two_numbers(l1, l2)
    dummy = ListNode.new(0)
    current = dummy
    carry = 0

    while l1 || l2 || carry > 0
        x = l1 ? l1.val : 0
        y = l2 ? l2.val : 0
        sum = x + y + carry

        carry = sum / 10
        current.next = ListNode.new(sum % 10)
        current = current.next

        l1 = l1.next if l1
        l2 = l2.next if l2
    end

    dummy.next
end
