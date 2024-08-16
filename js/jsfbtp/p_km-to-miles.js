/* Miles to km converter
 * 
 * 1 mile is 1.60934km
*/

const km = prompt('Enter a distance in km:');
const kmToMRatio = 1.60934;
const inMiles = km * kmToMRatio;

console.log('The distance of ${km}km is equal to ${inMiles} miles.');
