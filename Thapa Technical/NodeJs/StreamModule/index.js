const fs = require('fs');
const http = require('http');
const server = http.createServer();
server.on("request",(req,res)=>{
    
});
server.listen(8000,"127.0.0.1",()=>{
    console.log("listening to port");
})