//
//  main.cpp
//  GCD
//
//  Created by Xiaohe Huang on 10/25/15.
//  Copyright © 2015 Xiaohe Huang. All rights reserved.
//

#include <iostream>
int findgcd(int m, int n)
{
    if(m%n==0)
        return n;
    else
        return findgcd(n,m%n);
}
int main(int argc, const char * argv[]) {
    int array[]={4,8,12,24,16};
    
    int n=sizeof(array)/sizeof(array[0]);
    if(array==NULL||n<1) return 0;
    if(n==1)return array[0];
    int gcd=array[0];
    for(int i=1;i<n;i++)
    {
        gcd=findgcd(gcd,array[i]);
    }
    printf("%d\n",gcd);
    
    return 0;
}
