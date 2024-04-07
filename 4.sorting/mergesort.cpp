#include <bits/stdc++.h>
using namespace std;
    
void merge(vector<int>&nums, int low, int mid, int high)    
{    
    int i, j, k;  
    int n1 = mid - low + 1;    
    int n2 = high - mid;    
      
    int left[n1], right[n2]; //temporary arrays  
      
    /* copy data to temp arrays */  
    for (int i = 0; i < n1; i++)    
    left[i] = nums[low + i];    
    for (int j = 0; j < n2; j++)    
    right[j] = nums[mid + 1 + j];    
      
    i = 0, /* initial index of first sub-array */  
    j = 0; /* initial index of second sub-array */   
    k = low;  /* initial index of merged sub-array */  
      
    while (i < n1 && j < n2)    
    {    
        if(left[i] <= right[j])    
        {    
            nums[k] = left[i];    
            i++;    
        }    
        else    
        {    
            nums[k] = right[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        nums[k] = left[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        nums[k] = right[j];    
        j++;    
        k++;    
    }    
    for(auto it:nums){
        cout<<it;    }
        cout<<"\n";
}    
       
    void funcc(vector<int>& nums,int low ,int high) {
        if(low>=high){
            return;
        }
        int mid = (low+high)/2;
        funcc(nums,low,mid);
        funcc(nums,mid+1,high);
        merge(nums,low,mid,high);
    }
int main(){
    vector<int >nums;
    nums = {2,5,4,3,1};
    int high  =  nums.size()-1;
    int  low = 0;
    funcc(nums,low,high);
return 8;
}