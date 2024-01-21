// House robber using dynamic programming

var rob = function (nums) {
  let prevMax = 0; // Maximum value robbed excluding the current house
  let currMax = 0; // Maximum value robbed including the current house

  for (let num of nums) {
    let temp = currMax;
    currMax = Math.max(prevMax + num, currMax);
    prevMax = temp;
  }

  console.log(currMax);
};

var nums = [2, 7, 9, 3, 1];

rob(nums);

/*
let's go through each step of the iteration:

Initial Values: prevMax = 0, currMax = 0

First House (num = 2):

temp = 0
currMax = max(0 + 2, 0) = 2
prevMax = 0
Second House (num = 7):

temp = 2
currMax = max(0 + 7, 2) = 7
prevMax = 2
Third House (num = 9):

temp = 7
currMax = max(2 + 9, 7) = 11
prevMax = 7
Fourth House (num = 3):

temp = 11
currMax = max(7 + 3, 11) = 10
prevMax = 11
Fifth House (num = 1):

temp = 10
currMax = max(11 + 1, 10) = 12
prevMax = 10
*/
