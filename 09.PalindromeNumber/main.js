/**
 * Reverses a given string.
 * @param {string} str 
 * @returns {string} The reversed string.
 */
function reverseString(str) {
  const array = str.split('')
  array.reverse()
  const reversedStr = array.join('')
  return reversedStr
}

/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
  const strX = String(x)
  const reversedStrX = reverseString(strX)

  if (strX === reversedStrX)
    return true
  else
    return false
};

console.log(isPalindrome(121))
console.log(isPalindrome(-121))
console.log(isPalindrome(10))
