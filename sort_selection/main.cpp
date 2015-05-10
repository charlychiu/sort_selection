//
//  main.cpp
//  sort_selection
//
//  Created by charlychiu on 2015/5/9.
//  Copyright (c) 2015年 charlychiu. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num=0;
    int array1[999]={0};
    cout<<"type how many num of number:"<<endl;
    cin>>num;
    cout<<"key the each number in"<<endl;
    
    for(int i=0;i<num;++i)
    {
        cin>>array1[i];
    }
    cout<<"sort_selection before:";
    for(int i=0;i<num;++i)
    {
        cout<<array1[i]<<" ";
    }
    
    for(int i=0;i<num;++i)
    {
        for(int j=i+1;j<num;++j)
        {
            if(array1[i]<array1[j])
            {
                swap(array1[i],array1[j]);
                for(int i=0;i<num;++i)
                {
                    cout<<array1[i]<<" ";
                }
                cout<<endl;
                
            }
            
        }
    }
    cout<<"sort_selection after:";
    for(int i=0;i<num;++i)
    {
        cout<<array1[i]<<" ";
    }
    
    
    
    return 0;
}
