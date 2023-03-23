const fs = require("fs");
let text = fs.readFileSync("del.txt","utf-8");
text = text.replace("dolor","thakur");
console.log(text);
console.log("Creating a new file . . .");
fs.writeFileSync("thakur.txt",text);