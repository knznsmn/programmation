/* FizzBuzz
 * Exercise 002
 */

let countCent = 1, cent = 100;
while (countCent <= cent) {
  if ((countCent % 5) === 0 && (countCent % 3) !== 0) {
    console.log('Buzz');
  }
  else if ((countCent %3) === 0) {
    console.log('Fizz')
  }
  else {
    console.log(countCent);
  }
  countCent++;
}
