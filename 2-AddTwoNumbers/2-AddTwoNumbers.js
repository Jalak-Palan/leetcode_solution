// Last updated: 4/9/2026, 6:13:29 PM
// A simple linked list node
function ListNode(val, next = null) {
    this.val = val;
    this.next = next;
}

function addTwoNumbers(l1, l2) {
    let dummy = new ListNode(0);
    let current = dummy;
    let carry = 0;               

    for (; l1 || l2 || carry;) {
        let v1 = 0;
        let v2 = 0;

        if (l1) {
            v1 = l1.val;
            l1 = l1.next;
        }

        if (l2) {
            v2 = l2.val;
            l2 = l2.next;
        }

        let sum = v1 + v2 + carry;
        carry = Math.floor(sum / 10);

        current.next = new ListNode(sum % 10);
        current = current.next;
    }

    return dummy.next;
}