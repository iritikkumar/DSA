const express = require('express');
const path = require('path');
const app = express();
const hbs = require('hbs');
// console.log(path.join(__dirname,"../public"));
const staticPath = path.join(__dirname,"../public");
const templatePath = path.join(__dirname,"../templates");             //for customising folder name
const partialsPath = path.join(__dirname,"../templates/partials");             
// app.use(express.static(staticPath));


// template engine route
app.set("view engine", "hbs");
app.set('views',`${templatePath}/views`);  
hbs.registerPartials(partialsPath);                                      //for customising folder name
app.get("/",(req,res)=>{
    res.render("home");
})

app.get("/about",(req,res)=>{
    res.render("about");
});

app.get("/about",(req,res)=>{
res.send("hello from the about page");
});

app.get("*",(req,res)=>{
res.send("<h1>Error: 404 page not found</h1>");
});

app.listen(8000,()=>{
    console.log("Listening to port at port 8000")
});