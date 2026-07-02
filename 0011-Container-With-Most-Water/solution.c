int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize-1;
    int maxarea=0;
    int w=0;
    int h=0;
    
    while(left < right){
        w = right-left;
        h = (height[left]<height[right]) ? height[left] : height[right];
    if(maxarea < h*w){
        maxarea = h*w; 
    }
    if(height[left]<height[right]){
    left++;
    }
    else
    right--;
    }
    return maxarea;
}