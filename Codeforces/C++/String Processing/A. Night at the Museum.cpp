    #include <iostream>
    #include<cmath>
     
    using namespace std;
     
    int main()
    {
        int iLeft , iRight ,iSums =0 ;
        string sName ;
        cin >> sName ;
       iSums = min(abs('a'-sName[0]),26-abs('a'-sName[0]));
        for (int i =0 ; i <sName.size()-1; i++){
            iSums =iSums + min(abs(sName[i]-sName[i+1]),26-abs(sName[i]-sName[i+1]));
        }
        cout <<iSums;
        return 0;
    }
