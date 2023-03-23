const chalk = require("chalk");
const validator = require("validator");
// console.log(chalk.white.bold('Hello world!'));
const res = validator.isEmail('thapa@thapa.com');
console.log(res ? chalk.green.inverse(res) : chalk.inverse.red(res));