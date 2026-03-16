// creating a linked list class and performing operation

class Node {
  // data members
  data;
  next;

  //methods / data functions

  printLL(head) {
    while (head !== null) {
      console.log(head.data + "->");
      head = head.next;
    }
    return;
  }
  // default constructor
  constructor() {
    this.data = data;
    this.next = null;
  }
}

let data = 2;
let head = new Node(data);
head.next = new Node(4);
console.log(head);
head.printLL(head);
head.printLL(head.next);
