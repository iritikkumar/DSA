const fs = require('fs');
fs.writeFile('ritik.txt', 'Hello my name is Ritik.',(err)=>{
    console.log(err);
});
console.log("Harsh");
fs.appendFile('ritik.txt', ' I study at mnnit allahabad.',(err)=>{
    console.log(err);
});
console.log("Vijay");
fs.readFile('ritik.txt','utf-8',(err,data)=>{
    console.log(err);
    console.log(data);
});
console.log("Shubham");