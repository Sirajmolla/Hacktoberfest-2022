

// JavaScript program to split array and move first part to end.

function splitArr(arr, n, k){
	for (let i = 0; i < k; i++)
	{
		let x = arr[0];
		for (let j = 0; j < n - 1; ++j)
			arr[j] = arr[j + 1];
		arr[n - 1] = x;
	}
}
let arr = [ 12, 10, 5, 6, 52, 36 ];
let n = arr.length;
let position = 2;
splitArr(arr, n, position);
for (let i = 0; i < n; ++i)
console.log(arr[i],"")	

/**
 * Input : arr[] = {12, 10, 5, 6, 52, 36}
            k = 2
Output : arr[] = {5, 6, 52, 36, 12, 10}
Explanation : here k is two so first two elements are splitted and they are added at the end of array

 */
