const http = require('http');
const server = http.createServer((req,res)=>{                   
    // console.log(req.url);
    if(req.url == "/"){
        res.end('Hello from home side');
    }
    else if(req.url == "/about"){
        res.end('Hello from about side');
    }
    else if(req.url == "/contact"){
        res.end('Hello from contact side');
    }
    else{
        res.writeHead(404, {"Content-type": "text/html"}); 
        res.end("<h1>404 Error page. Page does not exist</h1>");
    }
});
server.listen(8000,"127.0.0.1", ()=>{               // listening request
    console.log('listening to port 8000');
});