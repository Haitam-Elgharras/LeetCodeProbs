// Given an integer n, return a counter function. This counter function initially returns n and then returns 1 more than the previous value every subsequent time it is called (n, n + 1, n + 2, etc).

var createCounter = function (n) {
  return () => n++;
};

var counter = createCounter(5);
console.log(counter()); // 5
console.log(counter()); // 6
console.log(counter()); // 7

/* EXPLICATION:

The mechanism by which the inner function (the one returned by createCounter) "knows" the value 
of n is through a concept in JavaScript called closures. Closures allow inner functions to access
 variables from their outer (enclosing) function even after the outer function has finished executing.
 
 */
