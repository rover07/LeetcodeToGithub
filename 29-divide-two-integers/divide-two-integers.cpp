class Solution {
public:
    int divide(int dividend, int divisor) {
        
//main attempt
        int start=0;
        long long end=abs(dividend);
        long long mid=start+(end-start)/2;
        int ans=-1;

        while(start<=end)
        { 
        if (divisor == -1 && dividend == INT_MIN) {
            return INT_MAX;
          }
        if (divisor == 1 && dividend == INT_MAX) {
            return INT_MAX;
            }
        if (divisor == -1 && dividend == INT_MAX) {
            return INT_MIN+1;
        }
        if (divisor == 1 && dividend == INT_MIN) {
            return INT_MIN;
        }
             if(dividend==divisor)
            {
             ans=1;
             break;
            }

              // we're checking whether mid is quotiont or not

        
            if(abs(mid*divisor)==abs(dividend))
            {
                ans= mid; //dont return here as the sign checking conditions 
                // at bottom won't be executed if anything returned here
                break;
            }    
            else if(abs(mid*divisor)<=abs(dividend))
            {
                ans=mid;
                start=mid+1;
                // return mid;
            }
            else if(abs(mid*divisor)>abs(dividend))
            {
                end=mid-1;
            }
            //making new mid
        mid=start+(end-start)/2;
        }

        //For modifying sign
        if((divisor>0 && dividend>0) || (divisor<0 && dividend<0))  
        {
            return abs(ans);
        }
        else //making ans negative
        {
            return -ans;
        }

    }
};



//jugaad

//         long long start=0;
//         long long end=abs(dividend);
//         long long mid=start+(end-start)/2;
//         long long ans=-1;

//         while(start<=end)
//         {   
//             // we're checking whether mid is quotiont or not
//             if((mid*divisor)==(dividend))
//             {
//                 ans= mid; //dont return here as the sign checking conditions 
//                 // at bottom won't be executed if anything returned here
//                 break;
//             }    
//             else if((mid*divisor)<=(dividend))
//             {
//                 ans=mid;
//                 start=mid+1;
//                 // return mid;
//             }
//             else if((mid*divisor)>(dividend))
//             {
//                 end=mid-1;
//             }
//             //making new mid
//             mid=(start/2)+(end/2);
//         }

//         //For modifying sign
//         if((divisor>0 && dividend>0) || (divisor<0 && dividend<0))  
//         {
    
    
//                 return min(ans, (long long)INT_MAX);
//         } 
//         else 
//         {
//             return max(-ans, (long long)INT_MIN);
//         }

//         // {
//         //     return ans;
//         // }
//         // else //making ans negative
//         // {
//         //     return -ans;
//         // }

//     }
// };