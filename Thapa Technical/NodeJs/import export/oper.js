const add = (a,b)=>{
    return a+b;
};
const sub = (a,b)=>{
    return a-b;
};
const mult = (a,b)=>{
    return a*b;
};
const name  = "Ritik";
// module.exports = add;          // when single function is to be export

// module.exports.add = add;
// module.exports.sub = sub;
// module.exports.mult = mult;
// module.exports.name = name;

module.exports = {add, sub, mult, name};