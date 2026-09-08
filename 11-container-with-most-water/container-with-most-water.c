int maxArea(int* height, int heightSize) {
   /*
    int i=0,e=heightSize-1,max=0,area,h;
while(i<e)
{
h=height[i]<height[e]?height[i]:height[e];
area=h*(e-i);
if(max<area)
max=area;
height[i]<height[e]?i++:e--;
}

return max;
*/
int i=0,e=heightSize-1,max=0;
while(i<e)
{
if(max<((height[i]<height[e]?height[i]:height[e])*(e-i)))
max=((height[i]<height[e]?height[i]:height[e])*(e-i));
height[i]<height[e]?i++:e--;
}

return max;

}