var reduce = function (nums, fn, init) {
  if (nums.length == 0) return init;

  var accum = init;
  nums.forEach((e) => (accum = fn(accum, e)));
  return accum;
};
