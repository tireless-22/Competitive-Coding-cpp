#include <bits/stdc++.h>
using namespace std;


pair<int, int> findEntryWithLargestValue(
    map<int, int> sampleMap)
{
    pair<int, int> entryWithMaxValue
        = make_pair(0, 0);
    
    for (auto currentEntry = sampleMap.begin();
         currentEntry != sampleMap.end();
         ++currentEntry) {     
        if (currentEntry->second
            > entryWithMaxValue.second) {
            entryWithMaxValue
                = make_pair(
                    currentEntry->first,
                    currentEntry->second);
        }
    }
    return entryWithMaxValue;
}

int main (){
    
    int n;
    int i;
    cin>>n;
    i=n;
    int a1,a2,a3,b1,b2,b3,c1,c2,c3,count,res;
    while (n--){
        cin>>a1>>a2>>a3>>b1>>b3>>c1>>c2>>c3;
        map<int ,int > m;
        res=0;


        if((c3+a1)%2==0){
            m[(c3+a1)/2]++;
        }
        if((c2+a2)%2==0){
            m[(c2+a2)/2]++;
        }
        if((b3+b1)%2==0){
            m[(b3+b1)/2]++;
        }
        if((c1+a3)%2==0){
            m[(c1+a3)/2]++;
        }
        

        if((double)(a1+a3)/2==a2){
            res++;
        }
        if((double)(a1+c1)/2==b1){
            res++;
        }
        if((double)(c3+a3)/2==b3){
            res++;
        }
        if((double)(c1+c3)/2==c2){
            res++;
        }
        if((double)(3+7)==5){
    cout<<"hello";
}
        
       
        pair<int, int> entryWithMaxValue
        = findEntryWithLargestValue(m);

        cout<<"Case #"<<i-n<<": "<<entryWithMaxValue.second+res<<endl;   
    }  
    return 0;
}


  

