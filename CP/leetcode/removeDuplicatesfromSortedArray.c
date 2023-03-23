        // int size = nums.size();
        // if(size<2)
        //     return size;
        // else if(size == 2){
        //     if(nums[0]==nums[1])
        //         return 1;
        //     else
        //         return 2;
        // }
        // else{
        //     for(int i=0;i<size;i++){
        //         int j = i;
        //         int cntD=0;
        //         while(nums[j]==nums[j+1] && j < size - 1){
        //             cntD++;
        //             j++;
        //         }
        //         for(int k=j+1;k<nums.size()&&cntD>0;k++){
        //             nums[k-cntD] = nums[k];
        //         }
        //         size -= cntD;
        //     }
        //     return size;
        // }
        // return 0;