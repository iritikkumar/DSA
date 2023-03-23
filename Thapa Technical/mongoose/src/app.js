const mongoose = require("mongoose");
mongoose.connect("mongodb://localhost:27017/ritiklearning")
.then(()=>console.log("connection was successful...."))
.catch((err)=>console.log(err));