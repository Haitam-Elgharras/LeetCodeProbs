var once = function (fn) {
  let flag = false;
  return function (...args) {
    if (!flag) {
      flag = true;
      return fn(...args);
    }
    return undefined;
  };
};

let fn = once((x) => x + 1);

let oncefn = once(fn);

console.log(oncefn(4));
console.log(oncefn(4));
console.log(oncefn(4));
