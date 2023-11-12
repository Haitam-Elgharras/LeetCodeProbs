class Solution
// {
// public:
//     int getSum(int a, int b)
//     {
//         float num = a - b;

//         switch ((int)num)
//         {
//         case 1:
//             return a * 2 - 1;
//             break;
//         case -1:
//             return b * 2 - 1;
//             break;
//         default:
//             break;
//         }

//         float current = 0;
//         if (num > 0)
//         {
//             num = num / 2;
//             current = a - num;
//             return (int)(current * 2);
//         }

//         num = -num / 2;
//         current = b - num;

//         return (int)(current * 2);
//     }
// };