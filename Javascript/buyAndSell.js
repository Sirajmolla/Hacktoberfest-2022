/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/
/**
 * https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 * Time O(N) | Space O(1)
 * @param {number} prices
 * @return {number}
 */
var maxProfit = function (prices) {
    let [left, right, max] = [0, 1, 0];

    while (right < prices.length) {
        const canSlide = prices[right] <= prices[left];
        if (canSlide) left = right;

        const window = prices[right] - prices[left];

        max = Math.max(max, window);
        right++;
    }

    return max;
};
console.log(maxProfit([7, 1, 5, 3, 6, 4]))  //returns 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
console.log(maxProfit([7, 6, 4, 2, 3, 1])) // returns 1
console.log(maxProfit([6, 7, 2, 4, 5, 1])) // returns 3