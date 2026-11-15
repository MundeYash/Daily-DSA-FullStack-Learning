// console.log(EventTarget);

let paraContent = document.getElementById("f-para");
console.log(paraContent);
paraContent.textContent = "new para";

function cb(newContent) {
  paraContent.textContent = newContent;
}
// applying any event listener to a element
paraContent.addEventListener("click", () => {
  paraContent.textContent = "content change to newContent";
});

// removing any event listener from a element
paraContent.addEventListener("double-click", () => {
  paraContent.textContent = "content change to newContent";
});
// we can access the applied , event as object parameter throught event listner

// changing the default behavior of any event
function changeReference(event) {
  console.log("applied event is ", event);
  event.preventDefault();
  anchorElement.textContent = "click event content is changed";
}


let anchorElement = document.getElementById("f-anchor");
console.log("anchor element value is ", anchorElement);
anchorElement.addEventListener("click", changeReference);


// avoiding too many listners 

let paraList = document.getElementById("wrapper");
console.log(paraList); 
