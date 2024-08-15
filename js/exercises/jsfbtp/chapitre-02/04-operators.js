let a = 2,
    b = 5,
    c = 10;

console.log(`a is ${a}, b is ${b}, and c is ${c}.`)
a += b;
console.log(`a + b is ${a}.`);

a /= c; 
console.log(`a divided by c is ${a}.`);

c %= b;
console.log(`The remainder of c divided by b is ${c}.`);

console.log(`The values of the variables are now a = ${a}, b = ${b}, and c = ${c}.`);
