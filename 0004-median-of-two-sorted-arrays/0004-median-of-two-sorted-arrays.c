double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i, j, k;
    i = j = k = 0;
    int mergedSize = nums1Size + nums2Size;
    int mergedArr[mergedSize];
    while(i < nums1Size && j < nums2Size){
        if(nums1[i] < nums2[j]){
            mergedArr[k++] = nums1[i++];
        } else {
            mergedArr[k++] = nums2[j++];
        }
    }
    while(i < nums1Size){
        mergedArr[k++] = nums1[i++];
    }
    while(j < nums2Size){
        mergedArr[k++] = nums2[j++];
    }
    if(mergedSize % 2 != 0){
        return mergedArr[mergedSize/2];
    } else {
        return (mergedArr[(mergedSize - 1)/2] + mergedArr[(mergedSize)/2])/2.0;
    }
}