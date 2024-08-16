/* Chessboard
 * Exercise 003
 */

const board = 64;
let width = 8;
let tiles = '# ';

for (let i = 0; i < board; i++) {
  if (i % width === 0) {
    tiles += '\n';
  }
  console.log(tiles += '# ');
}
