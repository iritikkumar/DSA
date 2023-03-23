const EventEmitter = require('events');
const event = new EventEmitter();
// event.on("sayMyName",()=>{
//     console.log("Your name is Ritik");
// });
// event.on("sayMyName",()=>{
//     console.log("Your name is Kumar");
// });
// event.on("sayMyName",()=>{
//     console.log("Your name is Thakur");
// });

// event.emit('sayMyName');
event.on("callBack",(sc,msg)=>{
    if(sc==200)
    {
        console.log(`status code is ${sc} and the page is ${msg}`);
    }
});
event.emit("callBack",200,"ok");