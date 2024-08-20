const shoppingList = [];

shoppingList.splice(0, 0, 'Milk', 'Bread', 'Apple');
console.log(shoppingList);
/*
shoppingList.push('Bananas', 'Carrots', 'Lettuce', 'Eggs', 'Milkie', 'Juice', 'Pop', 'Juice', 'Pop');
*/

shoppingList.splice(1, 1, 'Bananas', 'Eggs')
console.log(shoppingList);

shoppingList.pop();
console.log('pop()', shoppingList);

shoppingList.sort()
console.log(shoppingList);


