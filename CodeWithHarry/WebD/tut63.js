// console.log("Welcome to Nodejs");
const http = require('http');

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/html');
  res.end(`Hello World! Welcome to my website\n<!DOCTYPE html>
  <html lang="en">
  <head>
      <meta charset="UTF-8">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <meta http-equiv="X-UA-Compatible" content="ie=edge">
      <title>Pseudo selectors & more designing</title>
      <link href="https://fonts.googleapis.com/css2?family=Style+Script&display=swap" rel="stylesheet">
      <link href="https://fonts.googleapis.com/css2?family=MonteCarlo&family=Style+Script&display=swap" rel="stylesheet">
      <link href="https://fonts.googleapis.com/css2?family=Lobster&display=swap" rel="stylesheet">
      <style>
          body{
              /* font-family: 'MonteCarlo', cursive; */
              font-family: 'Lobster', cursive;
              font-size: 25px;
          }
          .container{
              border: 2px solid blue;
              border-radius: 9px;
              background-color: rgb(213 250 250);
              padding: 34px;
              margin: 34px auto;
              width: 666px;
          }
          #cont2{
              border: 2px solid blue;
              border-radius: 9px;
              background-color: rgb(213 250 250);
              padding: 34px;
              margin: 34px auto;
              width: 666px;
          }
          a{
              text-decoration: none;
              color: black;
          }
          a:hover{
              color: rgb(5, 0, 0);
              background-color: rgb(221, 166, 38);
          }
          a:visited{
              background-color: yellow;
          }
          a:active{
              background-color:darkblue;
          }
          .btn{
              font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
              font-weight: bold;
              background-color: rgb(175, 208, 238);
              padding:6px;
              border: none;
              cursor:pointer;
              font-size: 13px;
              border-radius: 4px;
          }
          .btn:hover{
              color:rgb(75, 58, 58);
              background-color: rgb(137, 189, 236);
              border: 1px solid black;
          }
          .bttn{
              text-decoration: none;
              font-family: cursive;
              font-weight: bold;
              background-color: rgb(175, 208, 238);
              padding:6px;
              border: none;
              cursor:pointer;
              font-size: 13px;
              border-radius: 4px;
          }
          .bttn:hover{
              color:rgb(75, 58, 58);
              background-color: rgb(137, 189, 236);
              border: 1px solid black;
          }
      </style>
  </head>
  <body>
      <div class="container" id="cont1">
          <h3>This is my heading</h3>
          <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Obcaecati, reprehenderit. Quam culpa eius aliquam id cumque saepe, provident odio sed eos quia nihil modi error voluptate vero autem quibusdam aperiam exercitationem! Quam, consequuntur velit.</p>
          <a href="https://facebook.com" target="blank" class="btn">Read more</a>
          <button class="btn">Contact us</button>
          
      </div>
      <div class="container" id="cont2">
          <a href="https://instagram.com" target="blank" class="bttn">Mobile</a>
          <button class="bttn">Email</button>
      </div>
  </body>
  </html>
  `);
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});