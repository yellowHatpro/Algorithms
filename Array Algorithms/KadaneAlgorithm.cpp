//Kadane Algorithm

/*
- Where Kadane Algorithm actually works?
-> Where there is continuous subarray involved, and we have to find min size or max size subarray

- How it works?
-> Kadane algorithm tracks the current subarray sum,
    and if it's greater than the maximumSum, then update that.
     Kadane tracks the start , and if at any point currentSum drops below 0,
     we move the start to the current index.
     Because the optical subarray will never contain a subarray whose sum from beginning is below 0.
     In the case, when the start is below 0, we remove the negative portion of the subarray.
   NOTE : We don't reset when there is a negative number. if the current sum become negative, then only we restart.
 */

// max subarray sum
int maxSumSubarray(vector<int> v){
  int maxSum = v[0];
  int currentSum = v[0];
  for(int i = 1; i<v.size();i++){
    currentSum = max(0, currentSum);
    currentSum += v[i]; // This can also be written as currentSum = max( 0 + v[i], currentSum + v[i])
    maxSum = max(maxSum, currentSum);
  }
  return maxSum;
}

//min subarray sum
int minSumSubarray(vector<int> v){
  int minSum = v[0];
  int currentMin = v[0];
  for(int i = 1; i<v.size();i++){
    currentMin = min(v[i], currentMin+v[i]);
    minSum = min(minSum, currentMin);
  }
  return minSum;
}

//MaxSum and MinSum identical, only max changes to min inside for loop