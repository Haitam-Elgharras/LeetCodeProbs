// Description: Implement function composition
// if functions = [f, g, h] then compose(functions) should return f(g(h(x))).

var compose = function (functions) {
  functions.reverse();

  return function (x) {
    functions[0] = functions[0](x);
    for (let i = 0; i < functions.length - 1; i++) {
      functions[i + 1] = functions[i + 1](functions[i]);
    }
    return functions.pop();
  };
};

const fn = compose([(x) => x + 1, (x) => 2 * x, (x) => x * x]);
console.log(fn(4));
