console.log('This will calculate the hypotenuse of a right triangle using the Pythagorean theorem.');

// Pythagorean theorem formula: a**2 + b**2 = c**2
// Rearranging the formula for c yields: c = square root of (a**2 + b**2)
//

let a = prompt('Enter the value of a:');
let b = prompt('Enter the value of b:');
let c = Math.sqrt(a**2 + b**2);
console.log('The hypotenuse of the right triangle with sides ' + a + ' and ' + b + ' is ' + c + '.' );
