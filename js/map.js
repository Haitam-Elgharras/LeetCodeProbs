//Apply Transform Over Each Element in Array
var map = function (arr, fn) {
  var newArr = [];

  arr.forEach((e, i) => (newArr[i] = fn(e, i)));
  return newArr;
};

// test case
var arr = [1, 2, 3];
var newArr = map(arr, function (item) {
  return item * 2;
});
console.log(newArr); // [2, 4, 6]
