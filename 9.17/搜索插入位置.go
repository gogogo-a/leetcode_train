package main
import "fmt"
//二分法，l一定是大于等于目标值的索引，r一定是小于目标值的索引
func searchInsert(nums []int, target int) int {
    
    l := 0
    r :=len(nums)-1
    for l<=r{
        m :=(r-l)/2+l
        if nums[m]==target{
            return m
        }else if nums[m]>target{
         
            r=m-1
        }else{
            l=m+1
        }
    }
    return l
    
}
func main() {
    nums := []int{1, 3, 5, 6}
    target := 5
    fmt.Println(searchInsert(nums, target))
}