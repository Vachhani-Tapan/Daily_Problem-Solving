function sol(nums1, nums2) {
    let i = 0;
    let j = 0;
    let res = [];
    while (i < nums1.length && j < nums2.length) {
        if (nums1[i] == nums2[j]) {
            res.push(nums1[i]);
            i++;
            j++;
        }
        else if (nums1[i] < nums2[j]) {
            i++;
        }
        else {
            j++;
        }
    }
    return Math.min(...res);
}
console.log(sol([1,2,3,6],[2,3,4,5]));