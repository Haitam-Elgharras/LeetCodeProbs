var expect = function (val) {
  const IIFEError = (message) => {
    throw new Error(message);
  };

  return {
    toBe: (val1) => val === val1 || IIFEError("Not Equal"),
    notToBe: (val1) => val !== val1 || IIFEError("Equal"),
  };
};

expect(5).toBe(2);
