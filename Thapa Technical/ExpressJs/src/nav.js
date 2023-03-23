const express = require('express');
const app = express();

app.get("/",(req,res)=>{
    res.send("<h1>Hello from home</h1>");
});
app.get("/about",(req,res)=>{
    res.send("Hello from about");
});
app.get("/contactus",(req,res)=>{
    res.send("Hello from contact us");
});
app.get("/temp",(req,res)=>{
    // res.send([
//         {
//         id: 1,
//         name : "Ritik",
//         },
//         {
//         id: 1,
//         name : "Ritik",
//         },
//         {
//         id: 1,
//         name : "Ritik",
//         },
// ]);
    res.json([
        {
        id: 1,
        name : "Ritik",
        },
        {
        id: 1,
        name : "Harsh",
        },
        {
        id: 1,
        name : "shubham",
        },
]);
});
app.listen(8000,()=>{
    console.log("Listening to port 8000")
});