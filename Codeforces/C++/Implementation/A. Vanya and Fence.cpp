    #include <iostream>
     
    using namespace std;
     
    int main()
    {
        int iNumbs , iHeight , c= 0 ,a;
     
        cin >> iNumbs >> iHeight ;
     
        while (iNumbs--){
            cin >> a ;
            if ( a <= iHeight) c++;
            else c+=2 ;
     
        }
        cout <<c;
        return 0;
    }
