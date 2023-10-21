function memoize(fn) {
  const cache = new Map();
  return function (...args) {
    // this function will have a key which is the arguments passed to the function
    let key = args.toString();
    // if the key is not present in the map then add the key and value to the map
    if (!cache.has(key)) {
      cache.set(key, fn(...args));
    }
    // return the value of the key
    return cache.get(key);
  };
}
