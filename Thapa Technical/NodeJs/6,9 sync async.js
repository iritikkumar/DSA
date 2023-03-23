const fs = require("fs");
//-------------------------------------Sync----------------------------------------------
// fs.mkdirSync("thapa2");
// fs.writeFileSync("thapa2/bio.txt","Hello my name is Ritik Kumar. I study in MNNIT Allahabad.");
// fs.appendFileSync("thapa2/bio.txt"," I live in Bulandshahr");
// let buf_data = fs.readFileSync("thapa2/bio.txt");
// let org_data = buf_data.toString();
// console.log(org_data);
// fs.renameSync("thapa2/bio.txt","thapa2/mybio.txt");


// fs.unlinkSync("thapa2/mybio.txt");
// fs.rmdirSync('thapa2');

// -------------------------------------Async----------------------------------------------
// fs.mkdir('thapa',()=>{});
// fs.writeFile('thapa/bio.txt',"Hello my name is Ritik Kumar. I study in MNNIT Allahabad.",()=>{});
// fs.appendFile('thapa/bio.txt'," I live in Bulandshahr",()=>{});
// let info = fs.readFile('thapa/bio.txt','utf-8',(err,data)=>{
//         console.log(err);
//         console.log(data);
//     });
//     fs.rename('thapa/bio.txt','thapa/mybio.txt',()=>{});
    
//     fs.unlink("thapa/mybio.txt",()=>{});
    // fs.rmdir('thapa',()=>{});
