var createCounter = function (init) {
  var initial = init;
  return {
    increment: () => ++init,
    decrement: () => --init,
    reset: () => {
      init = initial;
      return init;
    },
  };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
