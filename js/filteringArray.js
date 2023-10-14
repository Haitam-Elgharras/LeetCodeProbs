var filter = function (arr, fn) {
  var filteredArr = [];
  arr.forEach((e, i) => {
    if (fn(e, i)) {
      filteredArr.push(e);
    }
  });
  return filteredArr;
};
