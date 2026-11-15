const t1 = performance.now();
for (let i = 1; i <= 10; i++) {
  let paraTag = document.createElement("p");
  paraTag.textContent = "para" + i;
  document.getElementById("parent").appendChild(paraTag);
}

// function : standard way to check how much time a code is taking to run
const t2 = performance.now();
console.log("time taken", t2 - t1);

// code portion2

const t3 = performance.now();
let myDiv = document.createElement("div");
for (let i = 1; i <= 10; i++) {
  let paraElement = document.createElement("p");
  paraElement.textContent = "paraContent " + i;
  myDiv.appendChild(paraElement);
}
document.body.appendChild(myDiv);
const t4 = performance.now();
console.log("total tiem taken", t4 - t3);

//Document Fragment : light weight copy of document object (takes does not take time for reflow and repaint )
/*
document.createDocumentFragement();
*/

const t5 = performance.now();
let fragment = document.createDocumentFragment();
for (let i = 1; i <= 10; i++) {
  let paraContent = document.createElement("p");
  paraContent.innerText = "para-content-fragement" + i;
  fragment.appendChild(paraContent);
}
document.body.appendChild(fragment);
const t6 = performance.now();

console.log("time taken", t6 - t5);
