var addTwoPromises = async function (promise1, promise2) {
  return promise1.then((v) => promise2.then((v2) => v + v2));
};

addTwoPromises(Promise.resolve(2), Promise.resolve(2)).then(console.log); // 4
