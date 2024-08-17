/* BMI Calculator
 * 
 * 1 inch = 2.54cm
 * 2.2046 pounds = 1km
 * bmi = w / (h ** 2)
*/

const height = prompt('Enter your height:') * 2.54,
			weight = prompt('Enter your weight:') / 2.2046,
			bmi = weight / (height ** 2);

console.log(`Your bmi is ${bmi}.`);